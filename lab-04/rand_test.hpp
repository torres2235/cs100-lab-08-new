#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateNonZero) {
    Base* test = new Rand();
    EXPECT_LE(test->evaluate(), 100);
}

TEST(RandTest, RandEvaluateString) {
	Base* test = new Rand();
	EXPECT_NE(test->stringify(), "100");
}

#endif //__RAND_TEST_HPP__
