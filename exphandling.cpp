//1:Create class for Handling Exception for Student
//Create StudentException class;
//Create Student class with data members (rollno,name,age)
//at the time of student creation check age if age<18 then throw exception
#include<iostream>
using namespace std;
class studentexception{
};
class student{
       private:
	   int rollno,age;
	   string name;
	   public:
	   	void accept(){
		cout<<"enter rollno"<<endl;
	   	cin>>rollno;
	   	cout<<"enter name"<<endl;
	   	cin>>name;
	   	cout<<"enter age"<<endl;
	   	cin>>age;
	   }
	   void showdetails(){
	   	cout<<"roll no:-"<<rollno;
	   	cout<<"name:-"<<name;
	   	cout<<"age:-"<<age;
        } 
	   bool agecompare(){
	   
	   if(this->age<18)
	   {
	   	return true;
	   }
	   else
	   {
	   	return false;
	   }
}
	   
	   	
};
int main(){

student s;
s.accept();
try
   {
   	if(s.agecompare()){
   		throw studentexception();
   	}
   }
   catch(studentexception t)
   {
   	cout<<"age should be above 18";
   	return 0;
   }
   s.showdetails();  	
}
