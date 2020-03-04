#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "container.hpp"
#include "sort.hpp"
#include <iostream>


using namespace std;

class BubbleSort : public Sort {
	public:
		BubbleSort() {};

		virtual void sort(Container* container) {
			bool swap = false;
			int containerSize = container->size();

			for (int a = 0; a < containerSize - 1; a++) {
				for (int b = 0; b < containerSize - a - 1; b++) {
					if(container->at(b)->evaluate() > container->at(b+1)->evaluate()) {
						container->swap(b, b+1);
						swap = true;
					}
				}

				if (swap == false)
					break;
			}
		}
};

#endif //__BUBBLESORT_HPP__
