#ifndef __VECTORCONTAINER_TEST_HPP__
#define __VECTORCONTAINER_TEST_HPP__

#include <vector>

#include "VectorContainer.hpp"
#include "container.hpp"
#include "../lab-04/add.hpp"
#include "../lab-04/sub.hpp"
#include "../lab-04/mult.hpp"
#include "../lab-04/div.hpp"
#include "../lab-04/op.hpp"
#include "../lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(VectorContainerTest, AddElement) {
	Op* one = new Op(1);
	VectorContainer* tester = new VectorContainer();

	tester->add_element(one);

	ASSERT_EQ(tester->size(), 1);
	EXPECT_EQ(tester->at(0)->evaluate(), 1);
}

TEST(VectorContainerTest, PrintTest) {
	Op* one = new Op(1);
	Op* two = new Op(2);
	VectorContainer* tester = new VectorContainer();

	tester->add_element(one);
	tester->add_element(two);

	tester->print();

	ASSERT_EQ(tester->size(), 2);
	EXPECT_EQ(tester->at(0)->evaluate(), 1);
	EXPECT_EQ(tester->at(1)->evaluate(), 2);
}

TEST(VectorContainerTest, SwapTest) {
	Op* one = new Op(1);
        Op* two = new Op(2);
        VectorContainer* tester = new VectorContainer();

        tester->add_element(one);
        tester->add_element(two);

        tester->swap(0,1);

	EXPECT_EQ(tester->at(0)->evaluate(), 2);
}

#endif // __VECTORCONTAINER_TEST_HPP__
