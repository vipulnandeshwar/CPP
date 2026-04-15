#include <iostream>
using namespace std;
class animal
{
	public:
		void speak()
		{
			cout<<"Speaking";
		}
};
class cat:public animal
{
	public:
		void speak()
		{
			cout<<"Meowing\n";
		}
};
class cow: public animal{
	public:
};

int main()
{
	cat c;
	c.speak();
	cow c2;
	c2.speak();
}
