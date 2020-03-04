#ifndef __FLOOR_TEST_HPP__
#define __FLOOR_TEST_HPP__

#include <vector>
#include <math.h>

#include "Floor.hpp"
#include "lab-05/container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(FloorTest, EvaluateElement) {
        Op* one = new Op(1.5);
        Floor* tester = new Floor(one);
        EXPECT_EQ(tester->evaluate(), 1);
}

#endif //__FLOOR_TEST_HPP__
