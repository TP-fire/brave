#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main() {

	return 0;
}
*/

int main() {
	// 字面常量，虽然不报错，但是没有什么意义
	3.14;
	"demo";
	return 0;
}

//int a = 123;
//int main() {
//	// 对于内部大括号中的变量
//	extern int cc;
//	printf("%d\n",cc);
//	return 0;
//}
//int main() {
//	// 计算两个数字的和
//	int num1 = 0;
//	int num2 = 0;
//	// 输入数据-使用输入函数 scanf
//	scanf("%d%d",&num1,&num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}


//int a = 100;  // 局部变量-定义在代码块{} 之外的变量
//int main() {
//	int a = 10;  // 局部变量-定义在代码块{} 之内的变量
//	printf("%d\n",a);  // 局部变量可以和全局变量同时存在，会优先取值局部变量
//	return 0;
//}

//int main() {
//   // 数字20
//	short age = 20; // 向内存申请2个字节=16bit位，用来存放20这个数字
//	float weight = 3.25; // 向内存申请4个字节，存放小数
//	return 0;
//}

//int main() {
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main() {
//	// char - 字符类型
//	//char ch = 'A';
//	//printf("%c\n",ch);  // %c -- 打印字符格式的数据
//
//	// int  - 整型
//	//int age = 20;
//	//printf("%d\n",age);   // %d -- 打印整型十进制数据
//
//	/*long num = 1000;
//	printf("%d\n",num);*/
//
//	// float - 浮点型
//	/*float f = 5.0;
//	printf("%f\n",f);*/
//
//	/*double d = 3.14442123126234;
//	printf("%.14f\n",d);*/
//
//
//
//	return 0;
//}

//int main() 
//{
//	printf("hello\n");
//	return 0;
//}