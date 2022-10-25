#include<iostream.h>
#include<conio.h>
void menu()
{
int num1,num2,tottle;
cout<<"Enter The Value of num1: ";
cin>>num1;
cout<<"Enter The Value of num2: ";
cin>>num2;
cout<<"\n 1 ADD: + \n 2 SUB: - \n 3 MUL: * \n 4 DIV: / \n 5 MOD: % \n ";
cout<<"\nEnter The Your Choice: ";
cin>>tottle;
if(tottle==1)
	{
	cout<<"Addition is: ";
	cout<<num1+num2;
	}
else if(tottle==2)
	{
	cout<<"Substraction is: ";
	cout<<num1-num2;
	}
else if(tottle==3)
	{
	cout<<"Multiplication is: ";
	cout<<num1*num2;
	}
else if(tottle==4)
	{
	cout<<"Division is: ";
	cout<<num1/num2;
	}
else if(tottle==5)
	{
	cout<<"Modulas is: ";
	cout<<num1%num2;
	}
	cout<<"\n" ;
	}
void main()
{
clrscr();
menu();
getch();
}