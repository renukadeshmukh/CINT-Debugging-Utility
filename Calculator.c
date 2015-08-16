#include <stdio.h>
#include "G__ci.h"
#include "MathLib.h"
#include "simpleMath.h"


/*struct result
{
        int product;
        float quotient;
};*/

struct result res;

int array[] = {1,2,3,4,5};


void setupCint();
void LoadScriptfileAfterwards(int a, int b);

int main()
{
	int a=34,b=45;
	setupCint();
	
	res.product = multip(a,b);
	res.quotient = division(a,b); 
	LoadScriptfileAfterwards(a,b);
}

void setupCint(){
	G__init_cint("Calculator script.c");
	G__scratch_all();
}

void LoadScriptfileAfterwards(int a, int b) {
  int state;
  state=G__init_cint("cint");
  switch(state) {
  case G__INIT_CINT_SUCCESS_MAIN:
    /* Should never happen */
    break;
  case G__INIT_CINT_SUCCESS:
    state=G__loadfile("script.c");
    if(state==G__LOADFILE_SUCCESS) {
      // G__calc and G__exec_text API can be used to evaluate C/C++ command
      // Read doc/ref.txt for those APIs.
      /*char funcStr[15];
//	sprintf(funcStr, "multip(%d, %d)", a , b);
//	printf("\n\n%s", funcStr); */

      G__calc("script(\"Calling from compiled main application 2\")");
//      G__exec_text("script(\"Calling from compiled main application 2\")");
    }
    break;
  case G__INIT_CINT_FAILURE:
  default:
    printf("Cint initialization failed.\n");
  }
G__scratch_all();
}

void set_numbers(float num1, float num2)
{
   res.num1 = num1;
   res.num2 = num2;
} 
int* getAddressOfArray()
// getAddressOfArray()
{
	return array;
}
struct result* getstruct()
{
    return &res;
}
int multip(int a , int b)
{
        int mul = a * b; 
	//printf("\n the result is %d\n",mul);
        res.product = mul;
        return mul;
}
int multiply_numbers_from_struct()
{
    res.product = res.num1 * res.num2;
}
float division(float a, float b)
{
        res.quotient =  a/b;
        return (res.quotient);
}

int add2nums(int a, int b)
{
	return addition(a,b);
}

int sub2nums(int a, int b)
{
	int subs = substraction(a,b);
	return subs;
}

