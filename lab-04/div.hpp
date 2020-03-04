#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <sstream>

class Div : public Base {
	private:
		Base* val1;
		Base* val2;
		double zero = 0;
	public:
		Div(Base* value1, Base* value2) : Base() {val1 = value1; val2 = value2; }
		virtual double evaluate() { if (val2->evaluate() == 0) { return zero; } return val1->evaluate() / val2->evaluate(); }
		virtual std::string stringify() { if (val2->evaluate() == 0) {return "0";} return val1->stringify() + "/" + val2->stringify(); }

};

#endif //__DIV_HPP__
