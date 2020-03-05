#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>
#include <time.h> //using time to randomly seed our rand()
#include <sstream>

class Rand : public Base {
    private:
        double num;
	std::ostringstream stream;
    public:
        Rand() : Base() {srand(time(NULL));num = rand() % 100; }
        virtual double evaluate () {return num;}
        virtual std::string stringify() { stream << num; return stream.str(); }

	/*new Iterator functions for lab-08*/
        virtual Iterator* create_iterator() {

                Iterator* newIt = new NullIterator(this);

		return newIt; 
        }

        virtual Base* get_left() { //Rand class has no children, so we return nullptr
                return nullptr;
        }

        virtual Base* get_right() { //Rand class has no children, so we return nullptr
                return nullptr;
        }
};

#endif //__RAND_HPP__
