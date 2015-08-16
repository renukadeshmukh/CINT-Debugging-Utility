#include "MathLib.h"


void script(const char* msg="my default message") 
{
	int* addr;
        // ###### Use case 1#####
	addr = getAddressOfArray();
        printf("\n#####Use case 1: Access the DS using the address/pointer######\n");
        printf("\n The first element of the array is : %d the second element is :%d\n\n",*addr,*(++addr));
       //####### Use case 2#####
       *addr = 7;
       printf("\n#####Use case 2: Change the DS elements using the address/pointer######\n");
       printf("\n The first element of the array after changing is : %d \n\n",*addr);
       // ###########Use Case 3##########
        struct result *a;
        a = getstruct();
        multip(23,90);
        division(4.5,6.5);
        printf("\n#####Use case 3: Call functions of the application with custom values######\n");
	printf("\n The product is : %d and the quotient is :%f\n\n",a->product,a->quotient); 
       //###########Use case 4: Setting values of DS and seeing how the affect other calls#######
        set_numbers(3,5);
        multiply_numbers_from_struct();
        printf("\n###########Use case 4: Setting values of DS and seeing how the affect other calls#####\n");
        printf("\n The product after manipulating the struct elements is  : %d \n",a->product);       
	//#########Use Case 5 : Function across multiple files ##########
	int sum = add2nums(10,210);
	printf("\n#########Use Case 5 : Function across multiple files #########\n");
	printf("\nAdding numbers using add2num function results in a sum of %d\n", sum);

}

