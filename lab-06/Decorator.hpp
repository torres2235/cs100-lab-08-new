#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "lab-04/base.hpp"

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
			
};

#endif //__DECORATOR_HPP__
