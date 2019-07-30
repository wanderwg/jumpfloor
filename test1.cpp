#include <iostream>
using namespace std;
class solution{
public:
//青蛙跳台阶问题
//设跳上n级台阶共有F(n)种办法
//F(i):F(i-1)+F(i-2)+F(i-3)+...+F(0)
//F(i-1):F(i-2)+F(i-3)+...+F(0)--->F(i):2*F(i-1)
//初始值：F(1)=1;
	int jumpfloor(int number)
	{
		if(number<=0)
			return 0;
		int total=1;
		for(int i=1;i<number;++i)
		{
			total*=2;
		}
		return total;
	}
};