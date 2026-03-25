#include <iostream>
using namespace std;
class one{
	public:
		int num;
	public:
		void set(int x)
		{
		
		num=x;
	}
	void passbyvalue(one ob1,one ob2)
	{
		ob1.num=100;
		ob2.num=200;
		ob1.disp();
		ob2.disp();
	}
	void disp(){
		cout<<num;
	}
};
int main (){
	one ob1,ob2,ob3;
	ob1.set(10);
	ob2.set(20);
	cout<<"before passing value\n";
	ob1.disp();
	ob2.disp();
	ob3.passbyvalue(ob1,ob2);
	cout<<"\nafter passing values";
	ob1.disp();
	ob2.disp();
}