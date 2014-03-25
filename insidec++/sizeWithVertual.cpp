#include <iostream>

class base{
	public:
	base(){}
	base(int data):m_data(data){}
	virtual ~base(){}
	private:
		int m_data;
};

class derived :  public base{
	public:
	derived(){}
	derived(int data): base(data), m_data(data){}
	~derived(){}
	private:
		int m_data;
};

class derived1 : public derived {
	public:
		derived1(){}
		derived1(int data) : derived(data), m_data(data){}
		~derived1(){}
	private:
		int m_data;
};

class derived2 : public derived1 {

        public:

                derived2(){}

                derived2(int data) : derived1(data), m_data(data){}

                ~derived2(){}

        private:

                int m_data;

};

using namespace std;

int main()
{
	base b1;
	derived d1;
	cout <<"\n Size of int: "<<sizeof(int);
	cout <<"\n Size of int*: "<<sizeof(int*);
	cout <<"\n Size of base: "<<sizeof(base);
	cout <<"\n Size of derived: "<<sizeof(derived);
	cout <<"\n Size of derived1: "<<sizeof(derived1);
	cout <<"\n Size of derived2: "<<sizeof(derived2);
}
