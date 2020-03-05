#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

/*
TEST(RandTest, RandEvaluateNonZero) {
    Base* test = new Rand();
    EXPECT_LE(test->evaluate(), 100);
}

TEST(RandTest, RandEvaluateString) {
	Base* test = new Rand();
	EXPECT_NE(test->stringify(), "100");
}
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(RandTest, RandIteratorTest) {
        Base* test = new Rand();

        Iterator* newIt = test->create_iterator();

	EXPECT_EQ(test->get_left(), nullptr);
	EXPECT_EQ(test->get_right(), nullptr);

        EXPECT_EQ(newIt->current(), nullptr);
}
#endif //__RAND_TEST_HPP__
