//============================================================================
// Name        : hello.cpp
// Author      : ArielM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <float.h>//用于存储浮点类型
using namespace std;


/*20180718：
*define和const的区别： 来自https://blog.csdn.net/yi_ming_he/article/details/70405364
*1. 就定义常量说的话：
*const 定义的常数是变量 也带类型， #define 定义的只是个常数 不带类型。
*
*2：就起作用的阶段而言：
*define是在编译的预处理阶段起作用，而const是在 编译、运行的时候起作用。
*
*3.就起作用的方式而言：
*define只是简单的字符串替换，没有类型检查。而const有对应的数据类型，是要进行判断的，可以避免一些低级的错误。
*正因为define只是简单的字符串替换会导致边界效应，具体举例可以参考下面代码：
*
* #define N 2+3 //我们预想的N值是5，我们这样使用N
* double a = N/2;  //我们预想的a的值是2.5，可实际上a的值是3.5（实际计算过程：2+3/2）
*
*4：就空间占用而言：
* #define PI 3.14     //预处理后 占用代码段空间
* #const float PI=3.14;    //本质上还是一个 float，占用数据段空间
*
*5：从代码调试的方便程度而言：
*const常量可以进行调试的，define是不能进行调试的，因为在预编译阶段就已经替换掉了
*
*6： 从是否可以再定义的角度而言：
*const不足的地方，是与生俱来的，const不能重定义，而#define可以通过#undef取消某个符号的定义，再重新定义。
*
*7： 从某些特殊功能而言：
*define可以用来防止头文件重复引用，而const不能，可以参看下面代码：
*/
#define LENGTH 10  //用define定义常量LENGTH
#define WIDTH 2+3 //用const定义制定类型的常量
#define NEWLINE '\n' //定义常量NEWLINE是转行符

//20180718凌晨：注意一定要提前声明函数，否则编译不成功
//extern:只声明，不定义。即说明，hello()这几个字母代表了一个函数，但是并不定义它的内容
extern void hello();
void printSize();
void printDetail();
int calArea();
void staticCharacter();
static int count1 = 6;//用于实验static（funcInStatic）
void funcInStatic();

void externPrac();
extern void write_extern();
int count2;//用于实验externPrac

int main() {
	//char[10] str = 'helloworld';
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//打印helloworld
	//hello();

	//打印每个数据类型的大小
	//printSize();

	//打印浮点类型存储大小、值范围、精度
	//printDetail();

	//使用常量计算面积，并打印
	//calArea();

	//看static的特性
  //staticCharacter();

//实验extern
externPrac();
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

//使用常量计算面积
int calArea(){
	int area;
  float f;

	area=LENGTH*WIDTH;
	f = WIDTH/2.0;
	printf("矩形长：%d\n", LENGTH);
	printf("矩形宽：%d\n", WIDTH);
	printf("面积大小是：%d\n",area );
	printf("%c",NEWLINE);
  printf("宽度的一半是：%f\n", f);

	return 0;
}

//查看staic的特性
void staticCharacter(){
	//count1定义为静态常量6
	while (count1--) {
		funcInStatic();
	}
}
void funcInStatic(){
	/* 'thingy' 是 'funcInStatic' 的局部变量, 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */
	static int thingy=0;
	thingy++;

	printf("thingy为%d，count1为%d\n", thingy,count1);

}

//实验extern类型
void externPrac(){
	count2 = 5;
	write_extern();
}
