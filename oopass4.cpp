#include<iostream>
using namespace std;
template<class T>
void SelectionSort(T a[], int n)
{
	int i,j,min;
	float temp;
	for (j = 0; j < n-1; j++)
	{
	    min = j;
	    for ( i = j+1; i < n; i++)
		{
	       if (a[i] < a[min])
	       {
	              min = i;
	       }
	    }
    	if(min != j) 
		{
    	    temp = a[j];
    	    a[j] = a[min];
    	    a[min] = temp;
    	}
	}
}

int main()
{	
	int x,y;

	int a[30];
 	float b[30];
 	
 	cout<<"\n--ENTER NUMBER OF ELEMENTS IN INTERGER ARRAY-- \n";
 	cin>>x;

 	cout<<"\n--ENTER INTEGERS ELEMENTS IN  ARRAY--\n";
 	for(int i=0;i<x;i++)
 		cin>>a[i];
	SelectionSort(a,x);
 
 	
 	cout<<"\n--ENTER NUMBER OF ELEMENTS IN FLOAT ARRAY--\n";
	cin>>y;

	cout<<"\n--ENTER FLOAT ELEMENTS IN ARRAY \n";
 	for(int i=0;i<y;i++)
 		cin>>b[i];
	SelectionSort(b,y);
	

	cout<<"\nSORTED ORDER OF INTEGER: ";
 	for(int i=0;i<x;i++)
 		cout<<"  "<<a[i];
	
	
	cout<<"\n\nSORTED ORDER OF FLOAT: ";
 	for(int j=0;j<y;j++)
 		cout<<"  "<<b[j];
 	
	 return 0;
 }
