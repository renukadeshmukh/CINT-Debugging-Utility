/********************************************************
* G__c_Calculator.c
********************************************************/
#include "G__c_Calculator.h"
void G__c_reset_tagtable();
void G__set_c_environment() {
  G__add_ipath("/nobackup/redeshmu/cint/include/cint");
  G__add_compiledheader("MathLib.h");
  G__add_compiledheader("<stdio.h");
  G__add_compiledheader("<stdfunc.dll");
  G__c_reset_tagtable();
}
int G__c_dllrev() { return(30051515); }

/* Setting up global function */
static int G__Calculator__0_124(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) multip((int) G__int(libp->para[0]), (int) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Calculator__0_125(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) multiply_numbers_from_struct());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Calculator__0_126(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      set_numbers((float) G__double(libp->para[0]), (float) G__double(libp->para[1]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Calculator__0_127(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 102, (double) division((float) G__double(libp->para[0]), (float) G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Calculator__0_128(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 73, (long) getAddressOfArray());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Calculator__0_129(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) add2nums((int) G__int(libp->para[0]), (int) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Calculator__0_130(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) sub2nums((int) G__int(libp->para[0]), (int) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Calculator__0_131(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) getstruct());
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* typedef information setup/
*********************************************************/
void G__c_setup_typetable() {

   /* Setting up typedef entry */
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* struct result */
static void G__setup_memvarresult(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__LN_result));
   { struct result *p; p=(struct result*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->num1)-(long)(p)),102,0,0,-1,-1,-1,1,"num1=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->num2)-(long)(p)),102,0,0,-1,-1,-1,1,"num2=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->product)-(long)(p)),102,0,0,-1,-1,-1,1,"product=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->quotient)-(long)(p)),102,0,0,-1,-1,-1,1,"quotient=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

void G__c_setup_memvar() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)G__PVOID,112,0,0,-1,-1,-1,1,"__GNUC__=4",1,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,112,0,0,-1,-1,-1,1,"__GNUC_MINOR__=4",1,(char*)NULL);

   G__resetglobalenv();
}
void G__c_setup_global() {
  G__cpp_setup_global0();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
   G__memfunc_setup("multip", 667, G__Calculator__0_124, 105, -1, -1, 0, 2, 1, 1, 0, 
"i - - 0 - a i - - 0 - b", (char*) NULL
#ifndef multip
, (void*) multip, 0);
#else
, (void*) NULL, 0);
#endif
   G__memfunc_setup("multiply_numbers_from_struct", 3058, G__Calculator__0_125, 105, -1, -1, 0, 0, 0, 1, 0, "", (char*) NULL
#ifndef multiply_numbers_from_struct
, (void*) multiply_numbers_from_struct, 0);
#else
, (void*) NULL, 0);
#endif
   G__memfunc_setup("set_numbers", 1191, G__Calculator__0_126, 121, -1, -1, 0, 2, 1, 1, 0, 
"f - - 0 - num1 f - - 0 - num2", (char*) NULL
#ifndef set_numbers
, (void*) set_numbers, 0);
#else
, (void*) NULL, 0);
#endif
   G__memfunc_setup("division", 869, G__Calculator__0_127, 102, -1, -1, 0, 2, 1, 1, 0, 
"f - - 0 - a f - - 0 - b", (char*) NULL
#ifndef division
, (void*) division, 0);
#else
, (void*) NULL, 0);
#endif
   G__memfunc_setup("getAddressOfArray", 1722, G__Calculator__0_128, 73, -1, -1, 0, 0, 0, 1, 0, "", (char*) NULL
#ifndef getAddressOfArray
, (void*) getAddressOfArray, 0);
#else
, (void*) NULL, 0);
#endif
   G__memfunc_setup("add2nums", 798, G__Calculator__0_129, 105, -1, -1, 0, 2, 1, 1, 0, 
"i - - 0 - a i - - 0 - b", (char*) NULL
#ifndef add2nums
, (void*) add2nums, 0);
#else
, (void*) NULL, 0);
#endif
   G__memfunc_setup("sub2nums", 831, G__Calculator__0_130, 105, -1, -1, 0, 2, 1, 1, 0, 
"i - - 0 - a i - - 0 - b", (char*) NULL
#ifndef sub2nums
, (void*) sub2nums, 0);
#else
, (void*) NULL, 0);
#endif
   G__memfunc_setup("getstruct", 997, G__Calculator__0_131, 85, G__get_linked_tagnum(&G__LN_result), -1, 0, 0, 0, 1, 0, "", (char*) NULL
#ifndef getstruct
, (void*) getstruct, 0);
#else
, (void*) NULL, 0);
#endif

   G__resetifuncposition();
}

void G__c_setup_func() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__LN_result = { "result" , 115 , -1 };

/* Reset class/struct taginfo */
void G__c_reset_tagtable() {
  G__LN_result.tagnum = -1 ;
}


void G__c_setup_tagtable() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__LN_result),sizeof(struct result),-2,0,(char*)NULL,G__setup_memvarresult,NULL);
}
void G__c_setup() {
  G__check_setup_version(30051515,"G__c_setup()");
  G__set_c_environment();
  G__c_setup_tagtable();

  G__c_setup_typetable();

  G__c_setup_memvar();

  G__c_setup_global();
  G__c_setup_func();
  return;
}
