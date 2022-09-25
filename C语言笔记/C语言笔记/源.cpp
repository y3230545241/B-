#include<stdio.h>
#include<math.h>
int Add(int x, int y)//注意：定义函数要放在main函数外面！！！
{
	int z = 0;
	z = 2 * x + 3 * y;
	return z;
}
int main()
{
	//数据类型：1.char-字符数据类型
	char mingzi = 'A';
	printf("%c\n", mingzi);
	//2.short-短整型
	//3.int-整形
	//4.long-长整型
	int number = 100;
	printf("%d\n", number);
	//   %c - 打印字符     %d - 打印整形      %f - 打印浮点数字      %p - 以地址形式打印     %x - 打印16进制
	//5.float-浮点型 单精度
	float f = 1.5;
	printf("%f\n", f);
	//6.double-浮点型 双精度
	double d = 3.14;
	printf("%lf\n", d);
	//7.sizeof-测量其他数据类型内存
	printf("%d\n", sizeof(int));
	/*计算机内存单位：
	  bit-比特位    一个bit能存一个二进制的1或0
	  byte-字节      1 byte = 8 bit
	  kb-kb          1 kb = 1024 byte
	  mb-兆b         1 mb = 1024 kb
	  ..........*/
	  //计算两个数的和
	int num1 = 0; int num2 = 0; int sum = 0;
	//输入数据：用输入函数scanf
	scanf("%d%d", &num1, &num2);//取地址符号&
	sum = 3 * num1 + 2 * (num2 + 8);
	printf("sum= %d\n", sum);
	/*常量类型：1.字面常量-12,185,3.1415等
	2.const修饰的常变量*/
	const int num = 8;
	//3.#define定义的标识符常量
	//4.枚举常量（全英文)
	enum Sex
	{
		MALE,
		FEMALE,
		SECRET
	};
	char arr1[] = "abc";//数组
	//"abc"='a','b','c','\0'--- '\0'是字符串结束的标志
	char arr2[] = { 'a','b','c' };
	//正确表现形式：char arr2[] = { 'a','b','c','\0' };
	//'a','b','c'
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	int input = 0;
	int 会 = 0;
	printf("进入大学\n");
	printf("你会好好学习吗？（会/不会）:\n");
	scanf("%d", &input);
	if (input == 0)
		printf("出任CEO，迎娶白富美，走上人生巅峰！！！\n");
	else
		printf("回家啃老，无所事事，游手好闲\n");
	int a = 0;
	int b = ~a;
	printf("%d\n", b);
	//操作符之  ~  ---按位（二进制）取反
	//Eg：原本00000000000
	//    取反11111111111
	//操作符之sizeof--操作符的类型长度（以子节为单位）
	//操作符之  --    前置，后置--
	//操作符之  ++    前置，后置++
	//操作符之  []    下标引用操作符
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int num3 = 10;
	int num4 = 20;
	int finish = Add(num3, num4);
	//操作符之  ()    函数调用操作符
	printf("%d\n", finish);

	//原码--（符号位不变，其他取反）--反码--（加一）--补码

	/*
	关键字整理：
	关键字之  break  --1.阻止循环 2.“switch case”语句中阻止继续 
	*/

	//关键字之  typedef  ---类型重定义
	typedef unsigned int  u_int;
	u_int num5 = -10;
	unsigned int num6 = -10;
	printf("num6 = %d\n", num5);
	int  c,  e, g, sum1;
	 c = 4; e = 42;  g = 14;
	sum1 =  c +  e + g;
	printf("sum = %d\n", sum);
	double x1, x2, x3,y;
	x1 = 3.14;
	x2 = 2.53;
	x3 = 4.58;
	y = sqrt(4 * x1 * (2 * x2 + 5 * x3));
	printf("x1 = %f\tx2 = %f\tx3 = %f\n", x1, x2, x3);
	printf("y = %f\n", y);
	//extern 进行外部声明（例如另一个源文件的定义，函数本源文件也能使用）
	extern int add(int, int);
	//static 修饰局部变量，使生命周期变长（例如使某定义能在好几个大括号中通用）
	//static 修饰全局变量，，改变了变量的作用域，使本源文件的定义只能在当前源文件使用
	//static 修饰函数,改变了函数的链接属性，同全局变量（与exturn呈对立）
	//               （使外部链接属性-->内部链接属性）

	//     #define  定义标识符常量
	//  #define MAX 100
	//     #define  定义宏-带参数
	//  #define MAX(x,y) (x>y?x:y);
	//  int max = MAX(a,b);
	//  printf("max = $d\n",max);
	
	//   指针变量--*p（*是解引用符）
	int j = 10;
	int* i = &j;
	printf("%p\n", i);//输出的是a的地址
	printf("%p\n", &j);//同上
	//若
	//*p = 20;
	//printf("%d",a);
	//打印出来是20
   //**补充**：若是int的符号不同（例如i和j），导出的地址也不同，地址并不单单由定义的数字决定


	return 0;
}
