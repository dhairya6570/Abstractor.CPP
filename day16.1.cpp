#include<iostream>

using namespace std;

class Demo{
	
	public:
		
		virtual void Data() = 0 ;
	
};

class Mobile : public Demo {
	
	public:
		
		void Data(){
			
			cout<<"Pure virtual function"<<endl;
			
		}
	
};

int main(){
	
	Mobile obj;
	
	obj.Data();
	
	
	return 0 ;
}
