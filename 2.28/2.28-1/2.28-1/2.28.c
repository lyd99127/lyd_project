#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main(){

	//int a = 0;//4个字节，32bit为
	//int b = ~a;//b是有符号的整型
	////~ -- 按（2进制）位取反
	////0000000000000000000000000
	////1111111111111111111111111
	////源码、反码、补码
	////负数在内存中存储的时候，存储的是二进制的补码
	////1111111111111111111111111
	////1111111111111111111111110
	////1000000000000000000000001
	//printf("%d\n",b);
	//return 0 ;


	int a = 10;
	//int b = a++;//后置++，先使用(赋值)，再++
	//printf("a = %d b = %d \n",a,b);// a = 11  b = 10

	int b = ++a;//前置++，先++，再使用
	printf ("a = %d b = %d \n",a,b); // a = 11 b = 11
	return 0;
}
*/

//int main(){
//	int a = (int)3.14;//() 强制类型转换，把double 转换成int
//	printf("%d\n",a);
//	return 0;
//}


/*
int main (){
	//真 - 非0
	//假 - 0
	//&& - 逻辑与
	//|| - 逻辑或，//只要有一个为真，则为真

	int a = 3;
	int b = 5;
	int c = a&&b;
	printf ("c = %d\n",c);// c= 1 ,因为 a = 3 为真，b=5也为真，两个都为真C才为真，只要有一个不是真，C=0
	return 0 ;
}
*/
/*
int main(){
	//typedef - 类型定义 - 类型重定义
	//张三 -- 小三  起小名
	typedef unsigned int uint;
	unsigned int num = 20;
	uint num2 = 20;
	return 0;
}
*/


//void test()//void 代表 空类型
//{
//	static int a = 1; //a是一个静态的局部变量
//	//1、static 修饰局部变量，局部变量生命周期变长
//	//2、static  修饰全局变量，改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法使用
//	//3、static修饰函数，也是改变了函数的作用域-不准确
//	//static修饰函数改变了函数的链接属性
//	//外部链接属性 ->内部链接属性
//
//	//extern - 声明外部符号的，可以使用别的源文件中的全局变量
//	a++;
//	printf("a = %d\n",a);//2 3 4 5 6
//
//}
//int main(){
//
//	int i = 0;
//	while (i<5){
//		test();
//		i++;
//
//	}
//	return 0;
//}


//#define MAX 100 //#define 定义标识符常量
//#define 可以定义宏一带参数

//函数定义方式
int Max(int x ,int y){
	if(x>y)
		return x;
	else
		return y;
}

//宏的定义
#define MAX(X,Y)(X>Y?X:Y)
int main(){
	int a = 10;
	int b = 20;
	//函数
	int max = Max(a , b);
	printf("max = %d\n",max);
	//宏的方式
	max = MAX(a,b);
	printf("max = %d\n",max);
	return 0;
}


