#include <iostream>

class base{
	public:
		base(){}
		~base(){}
		virtual void foo(){ std::cout << "\n Base foo"; }
};

class derived : public base {
	public:
		derived(){}
		~derived(){}
		void foo(){ std::cout <<"\n Derived foo";}
};

using namespace std;

int main()
{
	char *arena = new char[sizeof(derived)];
	base *bptr = new (arena) derived;
	bptr->foo(); //calls derived foo
}
