#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "Decorator.hpp"
#include <math.h>
#include <sstream>

class Abs : public Decorator {
	private:
		Base* temp;
		std::ostringstream str;
		double num;
	public:
		Abs(Base* tempBase) : Decorator() {
			temp = tempBase;
		}

		virtual double evaluate() {
			return abs(temp->evaluate());
		}

		virtual std::string stringify() {
			num = abs(temp->evaluate());
                        str << num;
                        return str.str();
		}
};

#endif //__ABS_HPP__
