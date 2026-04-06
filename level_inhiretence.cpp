#include <iostream>
using namespace std;
class one
{
	public:
		int a;
};
class two:public one
{
	public:
		int b;
};
class three: public two
{
	public:
		int c;
		void set()
		{
			a=5;
			b=10;
			c=15;
		}
		void disp()
		{
			cout<<a<<endl<<b<<endl<<c;
		}
};
int main()
{
	three ob1;
	ob1.set();
	ob1.disp();
}
