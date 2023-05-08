#include<iostream>

using namespace std;

class Parents{
	
	public:
		
		virtual void childdetails(){
			
			cout<<"use of virtual function"<<endl;
			
		}
	
};

class Child : public Parents{
	
	public:
		
		void childdetails(){
			
			cout<<"child class inherited by parent class"<<endl;
			
		}
	
};

int main(){
	
	Parents *obj1;
	Child obj2;
	
	obj1 = &obj2;
	
	obj1->childdetails();
	
	return 0 ;
}
