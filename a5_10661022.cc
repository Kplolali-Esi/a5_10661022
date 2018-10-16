#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Stud
{
 string idNum;
 string name;
 int age;
 string gender;
 double score;
 char grade;
};


int main()
{
struct Stud s [5];
int i;
for(i=0; i<5; i++)
{
cout <<"Enter your ID"<<endl;
cin>> s[i].idNum;

cout << "Please Enter your name."<<endl;
cin>> s[i].name;

cout << "Please Enter your Age."<<endl;
cin>> s[i].age;

cout << "Please Enter your gender.(Male or Female)"<<endl;
cin>> s[i].gender;

cout << "Please Enter your score."<<endl;
cin>> s[i].score;
cout<<endl;

if (s[i].score>=80 && s[i].score<=100)
{
cout<<"A"<<endl;
}
else if(s[i].score>=70)
{
 cout<<"B"<<endl;
}
else if(s[i].score>=60)
{
 cout<<"C"<<endl;
}
else if(s[i].score>=50)
{
 cout<<"D"<<endl;
}
else if(s[i].score>=40)
{
 cout<<"E"<<endl;
}
else{
 cout<<"F"<<endl;
}

}
return 0;
}
