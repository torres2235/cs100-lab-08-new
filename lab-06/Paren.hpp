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
		
		/*new Iterator functions for lab-08*/
                virtual Iterator* create_iterator() {
                        Iterator* newIt = new UnaryIterator(this);

                        return newIt;
                }

                virtual Base* get_left() {
                        return temp;
                }

                virtual Base* get_right() { //UnaryIterators only need left child
                        return nullptr;
                }
};

#endif //__PAREN_HPP__
