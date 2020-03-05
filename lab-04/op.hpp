#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <sstream>

class Op : public Base {
    private:
        double num;
        std::ostringstream stream;
    public:
        Op(double value) : Base() {num = value; }
        virtual double evaluate() { return num; }
        virtual std::string stringify() { stream << num; return stream.str(); }

	/*new Iterator functions for lab-08*/
	virtual Iterator* create_iterator() {
		Iterator* newIt = new NullIterator(this);

                return newIt;
	}
	virtual Base* get_left() { //Op class has no children since it is a leaf, so we return nullptr
		return nullptr;
	}
	virtual Base* get_right() { //Op class has no children since it is a leaf, so we return nullptr
		return nullptr;
	}
};

#endif //__OP_HPP__
