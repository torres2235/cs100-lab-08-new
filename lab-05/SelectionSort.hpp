#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "container.hpp"
#include "sort.hpp"
#include <iostream>

class SelectionSort : public Sort {
        public:
                SelectionSort() {};

                virtual void sort(Container* newContainer) {
                        int i, j, start;
                        int size = newContainer->size();
                        for(i = size-1; i > 0; i--) {
                                start = 0;
                                for(j = 1; j <= i; j++) {
                                        if(newContainer->at(j)->evaluate() > newContainer->at(start)->evaluate()) {
                                                start = j;
                                        }
                                }
                                newContainer->swap(start,i);
                        }
        }
};

#endif //__SELECTIONSORT_HPP__
