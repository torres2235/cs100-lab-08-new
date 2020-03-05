#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include "Decorator.hpp"
#include <sstream>

class Trunc : public Decorator {
        private:
                Base* temp;
		std::ostringstream str;
		double num;
        public:
                Trunc(Base* tempBase) : Decorator() {
                        temp = tempBase;
                }

                virtual std::string stringify() {
			num = temp->evaluate();
			str << num;
                        return str.str();
                }

		/*new Iterator functions for lab-08*/
                virtual Iterator* create_iterator() {
                        Iterator* newIt = new UnaryIterator(this);

                        return newIt;
                }

                virtual Base* get_left() {
                        return temp;
                }

                virtual Base* get_right() { //UnaryIterators only need left child
                        return nullptr;
                }
};

#endif //__TRUNC_HPP__
