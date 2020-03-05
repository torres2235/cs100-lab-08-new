#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include "op.hpp"

/*
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
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(SubTest, SubIteratorTest) {
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
#endif //__SUB_TEST_HPP__
