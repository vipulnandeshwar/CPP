#include <iostream>
using namespace std;
class two;
class one{
	int a;
	public:
	void set(int x)
	{
		a=x;
	}
	friend void fun(one,two);
};
class two{
	int b;
	public:
	void set(int y)
	{
		b=y;
	}
	friend void fun(one,two);
};
void fun(one o1,two o2)
{
	cout<<o1.a+o2.b;
}
	int main()
	{
		one ob1;
		two ob2;
		ob1.set(5);
		ob2.set(6);
		
		fun(ob1,ob2);
	}
