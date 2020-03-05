#ifndef __PAREN_TEST_HPP__
#define __PAREN_TEST_HPP__

#include <vector>
#include <math.h>

#include "Decorator.hpp"
#include "Paren.hpp"
#include "../lab-05/container.hpp"
#include "../lab-04/add.hpp"
#include "../lab-04/sub.hpp"
#include "../lab-04/mult.hpp"
#include "../lab-04/div.hpp"
#include "../lab-04/op.hpp"
#include "../lab-04/base.hpp"

#include "gtest/gtest.h"

/*
TEST(ParenTest, StringifyElement) {
        Op* one = new Op(1.5);
        Paren* tester = new Paren(one);
        EXPECT_EQ(tester->stringify(), "(1.5)");
}

TEST(ParenTest, StringifyTwoElement) {
        Op* one = new Op(1.5);
	Op* two = new Op(2);
	Mult* three = new Mult(one,two);

        Paren* tester = new Paren(three);
        EXPECT_EQ(tester->stringify(), "(1.5*2)");
}

TEST(ParenTest, Equation) {
        Op* one = new Op(1.5);
        Op* two = new Op(2);
        Op* ten = new Op(10);
        Add* three = new Add(one,two);

        Paren* paren = new Paren(three);
        Mult* tester = new Mult (ten, paren);
        EXPECT_EQ(tester->stringify(), "10*(1.5+2)");
}
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(ParenTest, ParenIteratorTest) {
        Base* op1 = new Op(1);
	Base* op2 = new Op(2);
	Base* test = new Add(op1, op2);

        Decorator* tester = new Paren(test);

        Iterator* newIt = tester->create_iterator();

        EXPECT_EQ(tester->get_left(), test);
        EXPECT_EQ(tester->get_right(), nullptr);

        EXPECT_EQ(newIt->current(), test);
        newIt->next();
        EXPECT_EQ(newIt->current(), nullptr);
        EXPECT_EQ(newIt->is_done(), true);

}

#endif //__PAREN_TEST_HPP__
