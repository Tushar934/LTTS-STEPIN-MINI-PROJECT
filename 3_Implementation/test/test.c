/**
 * @file test.c
 */
#include <unity.h>
#include "header.h"
#define PROJECT_NAME    "ProjectCalculator"
calc1 testc1={10.0,5.0}; //positive
calc1 testc12={-10.0,-5.0}; //negative
calc1 testc1={10.0,0.0}; //zero deno
calc2 testc2={6,5}; // positive
calc2 testc22={-6,-5}; // negative
calc5  testc5={8}; //Positive
calc5 testc51={-8}; //negative
calc5  testc52={0}; //Zero

void t_add(void);
void t_sub(void);
void t_mul(void);
void t_div(void);
void t_divByZero(void);
void t_logneg(void);
void t_logzero(void);
void t_Zfact(void);
void t_fact(void);
void t_pow(void);
void t_mod(void);
void t_sin(void);
void t_cos(void);
void t_tan(void);
void t_cosec(void);
void t_sec(void);
void t_cot(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
 RUN_TEST(t_add);
 RUN_TEST(t_sub;
 RUN_TEST(t_mul);
 RUN_TEST(t_div);
 RUN_TEST(t_divByZero);
 RUN_TEST(t_logneg);
 RUN_TEST(t_logzero);
 RUN_TEST(t_Zfact);
 RUN_TEST(t_fact);
 RUN_TEST(t_mod);
 RUN_TEST(t_sin);
 RUN_TEST(t_cos);
 RUN_TEST(t_tan);
 RUN_TEST(t_cosec);
 RUN_TEST(t_sec);
 RUN_TEST(t_cot);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* all test functions */ 
void t_add(void) {
  TEST_ASSERT_EQUAL(15.000000,add(&testc1));
   TEST_ASSERT_EQUAL(-15.00000,sum(&testc12)); 
   }
void t_sub(void) {
  TEST_ASSERT_EQUAL(5.000000,sub(&testc1));
  TEST_ASSERT_EQUAL(-1,sub(&testc12)); /* negative number input case  */
}
void t_mul(void) {
  TEST_ASSERT_EQUAL(50.000000,mul(&testc1));
  TEST_ASSERT_EQUAL(-50.000000,mul(&testc12)); /* negative number input case  */
}
void t_div(void){
    TEST_ASSERT_EQUAL(2.000000,divi(&testc1));
}
void t_divByZero(void){
    TEST_ASSERT_EQUAL(-1.000000,divi(&testc13));
}
void t_logneg(void)
{
  TEST_ASSERT_EQUAL(-1, log10(&testc51));
}
void t_logzero(void)
{
  TEST_ASSERT_EQUAL(-1, log10(&testc52));
}
void t_zfact(void){
 TEST_ASSERT_EQUAL(1,fact(&testc52));  
}

void t_fact(void){
 TEST_ASSERT_EQUAL(40320,fact(&testc5));  
}
void t_mod(void) {
  TEST_ASSERT_EQUAL(1,modu(&testc2));
  TEST_ASSERT_EQUAL(1,modu(&testc522)); 
}
void t_sin(void) {
  TEST_ASSERT_EQUAL(0.14,sin_v(&testc5));
  TEST_ASSERT_EQUAL(-0.14,sin_v(&testc51)); 
}
void t_cos(void) {
  TEST_ASSERT_EQUAL(0.99,cos_v(&testc5));
  TEST_ASSERT_EQUAL(0.99,cos_v(&testc51)); 
}
void t_tan(void) {
  TEST_ASSERT_EQUAL(0.14,tan_v(&testc5));
   TEST_ASSERT_EQUAL(-0.14,tan_v(&testc51)); 
}
void t_cosec(void) {
  TEST_ASSERT_EQUAL(7.19,sin_inv(&testc5));
   TEST_ASSERT_EQUAL(-7.19,sin_inv(&testc51)); 
}
void t_sec(void) {
  TEST_ASSERT_EQUAL(1.01,cos_inv(&testc5));
  TEST_ASSERT_EQUAL(1.01,cos_inv(&testc51)); 
}
void t_cot(void) {
  TEST_ASSERT_EQUAL(7.12,tan_inv(&testc5));
   TEST_ASSERT_EQUAL(-7.12,tan_inv(&testc51)); 
}
