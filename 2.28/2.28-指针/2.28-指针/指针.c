#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include<string.h>
//�ṹ��
//char  int  double  float  short  long   long long
//�� ����+���+����+���֤����+...
//�� ����+����+������+����+���+....
//���Ӷ��� -- �ṹ��  -�����Լ����������һ������

struct Book{
	char name[20]; //C���Գ������
	short price;//55

};// �ֺŲ���ȱ�٣�������������

int main(){
	//���ýṹ������-����һ�������͵Ľṹ�ر���
	struct Book b1 = {"C���Գ������",55};
	struct Book* pb = &b1;

	//������
	strcpy(b1.name,"c++");  // strcpy - string copy - �ַ������� - �⺯��- string.h


	//����pb��ӡ���ҵ������ͼ۸�
	// .  �ṹ����� .��Ա
	//->  �ṹ��ָ�� ->��Ա


	printf("����:%s\n",pb->name);
	printf("�۸�:%d\n",pb->price);

	printf("����:%s\n",(*pb).name);
	printf("�۸�:%d\n",(*pb).price);
		
	printf("����:%s\n",b1.name);
	printf("�۸�:%d\n",b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%d\n",b1.price);
		return 0;
}

//int main(){
//
//	double d = 3.14;
//	double* pd = &d;
//	printf ("%lf\n",d);//double�ķ�����%lf
//	printf("%lf\n",*pd);
//	
//	//int a = 10; //4���ֽ�
//	//int*  p = &a;//ȡ��ַ  p��һ������ - ָ�����
//	//// * - �����ò����� / ��ӷ��ʲ�����
//	////&a��//ȡ��ַ
//	//printf("%p\n",&a);
//	//printf("%p\n",p);
//	return 0;
//}