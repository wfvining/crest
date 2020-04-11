#ifndef _CREST_TEST_RESULT_H
#define _CREST_TEST_RESULT_H

#include <time.h>

enum result {
   PASS,
   FAIL,
   SKIPPED
};

struct test_result {
   enum result result;
   struct timespec start;
   struct timespec end;
};

#endif // _CREST_TEST_RESULT_H
