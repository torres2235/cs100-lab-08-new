#ifndef __TRUNC_TEST_HPP__
#define __TRUNC_TEST_HPP__

#include <vector>
#include <math.h>

#include "Trunc.hpp"
#include "lab-05/container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(TruncTest, StringifyElement) {
        Op* one = new Op(1.5);
	Op* two = new Op(2);
	
	Add* three = new Add(one,two);

        Trunc* tester = new Trunc(three);
        EXPECT_EQ(tester->stringify(), "3.5");
}
TEST(TruncTest, Equation) {
        Op* one = new Op(1.5);
        Op* two = new Op(2);
	Op* ten = new Op(10);
        Add* three = new Add(one,two);
	
        Trunc* trunc = new Trunc(three);
	Mult* tester = new Mult (ten, trunc);
        EXPECT_EQ(tester->stringify(), "10*3.5");
}
#endif //__TRUNC_TEST_HPP__
