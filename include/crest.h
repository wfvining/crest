#ifndef _CREST_H
#define _CREST_H

/* Testing macros */

#define _WRAP_ASSERTION(ASSERTION, ARGS) \
   ASSERTION(ARGS, __FILE__, __LINE__, _TEST_SUITE_, _TEST_CASE_)

#define assert_true(EXPR) _assert_true((EXPR), __FILE__, __LINE__, \
                                       (_TEST_SUITE_), (_TEST_CASE_))
#define _assert_true(EXPR, FILE, LINE, TEST_SUITE, TEST_CASE) \
   put_test_result((EXPR) ? PASS : FAIL, (FILE), (LINE))

#endif // _CREST_H
