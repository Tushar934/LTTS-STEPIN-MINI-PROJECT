/**
 * @file calcheader.h
 * @author 260766
 */

#ifndef __CALCHEADER_H__
#define __CALCHEADER_H__
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * structure having 2 vaiables
 * @param a
 * @param b
 */
typedef struct calc1{
    float a;
    float b;
}calc1;
/**
 * structure having 2 vaiables
 * @param c
 * @param d
 */
typedef struct calc2{
    int c;
    int d;
}calc2;
/**
 * structure having 2 vaiables
 * @param e
 * @param f
 */
typedef struct calc3{
    float e;
    int f;
}calc3;
/**
 * structure having 2 vaiables
 * @param g
 * @param h
 */
typedef struct calc4{
    int g;
    float h;
}calc4;
/**
 * structure having 1 vaiables
 * @param i
 */
typedef struct calc5{
    float i;
}calc5;

/**
*  addition the a and b and returns the result
* @param[in] a
* @param[in] b
* @return Result of a+b
*/
float add(calc1 *c1);
/**
*  substracts the a and b and returns the result
* @param[in] a
* @param[in] b
* @return Result of a-b
*/
float sub(calc1 *c1);
/**
*  multiply the a and b and returns the result
* @param[in] a
* @param[in] b
* @return Result of a*b
*/
float mul(calc1 *c1) ;
/**
*  divide the a and b and returns the result
* @param[in] a
* @param[in] b
* @return Result of a/b
*/
float divi(calc1 *c1) ;
/**
*  square root the i and returns the result
* @param[in] i
* @return Result of square root of i
*/
float square_r(calc5 *c5);
/**
*  power the a ^ b and returns the result
* @param[in] a
* @param[in] b
* @return Result of a^b
*/
float power(calc1 *c1);
/**
*  power the e ^ f and returns the result
* @param[in] e
* @param[in] f
* @return Result of e^2
*/
float power_2(calc3 *c3);
/**
*  power the e ^ f and returns the result
* @param[in] e
* @param[in] f
* @return Result of e^3
*/
float power_3(calc3 *c3);
/**
*  power the e ^ f and returns the result
* @param[in] e
* @param[in] f
* @return Result of e^-1
*/
float power_neg(calc3 *c3);
/**
*  power the g ^ h and returns the result
* @param[in] g
* @param[in] h
* @return Result of 10^h
*/
float power_to_10(calc4 *c4);
/**
*  log10 the i  and returns the result
* @param[in] i
* @return Result of log10(i)
*/
float log_10(calc5 *c5);
/**
*  power the c % d and returns the result
* @param[in] c
* @param[in] d
* @return Result of c%d
*/
int modu(calc2 *c2);
/**
*  sin the i  and returns the result
* @param[in] i
* @return Result of Sin(i)
*/
float sin_v(calc5 *c5);
/**
*  Cos the i  and returns the result
* @param[in] i
* @return Result of Cos(i)
*/
float cos_v(calc5 *c5);
/**
*  tan the i  and returns the result
* @param[in] i
* @return Result of Tan(i)
*/
float tan_v(calc5 *c5);
/**
*  cosec the i  and returns the result
* @param[in] i
* @return Result of Cosec(i)
*/
float sin_inv(calc5 *c5);
/**
*  sec the i  and returns the result
* @param[in] i
* @return Result of Sec(i)
*/
float cos_inv(calc5 *c5);
/**
*  cot the i and returns the result
* @param[in] i
* @return Result of Cot(i)
*/
float tan_inv(calc5 *c5);
/**
*  percent the a and b  and returns the result
* @param[in] a
* @param[in] b
* @return Result of percent
*/
float percent(calc1 *c1);
/**
*  factorial the i  and returns the result
* @param[in] i
* @return Result of factorial of i 
*/
float fact(calc5 *c5);
/**
*  power the a ^ 1/b   and returns the result
* @param[in] a
* @param[in] b
* @return Result of a ^ 1/b
*/
float power_y(calc1 *c1);
/**
*  power the a ^ 1/3   and returns the result
* @param[in] a
* @param[in] b
* @return Result of a ^ 1/3
*/
float power_one_divideby_3(calc1 *c1);
#endif /*#define __CALCHEADER_H__ */