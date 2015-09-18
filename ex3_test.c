#include "unity.h"
#include "ex3.h"

void setUp()
{
}

void tearDown()
{
}

void test_IgnoredTest(void)
{
    TEST_IGNORE_MESSAGE("This Test Was Ignored On Purpose");
}

void test_gcd(void)
{
  TEST_ASSERT_EQUAL(7, gcd(7,8));
}
