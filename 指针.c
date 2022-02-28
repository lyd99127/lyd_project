#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include<string.h>
//结构体
//char  int  double  float  short  long   long long
//人 名字+身高+年龄+身份证号码+...
//书 书名+作者+出版社+定价+书号+....
//复杂对象 -- 结构体  -我们自己创造出来的一种类型

struct Book{
	char name[20]; //C语言程序设计
	short price;//55

};// 分号不可缺少，用来结束类型

int main(){
	//利用结构体类型-创建一个该类型的结构特变量
	struct Book b1 = {"C语言程序设计",55};
	struct Book* pb = &b1;

	//改书名
	strcpy(b1.name,"c++");  // strcpy - string copy - 字符串拷贝 - 库函数- string.h


	//利用pb打印出我的书名和价格
	// .  结构体变量 .成员
	//->  结构体指针 ->成员


	printf("书名:%s\n",pb->name);
	printf("价格:%d\n",pb->price);

	printf("书名:%s\n",(*pb).name);
	printf("价格:%d\n",(*pb).price);
		
	printf("书名:%s\n",b1.name);
	printf("价格:%d\n",b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n",b1.price);
		return 0;
}

//int main(){
//
//	double d = 3.14;
//	double* pd = &d;
//	printf ("%lf\n",d);//double的访问用%lf
//	printf("%lf\n",*pd);
//	
//	//int a = 10; //4个字节
//	//int*  p = &a;//取地址  p是一个变量 - 指针变量
//	//// * - 解引用操作符 / 间接访问操作符
//	////&a；//取地址
//	//printf("%p\n",&a);
//	//printf("%p\n",p);
//	return 0;
//}