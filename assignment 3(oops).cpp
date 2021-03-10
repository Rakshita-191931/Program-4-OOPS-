#include<iostream>
#include<math.h>
using namespace std;
float power(float num,int power)
{
	return pow(num,power);
}
float power(float num)
{
	int power=3;
	return pow(num,power);
}
void display(float data)
{
	cout<<"result is:"<<data<<endl;
}
int main()
{
	int pow;
	float num,result1,result2;
	cout<<"enter number value= ";
	cin>>num;
	cout<<"enter power value= ";
	cin>>pow;
	cout<<"with defalut power"<<endl;
	result1=power(num);
	display(result1);
	cout<<"with entered power"<<endl;
	result2=power(num,pow);
	display(result2);
	return 0;
} 
