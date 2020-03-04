#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include "lab-04/base.hpp"
#include <math.h>
#include <sstream>

class Floor : public Decorator {
	private:
		Base* temp;
		std::ostringstream str;
		double num;
	public:
		Floor(Base* tempBase) : Decorator() {
			temp = tempBase;
		}

		virtual double evaluate() {
			return floor(temp->evaluate());
		}

		virtual std::string stringify() {
			num = floor(temp->evaluate());
			str << num;
			return str.str();
		}

};

#endif //__FLOOR_HPP__
