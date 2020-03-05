#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "../lab-04/base.hpp"

class Decorator: public Base {
	private:
		Base* temp;
	public:
		virtual double evaluate() {
			temp->evaluate();
		}
		
		virtual std::string stringify() {
			temp->stringify();
		}

		/*lab-08 Virtual Iterator Functions*/
		virtual Iterator* create_iterator() = 0;

		virtual Base* get_left() = 0;
		virtual Base* get_right() = 0;	
};

#endif //__DECORATOR_HPP__
