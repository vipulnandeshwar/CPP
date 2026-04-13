#include <iostream>
using namespace std;
class one
{
	public:
		void dis()
		{
			cout<<"One";
		}
};
class two:public one
{
	public:
		void dis()
		{
			cout<<"Two";
		}
};
int main()
{
	two t;
	t.dis();
	t.one::dis();
}
