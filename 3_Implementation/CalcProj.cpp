#include<stdio.h>
#include<stdlib.h>>
#include<math.h>
#include "Calculator.h"
typedef struct Calculator{
    float x;
    float y;
};

int main(void) {
	Calculator c;
int choice,result1;
float result;
float(*funct_ptr[])(float, float) = {add, sub, mul, divi,power,percent,power_y,power_3};
float(*funct0_ptr[])(float) = {square_r,log_10,sin_v,cos_v,tan_v,sin_inv,cos_inv,tan_inv,fact};
int (*funct1_ptr[])(int, int)={modu};
float (*funct2_ptr[])(float, int)={power_2,power_3,power_neg,power_to_10};

do {
printf("\nSelect your operation (0 to exit):\n");
printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
printf("12. 10 ^ X\n13. X!\n14. Percent \n15. log10(x)\n16. Modulus\n");
printf("17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n");
printf("21. Sec(X)\n22. Cot(X)\n");
printf("\nEnter the Choice: ");
scanf("%d", &choice);

if(choice == 0) exit(0);
switch(choice) {

case 1:
printf("Enter X: ");
scanf("%f", &c.x);
printf("\nEnter Y: ");
scanf("%f", &c.y);
result=funct_ptr[0](c.x, c.y);
printf("\nResult: %f\n", result);
break;

case 2:
printf("Enter X: ");
scanf("%f", &c.x);
printf("\nEnter Y: ");
scanf("%f", &c.y);
result=funct_ptr[1](c.x, c.y);
printf("\nResult: %f\n", result);
break;

case 3:
printf("Enter X: ");
scanf("%f", &c.x);
printf("\nEnter Y: ");
scanf("%f", &c.y);
result=funct_ptr[2](c.x, c.y);
printf("\nResult: %f\n", result);
break;

case 4:
printf("Enter X: ");
scanf("%f", &c.x);
printf("\nEnter Y: ");
scanf("%f", &c.y);
result=funct_ptr[3](c.x, c.y);
printf("\nResult: %f\n", result);
break;

case 5:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[0](c.x);
printf("\nResult: %f\n", result);
break;

case 6:
printf("Enter X: ");
scanf("%f", &c.x);
printf("\nEnter Y: ");
scanf("%f", &c.y);
result=funct_ptr[4](c.x, c.y);
printf("\nResult: %f\n", result);
break;

case 7:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct2_ptr[0](c.x, 2);
printf("\nResult: %f\n", result);
break;

case 8:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct2_ptr[1](c.x, 3);
printf("\nResult: %f\n", result);
break;

case 9:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct2_ptr[2](c.x, -1);
printf("\nResult: %f\n", result);
break;

case 10:
printf("Enter X: ");
scanf("%f", &c.x);
printf("\nEnter Y: ");
scanf("%f", &c.y);
result=funct_ptr[6](c.x, c.y);
printf("\nResult: %f\n", result);
break;

case 11:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct_ptr[7](c.x, 3);
printf("\nResult: %f\n", result);
break;

case 12:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct2_ptr[3](10,c.x);
printf("\nResult: %f\n", result);
break;

case 13:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[8](c.x);
printf("\nResult: %.f\n", result);
break;

case 14:
printf("Enter X: ");
scanf("%f", &c.x);
printf("\nEnter Y: ");
scanf("%f", &c.y);
result=funct_ptr[5](c.x, c.y);
printf("\nResult: %.2f\n", result);
break;

case 15:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[1](c.x);
printf("\nResult: %.2f\n", result);
break;

case 16:
printf("Enter X: ");
scanf("%d", &c.x);
printf("\nEnter Y: ");
scanf("%d", &c.y);
result1=funct1_ptr[0](c.x,c.y);
printf("\nResult: %d\n", result1);
break;

case 17:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[2](c.x);
printf("\nResult: %.2f\n", result);
break;

case 18:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[3](c.x);
printf("\nResult: %.2f\n", result);
break;

case 19:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[4](c.x);
printf("\nResult: %.2f\n", result);
break;

case 20:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[5](c.x);
printf("\nResult: %.2f\n", result);
break;

case 21:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[6](c.x);
printf("\nResult: %.2f\n", result);
break;

case 22:
printf("Enter X: ");
scanf("%f", &c.x);
result=funct0_ptr[7](c.x);
printf("\nResult: %.2f\n", result);
break;


default:
printf("\nInvalid Choice!\n");
}
} while(choice);
return 0;
}



