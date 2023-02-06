#include "src/sample.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{



}



void tearDown(void)

{

}



void test_odd_or_even(void)

{

    int ans = odd_or_even(4);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((ans)), (

   ((void *)0)

   ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

}
