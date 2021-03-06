/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_CurrentYear();
extern void test_CurrentYearFuzz();
extern void test_TimeZoneOffset();
extern void test_WrongYearStart();
extern void test_PreviousYear();
extern void test_NextYear();
extern void test_NoReasonableConversion();
extern void test_AlwaysInLimit();


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}

char *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  Unity.TestFile = "clocktime.c";
  UnityBegin("clocktime.c");
  RUN_TEST(test_CurrentYear, 32);
  RUN_TEST(test_CurrentYearFuzz, 47);
  RUN_TEST(test_TimeZoneOffset, 69);
  RUN_TEST(test_WrongYearStart, 89);
  RUN_TEST(test_PreviousYear, 108);
  RUN_TEST(test_NextYear, 127);
  RUN_TEST(test_NoReasonableConversion, 145);
  RUN_TEST(test_AlwaysInLimit, 167);

  return (UnityEnd());
}
