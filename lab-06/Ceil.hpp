#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "Decorator.hpp"
#include <math.h>
#include <sstream>

class Ceil : public Decorator { 
	private:
		Base* temp;
		std::ostringstream str;
		double num;
	public:
		Ceil(Base* tempBase) : Decorator() {
			temp = tempBase;
		}

		virtual double evaluate() {
			
			return ceil(temp->evaluate());

		}
		
		virtual std::string stringify() {
			num = ceil(temp->evaluate());
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

#endif //__CEIL_HPP
