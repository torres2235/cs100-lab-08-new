#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__

#include "container.hpp"
#include "../lab-04/base.hpp"
#include "sort.hpp"
#include <vector>
#include <iostream>
using namespace std;

class VectorContainer: public Container {
	private:
		vector<Base*> tree;
		Sort* containers;
	public:
		VectorContainer() { };
		void set_sort_function(Sort* sort_function) { 
			containers = sort_function;
		 }

		virtual void add_element(Base* newElement) {
			tree.push_back(newElement);
		}

		virtual void print() {
			for (unsigned i = 0;i < tree.size(); i++ ) {
				tree[i]->evaluate();
				cout << tree[i]->stringify() << " ";
			}
		}

		virtual void sort() {containers->sort(this);}

		virtual void swap(int i, int j) {
			Base* temp = tree.at(i);
			tree.at(i) = tree.at(j);
			tree.at(j) = temp;
		}
		
		virtual Base* at(int i) { return tree.at(i);}
		virtual int size() { return tree.size();}
};

#endif // __VECTORCONTAINER_HPP__
