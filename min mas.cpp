#include <iostream>
using namespace std;
int a[5];
int minimum(int *mas)
{
	int min = 0;
	for (int i = 0; i < 5; i++)
	{
		cout<<"Enter"<<i<<":";
		cin >>a[i];
	
	}
    for (int i=1; i < 5; i++)
    {
        if(mas[i] < mas[min])
