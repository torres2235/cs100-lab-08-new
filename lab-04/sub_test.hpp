#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include "op.hpp"

TEST(SubTest, SubEvaluateNonZero) {
	Base* val1 = new Op(2);
	Base* val2 = new Op(2);
	Base* test = new Sub(val1,val2);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubNegative) {
	Base* val1 = new Op(0);
	Base* val2 = new Op(5);
	Base* test = new Sub(val1,val2);
	EXPECT_EQ(test->evaluate(), -5);
}

#endif //__SUB_TEST_HPP__
