#ifndef __ABS_TEST_HPP__
#define __ABS_TEST_HPP__

#include <vector>
#include <math.h>

#include "Decorator.hpp"
#include "Abs.hpp"
#include "../lab-05/container.hpp"
#include "../lab-04/add.hpp"
#include "../lab-04/sub.hpp"
#include "../lab-04/mult.hpp"
#include "../lab-04/div.hpp"
#include "../lab-04/op.hpp"
#include "../lab-04/base.hpp"

#include "gtest/gtest.h"

/*
TEST(AbsTest, EvaluateElement) {
        Op* negOne = new Op(-1);
        Abs* tester = new Abs(negOne);
        EXPECT_EQ(tester->evaluate(), 1);
}
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(AbsTest, AbsIteratorTest) {
        Base* test = new Op(-1);
        Decorator* tester = new Abs(test);

        Iterator* newIt = tester->create_iterator();

        EXPECT_EQ(tester->get_left(), test);
        EXPECT_EQ(tester->get_right(), nullptr);

        EXPECT_EQ(newIt->current(), test);
        newIt->next();
        EXPECT_EQ(newIt->current(), nullptr);
        EXPECT_EQ(newIt->is_done(), true);

}
#endif //__ABS_TEST_HPP__
