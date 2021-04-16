/**
 * @file test.c
 */
#include "unity.h"
#include "header.h"
#define PROJECT_NAME    "ProjectCalculator"
calc1 testcp={10.0,5.0}; //positive
calc1 testcn={-10.0,-5.0}; //negative
calc1 testcz={10.0,0.0}; //zero deno
calc2 testcp2={6,5}; // positive
calc2 testcn2={-6,-5}; // negative
calc5  testcp5={8}; //Positive
calc5 testcn5={-8}; //negative
calc5  testcz5={0}; //Zero

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
 RUN_TEST(t_sub);
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
  TEST_ASSERT_EQUAL(15.000000,add(&testcp));
   TEST_ASSERT_EQUAL(-15.00000,sum(&testcn)); 
   }
void t_sub(void) {
  TEST_ASSERT_EQUAL(5.000000,sub(&testcp));
  TEST_ASSERT_EQUAL(-1.000000,sub(&testcn)); 
}
void t_mul(void) {
  TEST_ASSERT_EQUAL(50.000000,mul(&testcp));
  TEST_ASSERT_EQUAL(-50.000000,mul(&testcn)); 
}
void t_div(void){
    TEST_ASSERT_EQUAL(2.000000,divi(&testcp));
}
void t_divByZero(void){
    TEST_ASSERT_EQUAL(-1.000000,divi(&testcz));
}
void t_logneg(void)
{
  TEST_ASSERT_EQUAL(-1, log10(&testcn5));
}
void t_logzero(void)
{
  TEST_ASSERT_EQUAL(-1, log10(&testcz5));
}
void t_zfact(void){
 TEST_ASSERT_EQUAL(1,fact(&testcz5));  
}

void t_fact(void){
 TEST_ASSERT_EQUAL(40320,fact(&testcp5));  
}
void t_mod(void) {
  TEST_ASSERT_EQUAL(1,modu(&testcp2)); 
}
void t_sin(void) {
  TEST_ASSERT_EQUAL(0.14,sin_v(&testcp5));
  TEST_ASSERT_EQUAL(-0.14,sin_v(&testcn5)); 
}
void t_cos(void) {
  TEST_ASSERT_EQUAL(0.99,cos_v(&testcp5));
  TEST_ASSERT_EQUAL(0.99,cos_v(&testcn5)); 
}
void t_tan(void) {
  TEST_ASSERT_EQUAL(0.14,tan_v(&testcp5));
   TEST_ASSERT_EQUAL(-0.14,tan_v(&testcn5)); 
}
void t_cosec(void) {
  TEST_ASSERT_EQUAL(7.19,sin_inv(&testcp5));
   TEST_ASSERT_EQUAL(-7.19,sin_inv(&testcn5)); 
}
void t_sec(void) {
  TEST_ASSERT_EQUAL(1.01,cos_inv(&testcp5));
  TEST_ASSERT_EQUAL(1.01,cos_inv(&testcn5)); 
}
void t_cot(void) {
  TEST_ASSERT_EQUAL(7.12,tan_inv(&testcp5));
   TEST_ASSERT_EQUAL(-7.12,tan_inv(&testcn5)); 
}
