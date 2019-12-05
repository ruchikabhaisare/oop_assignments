#include<iostream>
#include<exception>
using namespace std;

class City_Exception:public exception{
	public:
		const char* what() const throw(){
			return "CITY IS NOT CHENNAI OR BANGLORE OR PUNE OR MUMBAI\n";
		}
}; 

class Wheel_Exception:public exception{
	public:
		const char* what() const throw(){
			return "THE VEHICLE IS NOT FOUR WHEELER\n";
		}
}; 

int main()
{
	string city;
	int wheels;
	
	try{
		cout<<"Enter City: ";
		cin>>city;
		if(city!="pune" && city!="mumbai" && city!="chennai" && city!="banglore")
        {
			City_Exception ce;
			throw ce;
		}
	
		else
		{
			cout<<"City: "<<city<<endl;
		}
	}
	
	catch(exception& e){
		cout<<e.what()<<endl;
	}
	
	try{
		cout<<"ENTER WHEELS ";
		cin>>wheels;
		if(wheels!=4){
			Wheel_Exception we;
			throw we;
		}
		else{
			cout<<"VEHICLE IS 4-WHEELER"<<endl;
		}
		
	}
	
	catch(exception& e){
		cout<<e.what()<<endl;
	}
	return 0;
}

