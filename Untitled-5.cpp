#include <iostream>
using namespace std;
class one{
	public:
		int a,b;
		one (int x, int y )
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<a<<" "<<b<<endl;
		}
	};
	int main()
	{
		one ob1(2,3);
		ob1.display();
	}