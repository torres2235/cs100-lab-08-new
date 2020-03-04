#ifndef __PAREN_HPP__
#define __PAREN_HPP__

class Paren : public Decorator {
	private:
		Base* temp;
	
	public:
		Paren(Base* tempBase) : Decorator() {
			temp = tempBase;
		}
		
		virtual std::string stringify() {
			return "(" + temp->stringify() + ")";
		}
};

#endif //__PAREN_HPP__
