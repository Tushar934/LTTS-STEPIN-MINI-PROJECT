#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "calc.h"

float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float mul(float a, float b) {
    return a * b;
}
float divi(float a, float b) {
    return a / b;
}
float square_r(float a){
    return sqrt(a);
}
float power(float a,float b){
 return pow(a,b);
}
float power_2(float a,int b){
    return pow(a,b);
}

float power_3(float a,int b){
    return pow(a,b);
}

float power_neg(float a,int b){
    return pow(a,b);
}
float power_to_10(float a,int b){
    return pow(a,b);
}
float log_10(float a){
    return log10(a);
}
int modu(int a,int b){
    return a%b;
}
float sin_v(float a){
    return sin(a * 3.14159 / 180);
}
float cos_v(float a){
    return cos(a * 3.14159 / 180);
}
float tan_v(float a){
    return tan(a * 3.14159 / 180);;
}
float sin_inv(float a){
    return 1 / (sin(a * 3.14159 / 180));
}
float cos_inv(float a){
    return 1 / (cos(a * 3.14159 / 180));
}
float tan_inv(float a){
    return 1 / (tan(a * 3.14159 / 180));
}
float percent(float a,float b)
{
return (a*b)/100;
}
float fact(float a){
    float result = 1;
    for(int i = 1; i <= a; i++) {
    result = result * i;
}
        return result;
}
float power_y(float a, float b){
    return pow(a, (1/b));
}
float power_3(float a, float b){
    return pow(a, (1/b));
}

