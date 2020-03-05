#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <sstream>
#include <cmath>

class Pow : public Base {
    private:
	Base* val1;
	Base* val2;
    public:
        Pow(Base* value1, Base* value2) : Base() {val1 = value1; val2 = value2;}
	virtual double evaluate() {return pow(val1->evaluate(),val2->evaluate());}
	virtual std::string stringify() {return val1->stringify() + "**" + val2->stringify();}

	/*new Iterator functions for lab-08*/
        virtual Iterator* create_iterator() {
        	Iterator* newIt = new BinaryIterator(this);

                return newIt;        
        }

        virtual Base* get_left() {
                return val1;
        }

        virtual Base* get_right() {
                return val2;
        }
};

#endif //__POW_HPP__
