#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"

/*
TEST(MultTest, MultEvaluateNonZero) {
    Base* val1 = new Op(3);
    Base* val2 = new Op(3);
    Base* test = new Mult(val1,val2);
    EXPECT_EQ(test->evaluate(),9);
}

TEST(MultTest, MultEvaluateNegative) {
    Base* val1 = new Op(-6);
    Base* val2 = new Op(3);
    Base* test = new Mult(val1,val2);
    EXPECT_EQ(test->evaluate(),-18);	
}

TEST(MultTest, MultEvaluateString) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(3);
    Mult* test = new Mult(val1,val2);
    EXPECT_EQ(test->stringify(), "5*3");
}

TEST(MultTest, MultEvaluateNegativeString) {
    Base* val1 = new Op(4);
    Base* val2 = new Op(-2);
    Mult* test = new Mult(val1,val2);
    EXPECT_EQ(test->stringify(), "4*-2");
}
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(MultTest, MultIteratorTest) {
        Base* op1 = new Op(1);
        Base* op2 = new Op(2);

        Base* test = new Mult(op1, op2);

        Iterator* newIt = test->create_iterator();

        EXPECT_EQ(test->get_left(), op1);
        EXPECT_EQ(test->get_right(), op2);

        EXPECT_EQ(newIt->current(), op1);
        newIt->next();
        EXPECT_EQ(newIt->current(), op2);
        newIt->next();
        EXPECT_EQ(newIt->is_done(), true);
}
#endif //__MULT_TEST_HPP__
