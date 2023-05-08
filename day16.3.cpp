#include<iostream>

using namespace std;

class Demo{
	
	private:
		
		int a ;
		
	public:
	
		int b ;
		
	protected:
	
		int c ;
	
};

class Data : public Demo{
	
	public:
		
		void Display(){
		
//		a = 10 ;
//		cout<<a<<endl;
		
		b = 20 ;
		cout<<b<<endl;
		
		c = 30 ;
		cout<<c<<endl;
		
	}
		
};

int main(){
	
	Data obj;
	
	obj.Display();
	
	return 0 ;
}
