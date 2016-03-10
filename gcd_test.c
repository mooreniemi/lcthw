#include "unity.h"
#include "gcd.h"

void setUp()
{
}

void tearDown()
{
}

void test_gcd(void)
{
  TEST_ASSERT_EQUAL(4, gcd(8,12));
}

void test_gcd_again(void)
{
  TEST_ASSERT_EQUAL(15, gcd(30,105));
}
