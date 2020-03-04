#ifndef __BUBBLESORT_TEST__
#define __BUBBLESORT_TEST__

#include "bubbleSort.hpp"
#include "container.hpp"
#include "VectorContainer.hpp"
#include "sort.hpp"
#include "../lab-04/op.hpp"
#include "../lab-04/mult.hpp"
#include "../lab-04/add.hpp"
#include "../lab-04/sub.hpp"
#include "../lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(SortTestSet, BubbleSortTestVector) {
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Mult* TreeA = new Mult(seven, four);

 	Op* three = new Op(3);
 	Op* two = new Op(2);
 	Add* TreeB = new Add(three, two);

 	Op* ten = new Op(10);
 	Op* six = new Op(6);
 	Sub* TreeC = new Sub(ten, six);

 	VectorContainer* container = new VectorContainer();
	container->add_element(TreeA);
 	container->add_element(TreeB);
 	container->add_element(TreeC);

 	ASSERT_EQ(container->size(), 3);
	EXPECT_EQ(container->at(0)->evaluate(), 28);
	EXPECT_EQ(container->at(1)->evaluate(), 5);
	EXPECT_EQ(container->at(2)->evaluate(), 4);

	container->set_sort_function(new BubbleSort());
	container->sort();

	ASSERT_EQ(container->size(), 3);
	EXPECT_EQ(container->at(0)->evaluate(), 4);
	EXPECT_EQ(container->at(1)->evaluate(), 5);
	EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(SortTestSet, BubbleSortTestList) {
        Op* seven = new Op(7);
        Op* four = new Op(4);
        Mult* TreeA = new Mult(seven, four);

        Op* three = new Op(3);
        Op* two = new Op(2);
        Add* TreeB = new Add(three, two);

        Op* ten = new Op(10);
        Op* six = new Op(6);
        Sub* TreeC = new Sub(ten, six);

        ListContainer* container = new ListContainer();
        container->add_element(TreeA);
        container->add_element(TreeB);
        container->add_element(TreeC);

        ASSERT_EQ(container->size(), 3);
        EXPECT_EQ(container->at(0)->evaluate(), 28);
        EXPECT_EQ(container->at(1)->evaluate(), 5);
        EXPECT_EQ(container->at(2)->evaluate(), 4);

        container->set_sort_function(new BubbleSort());
        container->sort();

        ASSERT_EQ(container->size(), 3);
        EXPECT_EQ(container->at(0)->evaluate(), 4);
        EXPECT_EQ(container->at(1)->evaluate(), 5);
        EXPECT_EQ(container->at(2)->evaluate(), 28);
}


#endif //__BUBBLESORT_TEST__
