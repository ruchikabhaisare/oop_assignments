#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
   fstream file; 							 //object of fstream class
    
   										
   file.open("MyFiles.txt",ios::out);		//opening file "MyFiles.txt" in out(write) mode
    
   if(!file)
   {
       cout<<"ERROR IN CREATING FILE!!!"<<endl;
       return 0;
   }
    
   cout<<"FILE CREATED SUCCESSFULLY!!!."<<endl;
   
   file<<"WELCOME TO SY BTECH COMP A VIIT, PUNE";		//write text into file
   
   file.close();							//closing the file
    
   
   file.open("MyFiles.txt",ios::in);			//again open file in read mode
    
   if(!file)
   {
       cout<<"ERROR IN OPENING FILE!!!"<<endl;
       return 0;
   }   
    
   
   char ch; 								//to read single character
   cout<<"FILE CONTENT: \n";
    
   while(!file.eof())						//read untill end of file is not found.
   {
       file>>ch; 							//read single character from file
       cout<<ch;
   }
    
   file.close(); 							//close file
    
   return 0;
}



