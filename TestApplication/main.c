//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	printf("hello world\n");
//
//	int a;
//	printf("vvedite chislo: ");
//	scanf("%d", &a);
//	printf("vi vveli chislo: %d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1 13 49");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("100 %d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x,&y);
//	printf("%d %d", x, y);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double a;
//	a = sqrt(4);
//	printf("%lf", a);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a=76;
//	unsigned char b = 'a';
//	float c = 3.14;
//	double d=54.34234;
//	short e = 3056;
//	unsigned short f = 5 + 564;
//	long int a2 = 567;
//	long long int a3 = 68394 / 2;
//	unsigned int a4 = 23412;
//	char b1 = 126;
//	long double d1 = 6432.1233;
//способы:
//	unsigned short us;
//	unsigned short us1 = 0;
//	unsigned short us2 = 65535;
//	unsigned short us3 = 0xFFFF;
//	unsigned short us4 = 0177777;
//	unsigned short us5 = { 0 };
//	int i;
//	int i1 = 42;
//	int i2 = -100;
//	int i3 = 0;
//	int i4 = +5;
//	int i5 = 0x1A;
//	int i6 = 032;
//	long l;
//	long l1 = 100L;
//	long l2 = -2000000L;
//	long l3 = 0L;
//	long l4 = 0x7FFFFFFFL;
//	long l5 = { 0 };
//	long l6 = (long)3.14;
//	unsigned long ul;
//	unsigned long ul1 = 100UL;
//	unsigned long ul2 = 4000000000UL;
//
//	printf("size int %d %d\n", sizeof(int), a);
//	printf("size unchar %d %d\n", sizeof(unsigned char), b);
//	printf("size float %d %f\n", sizeof(float), c);
//	printf("size double %d %f\n", sizeof(double), d);
//	printf("size short %d %d\n", sizeof(short), e);
//	printf("size unshort%d %d\n", sizeof(unsigned short), f);
//	printf("size long int %d %d\n", sizeof(long int), a2);
//	printf("size ll int %d %d\n", sizeof(long long int), a3);
//	printf("size unint %d %d\n", sizeof(unsigned int), a4);
//	printf("size char %d %d\n", sizeof(char), b1);
//	printf("size long double %d %f\n", sizeof(long double), d1);
//	return 0;
//}

//1.56
//#include <stdio.h>
//int main() {
//	int v1, v2;
//	float s;
//	scanf("%d %d", &v1, &v2);
//	s = 0.5 * (v1 - v2);
//	printf("S=%.2f", s);
//	return 0;
//}

//1.58
//#include <stdio.h>
//int main() {
//	float k = 450;
//	k = 450 / 1.8 + 32;
//	printf("%.0f", k);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	float k = 450;
//	k = 450 / 1.8 + 32;
//	printf("%.0f", k);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char a = 0, b = 0;
//	do {
//		a = a + 1;
//		printf("%c \t %d\n", a, (int)a);
//	} while (a != 0);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	unsigned char a = 0, b = 0;
//	do {
//		a = a + 1;
//		printf("%c \t %d\n", a, (int)a);
//	} while (a != 0);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 0, b = 0;
//	do {
//		a = a + 1;
//		printf("%c \t %d\n", a, (int)a);
//	} while (a != 0);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	unsigned int a = 0, b = 0;
//	do {
//		a = a + 1;
//		printf("%c \t %d\n", a, (int)a);
//	} while (a != 0);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	long int a = 0, b = 0;
//	do {
//		a = a + 1;
//		printf("%c \t %d\n", a, (int)a);
//	} while (a != 0);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	unsigned long int a = 0, b = 0;
//	do {
//		a = a + 1;
//		printf("%c \t %d\n", a, (int)a);
//	} while (a != 0);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 0, b = 0;
//	do {
//		a = a + 1;
//		if (a%1000==0)
//			printf("%c \t %d\n", a, (int)a);
//	} while (a != 0);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main() {
	/*int a = 0;
	int* pa = &a;
	scanf("%d", pa);
	printf("a = %d\n", *pa);*/

	/*char b = 0;
	char* pb = &b;
	scanf("%hhd", pb);
	printf("b = %hhd\n", *pb);*/

	/*float f = 0;
	float* pf = &f;
	scanf("%f", pf);
	printf("f= %f %x", *pf, pf);*/

	/*int a = 0;
	int* pa = &a;
	char c = 'a';
	char* pc = &c;
	short s = 47;
	short* ps = &s;*/

	/*int n = 0, i = 0;
	double min = 0.0, max = 0.0;
	printf("vvedite n:\n");
	scanf("%d", &n);
	printf("vvedite max:\n");
	scanf("%lf", &max);
	printf("vvedite min:\n");
	scanf("%lf", &min);
	for (i = 0;i < n;i++) {
		double a = (((double)rand()) / (RAND_MAX)) * (max - min)+min;
		printf("a[%d]\t=\t%lf\n", i, a);
	}*/

	int n = 0, i = 0, min = 1, max = 6;
	printf("brosaet pervi\n");
	int a1 = (((double)rand()) / (RAND_MAX)) * (max - min) + min;
	int a2 = (((double)rand()) / (RAND_MAX)) * (max - min) + min;
	printf("brosaet vtoroi\n");
	int a3 = (((double)rand()) / (RAND_MAX)) * (max - min) + min;
	int a4 = (((double)rand()) / (RAND_MAX)) * (max - min) + min;
	if (a1 + a2 > a3 + a4)
	{
		printf("pobed perv");
	}
	else
	{
		printf("pobed vtor");
	}
	return 0;
}