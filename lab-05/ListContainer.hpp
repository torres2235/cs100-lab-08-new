#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include "container.hpp"
#include "sort.hpp"

#include <list>

using namespace std;

class ListContainer : public Container {
	private:
		list<Base*> userList;
		Sort* containers;
	public:
		ListContainer() { };

		void set_sort_function(Sort* sort_function) {
			containers = sort_function;
		}

		virtual void add_element(Base* newElement) {
			userList.push_back(newElement);
		}

		virtual void print() {
			for(list<Base*>::iterator i = userList.begin(); i != userList.end(); i++) {
				(*i)->evaluate();
				cout << (*i)->stringify() << " ";
			}
		}

		virtual void sort() {
			containers->sort(this);
		}
	
		virtual void swap(int i, int j) {
			list<Base*>::iterator temp1 = userList.begin();
			advance(temp1, i);
			
			list<Base*>::iterator temp2 = userList.begin();
			advance(temp2, j);
	
			std::swap(*temp1, *temp2);
		}

		virtual Base* at(int i) { 
			list<Base*>::iterator temp = userList.begin();
			advance(temp, i);
	
			return *temp;
		}

		virtual int size(){
			return userList.size();
		}
};

#endif // __LISTCONTAINER_HPP__
