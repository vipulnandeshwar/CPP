// Program for hybridge inheritance with multilevel and multiple 
#include<iostream>
#define clrscr() system("cls")
using namespace std;
class Student
{
    protected:
    int rno;
    char name[50];
    public:
    void getStudent()
    {
        cout<<"\n Enter roll no";
        cin>>rno;
        cout<<"\n Enter name";  
        cin>>name;
    }
};
class Mark :public Student
{
      protected:
      int h,e,c,m;
      public:
      void getMark()
      {
          cout<<"\n Enter Marks of Hindi: ";
          cin>>h;
          cout<<"\n Enter Marks of Maths: ";
          cin>>m;
          cout<<"\n Enter Marks of English: ";
          cin>>e;
          cout<<"\n Enter Marks of Computer: ";
          cin>>c;
      }
};
class Sports
{
    protected:
     int sp;
     public:
     void getSports()
     {
           cout<<"\n Enter Marks of sports";
           cin>>sp;
     }
};
class Result:public Mark ,public Sports
{
      int total,per;
      public:
      void calclauteResult()
      {
            total=h+e+c+m+sp;
            per=total/5;
      }
      void display()
      {
           cout<<"\nRoll No: "<<rno;
           cout<<"\nName: "<<name;
           cout<<"\nTotal Marks: "<<total;
           cout<<"\nPercentage : "<<per;
      }
};
int main()
{
    clrscr();
    Result r;
    r.getStudent();
    r.getMark();
    r.getSports();
    r.calclauteResult();
    r.display();
    return 0;

}
