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
};

#endif //__TRUNC_HPP__
