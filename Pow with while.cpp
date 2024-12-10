#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int x , y , z = 1 ;
	
	cout<<"Enter X:"<<endl;
	cin>>x;
	
	cout<<"Enter Y:"<<endl;
	cin>>y;
	
	int i = 1;
	while ( i <= y)
	{
		z *= x;
		i++;
	}
	cout<<"Result is="<<z;
}
