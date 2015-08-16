############################################################
# Automatically created makefile for Calculator
############################################################

# Set variables ############################################
CXX         := g++ 
CC          := gcc
LD          := g++ 
CINT        := $(shell which cint)
CINTINCDIRU := $(shell cint-config --incdir)
CINTINCDIRW := $(shell echo  $(CINTINCDIRU) )
CINTLIB     := $(shell cint-config --unix --libdir)/libCint.so
IPATH       :=  -I/nobackup/redeshmu/cint/include/cint
CMACRO      :=  -DG__SHAREDLIB -DG__OSFDLL -DG__ANSI -DG__ERRORCALLBACK -DG__SIGNEDCHAR -DG__NEWSTDHEADER -DG__CINT_VER6 -DG__NATIVELONGLONG -DG__P2FCAST -DG__STD_EXCEPTION -DG__HAVE_CONFIG -DG__NOMAKEINFO 
CXXMACRO    :=   -DG__SHAREDLIB -DG__OSFDLL -DG__ANSI -DG__ERRORCALLBACK -DG__SIGNEDCHAR -DG__NEWSTDHEADER -DG__CINT_VER6 -DG__NATIVELONGLONG -DG__P2FCAST -DG__STD_EXCEPTION -DG__HAVE_CONFIG -DG__NOMAKEINFO 
CFLAGS      := -O2 -m64  -fPIC   
CXXFLAGS    := -O2 -m64  -fPIC  -DG__GNUREADLINE  
CINTIPATH   := -I$(CINTINCDIRW)
OBJECT      := Calculator
LINKSPEC    :=  -DG__CLINK_ON

# Set File names ###########################################
CIFC        := G__c_Calculator.c
CIFH        := G__c_Calculator.h
CIFO        := G__c_Calculator.o
CXXIFC      :=
CXXIFH      :=
CXXIFO      :=

LIBS        := -L"$(shell cint-config --libdir)" $(subst @imp@,Cint,-l@imp@) -lm -ldl  

CINTOPT     := 
COFILES     := Calculator.o simpleMath.o 

CHEADER     :=  MathLib.h
CHEADERCINT :=  MathLib.h
CSTUB       := 
CSTUBCINT   := 

CXXOFILES   := 

CXXHEADER   := 
CXXHEADERCINT := 

CXXSTUB     := 
CXXSTUBCINT := 

MAINDIRU    := /nobackup/redeshmu/cint/share/cint/cint/main/
MAINDIRW    := /nobackup/redeshmu/cint/share/cint/cint/main/
READLINEA   := /usr/lib64/libreadline.so /usr/lib64/libncurses.so
# Link Object #############################################
$(OBJECT) : $(CINTLIB) $(READLINEA) G__setup.o $(COFILES) $(CXXOFILES) $(CIFO) $(CXXIFO)
	$(LD) -O2 -m64  $(CCOPT) -o $(OBJECT) $(CIFO) $(CXXIFO) $(COFILES) $(CXXOFILES) G__setup.o $(LIBS) $(READLINEA)

# Compile User source files ##############################
Calculator.o: Calculator.c $(CHEADER)
	 $(CC) $(IPATH) $(CMACRO) -O2 -m64  -fPIC  -o Calculator.o -c Calculator.c
simpleMath.o: simpleMath.c $(CHEADER)
	 $(CC) $(IPATH) $(CMACRO) -O2 -m64  -fPIC  -o simpleMath.o -c simpleMath.c

# Compile main function  #################################
G__main.o: $(MAINDIRU)/G__main.c
	$(CC)  $(CMACRO) $(CFLAGS) $(CCOPT) $(LINKSPEC) $(CINTIPATH) -o $@ -c $<

# Compile dictionary setup routine #######################
G__setup.o: $(MAINDIRU)/G__setup.c $(CINTINCDIRU)/G__ci.h
	$(CC) $(LINKSPEC) $(CINTIPATH) $(CMACRO) $(CFLAGS) -o $@ -c $(MAINDIRW)/G__setup.c

# Compile C Interface routine ############################
$(CIFO) : $(CIFC)
	$(CC) $(CINTIPATH) $(IPATH) $(CMACRO) $(CFLAGS) $(CCOPT) -c $(CIFC)

# Create C Interface routine #############################
$(CIFC) : $(CHEADER) $(CSTUB) $(CINT)
	$(CINT)  -K -w0 -zCalculator -n$(CIFC) $(DLLSPEC) -D__MAKECINT__ -DG__MAKECINT $(CMACRO)  -c-2 $(KRMODE) $(CINTIPATH) $(IPATH) $(CMACRO) $(CINTOPT) $(CHEADERCINT)

# Clean up #################################################

clean :
	$(RM) $(OBJECT) core $(CIFO) $(CIFC) $(CIFH) $(CXXIFO) $(CXXIFC) $(CXXIFH) $(RMCOFILES) $(RMCXXOFILES) G__main.o G__setup.o

# re-makecint ##############################################
makecint :
	makecint  -mk Makefile -m -I/nobackup/redeshmu/cint/include/cint -o Calculator -h MathLib.h -C Calculator.c simpleMath.c

