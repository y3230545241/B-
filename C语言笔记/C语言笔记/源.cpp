#include<stdio.h>
#include<math.h>
int Add(int x, int y)//ע�⣺���庯��Ҫ����main�������棡����
{
	int z = 0;
	z = 2 * x + 3 * y;
	return z;
}
int main()
{
	//�������ͣ�1.char-�ַ���������
	char mingzi = 'A';
	printf("%c\n", mingzi);
	//2.short-������
	//3.int-����
	//4.long-������
	int number = 100;
	printf("%d\n", number);
	//   %c - ��ӡ�ַ�     %d - ��ӡ����      %f - ��ӡ��������      %p - �Ե�ַ��ʽ��ӡ     %x - ��ӡ16����
	//5.float-������ ������
	float f = 1.5;
	printf("%f\n", f);
	//6.double-������ ˫����
	double d = 3.14;
	printf("%lf\n", d);
	//7.sizeof-�����������������ڴ�
	printf("%d\n", sizeof(int));
	/*������ڴ浥λ��
	  bit-����λ    һ��bit�ܴ�һ�������Ƶ�1��0
	  byte-�ֽ�      1 byte = 8 bit
	  kb-kb          1 kb = 1024 byte
	  mb-��b         1 mb = 1024 kb
	  ..........*/
	  //�����������ĺ�
	int num1 = 0; int num2 = 0; int sum = 0;
	//�������ݣ������뺯��scanf
	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	sum = 3 * num1 + 2 * (num2 + 8);
	printf("sum= %d\n", sum);
	/*�������ͣ�1.���泣��-12,185,3.1415��
	2.const���εĳ�����*/
	const int num = 8;
	//3.#define����ı�ʶ������
	//4.ö�ٳ�����ȫӢ��)
	enum Sex
	{
		MALE,
		FEMALE,
		SECRET
	};
	char arr1[] = "abc";//����
	//"abc"='a','b','c','\0'--- '\0'���ַ��������ı�־
	char arr2[] = { 'a','b','c' };
	//��ȷ������ʽ��char arr2[] = { 'a','b','c','\0' };
	//'a','b','c'
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	int input = 0;
	int �� = 0;
	printf("�����ѧ\n");
	printf("���ú�ѧϰ�𣿣���/���ᣩ:\n");
	scanf("%d", &input);
	if (input == 0)
		printf("����CEO��ӭȢ�׸��������������۷壡����\n");
	else
		printf("�ؼҿ��ϣ��������£����ֺ���\n");
	int a = 0;
	int b = ~a;
	printf("%d\n", b);
	//������֮  ~  ---��λ�������ƣ�ȡ��
	//Eg��ԭ��00000000000
	//    ȡ��11111111111
	//������֮sizeof--�����������ͳ��ȣ����ӽ�Ϊ��λ��
	//������֮  --    ǰ�ã�����--
	//������֮  ++    ǰ�ã�����++
	//������֮  []    �±����ò�����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int num3 = 10;
	int num4 = 20;
	int finish = Add(num3, num4);
	//������֮  ()    �������ò�����
	printf("%d\n", finish);

	//ԭ��--������λ���䣬����ȡ����--����--����һ��--����

	/*
	�ؼ�������
	�ؼ���֮  break  --1.��ֹѭ�� 2.��switch case���������ֹ���� 
	*/

	//�ؼ���֮  typedef  ---�����ض���
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
	//extern �����ⲿ������������һ��Դ�ļ��Ķ��壬������Դ�ļ�Ҳ��ʹ�ã�
	extern int add(int, int);
	//static ���ξֲ�������ʹ�������ڱ䳤������ʹĳ�������ںü�����������ͨ�ã�
	//static ����ȫ�ֱ��������ı��˱�����������ʹ��Դ�ļ��Ķ���ֻ���ڵ�ǰԴ�ļ�ʹ��
	//static ���κ���,�ı��˺������������ԣ�ͬȫ�ֱ�������exturn�ʶ�����
	//               ��ʹ�ⲿ��������-->�ڲ��������ԣ�

	//     #define  �����ʶ������
	//  #define MAX 100
	//     #define  �����-������
	//  #define MAX(x,y) (x>y?x:y);
	//  int max = MAX(a,b);
	//  printf("max = $d\n",max);
	
	//   ָ�����--*p��*�ǽ����÷���
	int j = 10;
	int* i = &j;
	printf("%p\n", i);//�������a�ĵ�ַ
	printf("%p\n", &j);//ͬ��
	//��
	//*p = 20;
	//printf("%d",a);
	//��ӡ������20
   //**����**������int�ķ��Ų�ͬ������i��j���������ĵ�ַҲ��ͬ����ַ���������ɶ�������־���


	return 0;
}
