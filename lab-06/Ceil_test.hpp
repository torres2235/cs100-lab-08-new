#ifndef __CEIL_TEST_HPP__
#define __CEIL_TEST_HPP__

#include <vector>
#include <math.h>

#include "Ceil.hpp"
#include "lab-05/container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(CeilTest, EvaluateElement) {
        Op* one = new Op(1.5);
        Ceil* tester = new Ceil(one);
        EXPECT_EQ(tester->evaluate(), 2);
}

#endif //__CEIL_TEST_HPP__
