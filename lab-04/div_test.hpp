#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"

/*
TEST(DivTest, DivEvaluateNonZero) {
	Base* val1 = new Op(2);
	Base* val2 = new Op(2);
	Base* test = new Div(val1,val2);
	EXPECT_EQ(test->evaluate(), 1);
}

TEST(DivTest, DivNegative) {
	Base* val1 = new Op(-14);
	Base* val2 = new Op(2);
	Base* test = new Div(val1,val2);
	EXPECT_EQ(test->evaluate(), -7);
}

TEST(DivTest, DivDecimal) {
	Base* val1 = new Op(2.1);
	Base* val2 = new Op(0.7);
	Base* test = new Div(val1,val2);
	EXPECT_DOUBLE_EQ(test->evaluate(), 3);
}

TEST(DivTest, DivZero) {
	Base* val1 = new Op(2);
	Base* val2 = new Op(0);
	Base* test = new Div(val1,val2);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivEvaluateString) {
	Base* val1 = new Op(6);
	Base* val2 = new Op(3);
	Base* test = new Div(val1, val2);
	EXPECT_EQ(test->stringify(), "6/3");
}

TEST(DivTest, DivEvaluateNegString) {
	Base* val1 = new Op(5);
	Base* val2 = new Op(-6);
	Base* test = new Div(val1,val2);
	EXPECT_EQ(test->stringify(), "5/-6");
}
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(DivTest, DivIteratorTest) {
        Base* op1 = new Op(1);
        Base* op2 = new Op(2);

        Base* test = new Div(op1, op2);

        Iterator* newIt = test->create_iterator();

        EXPECT_EQ(test->get_left(), op1);
        EXPECT_EQ(test->get_right(), op2);

        EXPECT_EQ(newIt->current(), op1);
        newIt->next();
        EXPECT_EQ(newIt->current(), op2);
        newIt->next();
        EXPECT_EQ(newIt->is_done(), true);
}
#endif //__DIV_TEST_HPP__
