#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "op.hpp"

/*
TEST(AddTest, AddEvaluateNonZero) {
	Base* val1 = new Op(2);
	Base* val2 = new Op(2);
	Base* test = new Add(val1,val2);
	EXPECT_EQ(test->evaluate(), 4);
}

TEST(AddTest, AddEvaluateNegative) {
	Base* val1 = new Op(-3);
	Base* val2 = new Op(-3);
	Base* test = new Add(val1,val2);
	EXPECT_EQ(test->evaluate(), -6);
}

TEST(AddTest, AddEvalulateDecimals) {
	Base* val1 = new Op(5.4);
        Base* val2 = new Op(-3.1);
	Base* test = new Add(val1,val2);
	EXPECT_DOUBLE_EQ(test->evaluate(), 2.3);
}

TEST(AddTest, AddString) {
	Base* val1 = new Op(9);
        Base* val2 = new Op(9);
	Base* test = new Add(val1,val2);
	EXPECT_EQ(test->stringify(), "9+9");
}

TEST(AddTest, AddStringNegative) {
	Base* val1 = new Op(4);
        Base* val2 = new Op(-2);
	Base* test = new Add(val1,val2);
	EXPECT_EQ(test->stringify(), "4+-2");
}

*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(AddTest, AddIteratorTest) {
        Base* op1 = new Op(1);
	Base* op2 = new Op(2);
	
	Base* test = new Add(op1, op2);

        Iterator* newIt = test->create_iterator();

        EXPECT_EQ(test->get_left(), op1);
	EXPECT_EQ(test->get_right(), op2);

	EXPECT_EQ(newIt->current(), op1);
	newIt->next();
	EXPECT_EQ(newIt->current(), op2);
	newIt->next();
	EXPECT_EQ(newIt->is_done(), true);
}

#endif //__ADD_TEST_HPP__
