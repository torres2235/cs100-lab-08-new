#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"

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

#endif //__DIV_TEST_HPP__
