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
};

#endif //__RAND_HPP__
