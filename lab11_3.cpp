#include<iostream>

using namespace std;

int  mySwap (int &x, int &y); //Pass variables by references

int main(){
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}
int   mySwap(int &x, int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
	
	

}
//Write function definition here
/*
??? mySwap (???){

}
*/
