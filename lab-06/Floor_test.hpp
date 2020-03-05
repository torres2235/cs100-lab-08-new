#ifndef __FLOOR_TEST_HPP__
#define __FLOOR_TEST_HPP__

#include <vector>
#include <math.h>

#include "Decorator.hpp"
#include "Floor.hpp"
#include "../lab-05/container.hpp"
#include "../lab-04/add.hpp"
#include "../lab-04/sub.hpp"
#include "../lab-04/mult.hpp"
#include "../lab-04/div.hpp"
#include "../lab-04/op.hpp"
#include "../lab-04/base.hpp"

#include "gtest/gtest.h"

/*
TEST(FloorTest, EvaluateElement) {
        Op* one = new Op(1.5);
        Floor* tester = new Floor(one);
        EXPECT_EQ(tester->evaluate(), 1);
}
*/

/* UNIT TESTS FOR NEW ITERATOR FUNCTIONS */

TEST(FloorTest, FloorIteratorTest) {
	Base* test = new Op(1.5);
	Decorator* tester = new Floor(test);

	Iterator* newIt = tester->create_iterator();
	
	EXPECT_EQ(tester->get_left(), test);
	EXPECT_EQ(tester->get_right(), nullptr);

	EXPECT_EQ(newIt->current(), test);
	newIt->next();
	EXPECT_EQ(newIt->current(), nullptr);
	EXPECT_EQ(newIt->is_done(), true);

}
#endif //__FLOOR_TEST_HPP__
