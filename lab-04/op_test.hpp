#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "../iterator.hpp"

/*
TEST(OpTest, OpEvaluateNonZero) {
    Base* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateString) {
    Base* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8");
}

TEST(OpTest, OpStringDecimals) {
    Base* test = new Op(7.5);
    EXPECT_EQ(test->stringify(), "7.5");
}
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(OpTest, OpIteratorTest) {
	Base* test = new Op(7);

	Iterator* newIt = test->create_iterator();
	
	EXPECT_EQ(test->get_left(), nullptr);
	EXPECT_EQ(test->get_right(), nullptr);

	EXPECT_EQ(newIt->current(), nullptr);

}
#endif //__OP_TEST_HPP__
