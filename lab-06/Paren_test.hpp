#ifndef __PAREN_TEST_HPP__
#define __PAREN_TEST_HPP__

#include <vector>
#include <math.h>

#include "Paren.hpp"
#include "lab-05/container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "gtest/gtest.h"

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

#endif //__PAREN_TEST_HPP__
