#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main(){

	//int a = 0;//4���ֽڣ�32bitΪ
	//int b = ~a;//b���з��ŵ�����
	////~ -- ����2���ƣ�λȡ��
	////0000000000000000000000000
	////1111111111111111111111111
	////Դ�롢���롢����
	////�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
	////1111111111111111111111111
	////1111111111111111111111110
	////1000000000000000000000001
	//printf("%d\n",b);
	//return 0 ;


	int a = 10;
	//int b = a++;//����++����ʹ��(��ֵ)����++
	//printf("a = %d b = %d \n",a,b);// a = 11  b = 10

	int b = ++a;//ǰ��++����++����ʹ��
	printf ("a = %d b = %d \n",a,b); // a = 11 b = 11
	return 0;
}
*/

//int main(){
//	int a = (int)3.14;//() ǿ������ת������double ת����int
//	printf("%d\n",a);
//	return 0;
//}


/*
int main (){
	//�� - ��0
	//�� - 0
	//&& - �߼���
	//|| - �߼���//ֻҪ��һ��Ϊ�棬��Ϊ��

	int a = 3;
	int b = 5;
	int c = a&&b;
	printf ("c = %d\n",c);// c= 1 ,��Ϊ a = 3 Ϊ�棬b=5ҲΪ�棬������Ϊ��C��Ϊ�棬ֻҪ��һ�������棬C=0
	return 0 ;
}
*/
/*
int main(){
	//typedef - ���Ͷ��� - �����ض���
	//���� -- С��  ��С��
	typedef unsigned int uint;
	unsigned int num = 20;
	uint num2 = 20;
	return 0;
}
*/


//void test()//void ���� ������
//{
//	static int a = 1; //a��һ����̬�ľֲ�����
//	//1��static ���ξֲ��������ֲ������������ڱ䳤
//	//2��static  ����ȫ�ֱ������ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷�ʹ��
//	//3��static���κ�����Ҳ�Ǹı��˺�����������-��׼ȷ
//	//static���κ����ı��˺�������������
//	//�ⲿ�������� ->�ڲ���������
//
//	//extern - �����ⲿ���ŵģ�����ʹ�ñ��Դ�ļ��е�ȫ�ֱ���
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


//#define MAX 100 //#define �����ʶ������
//#define ���Զ����һ������

//�������巽ʽ
int Max(int x ,int y){
	if(x>y)
		return x;
	else
		return y;
}

//��Ķ���
#define MAX(X,Y)(X>Y?X:Y)
int main(){
	int a = 10;
	int b = 20;
	//����
	int max = Max(a , b);
	printf("max = %d\n",max);
	//��ķ�ʽ
	max = MAX(a,b);
	printf("max = %d\n",max);
	return 0;
}


