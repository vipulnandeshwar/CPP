#include <iostream>
using namespace std;
class one
{
	public:
		int a;
		void set(){
			a=5;
		}
		void disp(){
			cout<<a;
		}
};
class two: public one
{
	public:
		int b;
		void set1()
		{
			b=10;
		}
		void disp1(){
			cout<<b;
		}
};
int main()
{
	two ob1;
	ob1.set();
	ob1.disp();
	cout<<endl;
	ob1.set1();
	ob1.disp1();
}
