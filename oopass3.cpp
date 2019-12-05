#include<iostream>
using namespace std;
class shape{
	private:
		double x,y;
		public:
			virtual void display_area()=0;
			void get_data(double a,double b){
			x=a;
			y=b;	
			}
			friend class rect;
			friend class tri;
};

class rect:virtual public shape{
	private:
	public:
	rect(){
	}
	void display_area(){
		double result;
		result= x*y;
		cout<<"AREA OF RECTANGLE IS : "<<result<<endl;
	}		
};
class tri:virtual public shape{
	private:
	public:
		tri(){}
	void display_area(){
		double result;
		result= (x*y)/2;
		cout<<"AREA OF TRIANGLE IS : "<<result<<endl;
	}		
};
int main(){
	double x,y;
	int choice;
	shape *p;
	rect r;
	tri t;
	cout<<"ENTER PARAMETERS\n";
	cin>>x;
	cin>>y;
	cout<<"FIND AREA OF 1.RECTANGLE 2.TRIANGLE\n";
	cin>>choice;
	switch(choice){
		case 1:p=&r;
		      p->get_data(x,y);
		      p->display_area();
		      break;
	    case 2:
		      p=&t;
		      p->get_data(x,y);
	          p->display_area();
	          break;
	    default : cout<<"INCORRECT CHOICE";
	}
	return 0;
}
