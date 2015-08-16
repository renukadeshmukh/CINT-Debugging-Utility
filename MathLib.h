#include <stdio.h>

struct result
{ 
    float num1;
    float num2;
    float product;
    float quotient;

};

int multip(int a , int b);
int multiply_numbers_from_struct();
void set_numbers(float num1, float num2);
float division(float a, float b); 
int* getAddressOfArray();
//void printMsgCal();
int add2nums(int a, int b);
int sub2nums(int a, int b);
struct result* getstruct();
