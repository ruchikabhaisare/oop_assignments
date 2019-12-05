#include<iostream>
using namespace std;
class complex{
	private:
	int x,y;
	public:
		complex(int a,int b){
			x=a;
			y=b;
		}
	
	  complex operator+(complex c);
	  complex operator*(complex c);
	 complex(){
	 }
	friend void operator <<(ostream &s,complex &c){
	  	if(c.y<0)
	  		s<<c.x<<c.y<<"i";
	  		else s<<c.x<<"+"<<c.y<<"i";
	  		
	  }
	friend void operator >>(istream &s,complex &c){
	  	
	  	cout<<"ENTER REAL AND IMAGINARY PART\n";
	  	s>>c.x;
	  	s>>c.y;
	  }
	  
};
complex complex::operator +(complex c){
	
	complex c2;
	c2.x=this->x+c.x;
	c2.y=this->y+c.y;
	return c2;
}
complex complex::operator *(complex c){
	
	complex c2;
	c2.x=(this->x*c.x)-(this->y*c.y);
	c2.y=(this->x*c.y)+(this->y*c.x);
	return c2;
}


int main(){

	complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<"SUM IS\n";
	cout<<c3;
	cout<<"\n";
	c3=c1*c2;
	cout<<"MULTIPLICATION IS\n";
	cout<<c3;
	return 0;

}





