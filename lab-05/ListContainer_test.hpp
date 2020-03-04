#ifndef __LISTCONTAINER_TEST_HPP__
#define __LISTCONTAINER_TEST_HPP__

#include <list>

#include "ListContainer.hpp"
#include "container.hpp"
#include "../lab-04/add.hpp"
#include "../lab-04/sub.hpp"
#include "../lab-04/mult.hpp"
#include "../lab-04/div.hpp"
#include "../lab-04/op.hpp"
#include "../lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(ListContainerTest, AddElement) {
	Op* one = new Op(1);
	ListContainer* tester = new ListContainer();

	tester->add_element(one);

	ASSERT_EQ(tester->size(), 1);
	EXPECT_EQ(tester->at(0)->evaluate(), 1);
}

TEST(ListContainerTest, SwapTest) {
	Op* one = new Op(1);
        Op* two = new Op(2);
        ListContainer* tester = new ListContainer();

        tester->add_element(one);
        tester->add_element(two);

        tester->swap(0,1);

	EXPECT_EQ(tester->at(0)->evaluate(), 2);
}

#endif //__LISTCONTAINER_TEST_HPP__
