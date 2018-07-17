//============================================================================
// Name        : test.cpp
// Author      : ArielM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <float.h>//用于存储浮点类型
using namespace std;

//20180718凌晨：注意一定要提前声明，否则编译不成功
//extern:只声明，不定义。即说明，hello()这几个字母代表了一个函数，但是并不定义它的内容
extern void hello();
void printSize();
void printDetail();
int main() {
	//char[10] str = 'helloworld';
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//打印helloworld
	//hello();

	//打印每个数据类型的大小
	//printSize();

	//打印浮点类型存储大小、值范围、精度
	printDetail();
	return 0;
}
/*
 * 20180717
 * 1. 保存文件为 hello.c。
 * 2. 打开命令提示符，进入到保存文件所在的目录。
 * 3. 键入 gcc hello.c，输入回车，编译代码。
 * 4. 如果代码中没有错误，命令提示符会跳到下一行，并生成 a.out 可执行文件。
 * 5. 现在，键入 a.out 来执行程序。
 * 6. 您可以看到屏幕上显示 "Hello World"。
*/

//打印helloworld
void hello(){
	printf("helloworld\n");
}

//打印m各个数据类型的大小
void printSize(){
	printf("int 存储大小：%lu \n",sizeof(int));
	printf("char 存储大小：%lu \n",sizeof(char));
	printf("unsigned char 存储大小：%lu \n",sizeof(unsigned char));
	printf("short 存储大小：%lu \n",sizeof(short));
	printf("unsigned short 存储大小：%lu \n",sizeof(unsigned short));
	printf("int 存储大小：%lu \n",sizeof(int));
	printf("unsigned int 存储大小：%lu \n",sizeof(unsigned int));
	printf("long 存储大小：%lu \n",sizeof(long));
	printf("unsigned long 存储大小：%lu \n",sizeof(long));
	printf("float 存储大小：%lu \n",sizeof(float));
	printf("double 存储大小：%lu \n",sizeof(double));
	printf("long int 存储大小：%lu \n",sizeof(long int));
	printf("long long 存储大小：%lu \n",sizeof(long long));
	printf("long double 存储大小：%lu \n",sizeof(long double));
}

//打印浮点类型存储大小、值范围、精度
void printDetail(){
	printf("float 存储最大字节数：%lu \n",sizeof(float));
	printf("float 最小值：%E\n",FLT_MIN);//%E 为以指数形式输出单、双精度实数
	printf("float 最大值：%E\n",FLT_MAX);
	printf("float 精度：%d\n",FLT_DIG);
}
