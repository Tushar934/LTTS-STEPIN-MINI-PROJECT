/**
 * @file calcmain.c
 * @author 260766
 */
#include "header.h"

int main(void) {
	calc1 c1;
    calc2 c2;
    calc3 c3;
    calc4 c4;
    calc5 c5;
    int choice,result1;
    float result;

do {
printf("\nMathematical Operations (0 to exit):\n");
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
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=add(&c1);
printf("\nResult: %f\n", result);
break;

case 2:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=sub(&c1);
printf("\nResult: %f\n", result);
break;

case 3:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=mul(&c1);
printf("\nResult: %f\n", result);
break;

case 4:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=divi(&c1);
printf("\nResult: %f\n", result);
break;

case 5:
printf("Enter X: ");
scanf("%f", &c5.i);
result=square_r(&c5);
printf("\nResult: %f\n", result);
break;

case 6:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=power(&c1);
printf("\nResult: %f\n", result);
break;

case 7:
printf("Enter X: ");
scanf("%f", &c3.e);
c3.f=2;
result=power_2(&c3);
printf("\nResult: %f\n", result);
break;

case 8:
printf("Enter X: ");
scanf("%f", &c3.e);
c3.f=3;
result=power_3(&c3);
printf("\nResult: %f\n", result);
break;

case 9:
printf("Enter X: ");
scanf("%f", &c3.e);
c3.f=-1;
result=power_neg(&c3);
printf("\nResult: %f\n", result);
break;

case 10:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=power_y(&c1);
printf("\nResult: %f\n", result);
break;

case 11:
printf("Enter X: ");
scanf("%f", &c1.a);
c1.b=3;
result=power_one_divideby_3(&c1);
printf("\nResult: %f\n", result);
break;

case 12:
c4.g=10;
printf("Enter X: ");
scanf("%f", &c4.h);
result=power_to_10(&c4);
printf("\nResult: %f\n", result);
break;

case 13:
printf("Enter X: ");
scanf("%f", &c5.i);
result=fact(&c5);
printf("\nResult: %.f\n", result);
break;

case 14:
printf("Enter X: ");
scanf("%f", &c1.a);
printf("\nEnter Y: ");
scanf("%f", &c1.b);
result=percent(&c1);
printf("\nResult: %.2f\n", result);
break;

case 15:
printf("Enter X: ");
scanf("%f", &c5.i);
result=log_10(&c5);
printf("\nResult: %.2f\n", result);
break;

case 16:
printf("Enter X: ");
scanf("%d", &c2.c);
printf("\nEnter Y: ");
scanf("%d", &c2.d);
result1=modu(&c2);
printf("\nResult: %d\n", result1);
break;

case 17:
printf("Enter X: ");
scanf("%f", &c5.i);
result=sin_v(&c5);
printf("\nResult: %.2f\n", result);
break;

case 18:
printf("Enter X: ");
scanf("%f", &c5.i);
result=cos_v(&c5);
printf("\nResult: %.2f\n", result);
break;

case 19:
printf("Enter X: ");
scanf("%f", &c5.i);
result=tan_v(&c5);
printf("\nResult: %.2f\n", result);
break;

case 20:
printf("Enter X: ");
scanf("%f", &c5.i);
result=sin_inv(&c5);
printf("\nResult: %.2f\n", result);
break;

case 21:
printf("Enter X: ");
scanf("%f", &c5.i);
result=cos_inv(&c5);
printf("\nResult: %.2f\n", result);
break;

case 22:
printf("Enter X: ");
scanf("%f", &c5.i);
result=tan_inv(&c5);
printf("\nResult: %.2f\n", result);
break;

default:
printf("\nInvalid Choice!\n");
}
} while(choice);
return 0;
}
