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
};

#endif //__OP_HPP__
