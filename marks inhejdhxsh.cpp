#include <iostream>
using namespace std;
class student
{
	public:
		int rollno;
		char name[50];
		void get()
		{
			cout<<"Students Name: ";
			cin>>name;
			cout<<"Roll No: ";
			cin>>rollno;
		}
		void disp()
		{
			cout<<name<<rollno;
		}
};
class marks:public student
{
	public:
		int maths, eng, phy, chem, bio;
		public:
		void gettwo(){
		
		cout<<"\nMaths Marks: ";
		cin>>maths;
		cout<<"\nEnglish Marks: ";
		cin>>eng;
		cout<<"\nPhysics Marks: ";
		cin>>phy;
		cout<<"\nChemistry Marks: ";
		cin>>chem;
		cout<<"\nBiology Marks: ";
		cin>>bio;
	}
	void disp2(){
		cout<<maths<<endl<<eng<<endl<<phy<<endl<<chem<<endl<<bio;
	}
};

class sports
{
    public:
     int sp;
     void getthree()
     {
           cout<<"\nEnter Marks of sports: ";
           cin>>sp;
     }
};
class result:public marks, public sports
{
	public:
		int t;
		float p;
		void calculate()
		{
			t=maths+eng+phy+chem+bio+sp;
			p=t/5;
		}
		void disp3()
	{
		cout<<t<<endl;
		cout<<p<<endl;
		}	
};
int main()
{
	result ob1;
	ob1.get();
	ob1.gettwo();
	ob1.calculate();
	ob1.getthree();
	ob1.disp3();
}
