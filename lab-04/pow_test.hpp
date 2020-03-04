#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"
#include "op.hpp"

TEST(PowTest, PowEvaluateNonZero) {
	Base* val1 = new Op(2);
        Base* val2 = new Op(3);
	Pow* test = new Pow(val1,val2);
	EXPECT_EQ(test->evaluate(), 8);
}

TEST(PowTest, PowEvaluateNegativeBase) {
	Base* val1 = new Op(-5);
        Base* val2 = new Op(5);
	Pow* test = new Pow(val1,val2);
	EXPECT_EQ(test->evaluate(), -3125);
}

TEST(PowTest, PowEvaluateNegativeExpo) {
	Base* val1 = new Op(2);
        Base* val2 = new Op(-3);
	Pow* test = new Pow(val1,val2);
	EXPECT_EQ(test->evaluate(),0.125);
} 

TEST(PowTest, PowString) {
	Base* val1 = new Op(7);
        Base* val2 = new Op(7);
	Pow* test = new Pow (val1,val2);
	EXPECT_EQ(test->stringify(), "7**7");
}

#endif //__POW_TEST_HPP__
