#include <iostream>
#include <stdio.h> 
using namespace std;
void SWAP(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	
	
}
int main()
{
	int a,b,c;
	cout<<"please entere x"<<endl;
	cin >> a;
	cout << "please enter y"<<endl;
	cin >> b;
	
	
	SWAP(&a,&b);

	cout<<"after the swap"<<endl;
	cout << "x is " << a <<endl ;
	cout << "y is " << b <<endl;

	
	

}
