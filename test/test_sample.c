#ifdef TEST

#include "unity.h"

#include "sample.h"

void setUp(void)
{
    
}

void tearDown(void)
{
}

void test_odd_or_even(void)
{
    int ans = odd_or_even(4);
    TEST_ASSERT_EQUAL(1,ans);

    ans = odd_or_even(3);
    TEST_ASSERT_EQUAL(0,ans);
}

#endif // TEST
