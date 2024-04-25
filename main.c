#include <math.h>
#include <stdio.h>
#include <string.h>
extern int add(int a, int b);
#define MMM 100 //不要分号
#define MAX(x, y) (x > y ? x : y)
int main(int argc, char *argv[]) {
  /*int x= 6666;
  printf("%d\n",x);
  for (int i=6; i<argc; i++) {
     printf("%s\n",argv[i]);
  }*/
  //  test01();
  //   test02();
  //for (int i=0; i<10; i++) {
  //  test03();
  // }
  //test04();
  //  test05();
  //  test06();
  //  test07();
  //  test08();
  //  test09();
  //  test11();
  //  test12();
    test13();
  //  test14();
  //  test15();
  //  test16();
  //  test19();
  //  test20();
  //  test21();
  //  printf("%d\n", bitCount2(8));
  //  saveType();
  //  test22();
  //  test23();
  //  test24();
  //  test25();
  //  test27();
  //  test34();
  //test36();
  //test38();
  return 0;
}
int test01() {
  int a = 10;
  int b = --a;
  printf("a=%d,b=%d\n", a, b);
  return 0;
}
int test02() {
  unsigned int a = -1;
  int b = 1;
  printf("%u %d\n", a, b);
  // printf("%b\n", a > b);
  return 0;
}
int test03() {
  static int a = 1;
  a++;
  printf("a=%d\n", a);
  return 0;
}
int test04() {
  extern int use;
  int b = 1010; 
  printf("use = %d  b=%d\n", use, b);
  return 0;
}
int test05() {
  int a = 10;
  int b = 15;
  printf("sum= %d\n", add(a, b));
  return 0;
}
int test06() {
  int a = 5;
  int b = 10;
  printf("MMM = %d\n", MMM);
  printf("max= %d\n", MAX(a, b));
  return 0;
}
int test07() {
  int a = 10;          //定义变量a,赋值为10
  int *p = &a;         //定义指针p,赋值为a的地址
  printf("p=%p\n", p); //打印指针值
  printf("&p=%p\n", &p);
  printf("a=%d\n", a); // a=10
  *p = 100;            //为p指向地址赋值为100
  printf("a=%d\n", a); // a=100
  printf("sizeof=%d\n", sizeof(p));
  return 0;
}
struct Animal {
  char name[20];
  int age;
};
int test08() {
  struct Animal animal = {"dog", 10};
  struct Animal *a = &animal;
  printf("animal‘s name = %s \n", animal.name); //.为指向结构体变量的成员
  printf("animal‘s age = %d\n", animal.age); //->为指向结构体指针的成员
  animal.age = 15;
  strcpy(animal.name, "cat");
  printf("animal name = %s\n", a->name);
  printf("animal age = %d\n", a->age);
  return 0;
}

int test09() {
  int i = 1;
  for (; i <= 100; i++) {
    if (i & 1) {
      printf("%d\n", i);
    }
  }
  return 0;
}
int test10() {
  printf("%d\n", EOF);
  return 0;
}
int test11() {
  int sum = 0;
  int num = 1;
  for (int i = 1; i < 4; i++) {
    num *= i;
    sum += num;
  }
  printf("sum=%d\n", sum);
  return 0;
}
int test12() {
  setbuf(stdout, NULL);
  char banner[] = "WELCOME";
  char blank[] = "#######";
  printf("%s", banner);
  fflush(stdout);
  for (int i = 0; i < sizeof(banner); i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c", banner[j]);
    }
    for (int j = i; j < sizeof(banner); j++) {
      printf("%c", blank[j]);
    }
    printf("\n");
  }
  int a = 0;
  return 0;
}
/**
  输出1-100所有素数
  */
int test13() {
  int x = 1000;
  int num[1000] = {2, 3, 5};
  int count = 3;
  for (int i = 1; 6 * i < x; i++) {
    //数论法，大于6的整数只有6i+1,6i+5有可能为素数
    int a = 6 * i + 1;
    int b = 6 * i + 5;
    num[count] = getNum(num, a, &count);
    num[count] = getNum(num, b, &count);
  }
  for (int i = 0; i < count; i++) {
    if (num[i] != 0 && num[i] < x) {
      printf("%d\n", num[i]);
    }
  }
  return 0;
}
//筛选法
int getNum(int num[], int a, int *count) {
  for (int i = 0; i < *count; i++) {
    if (num[i] > sqrt(a) && a % num[i] == 0) {
      return 0;
    }
  }
  *count += 1;
  return a;
}
int test14() {
  char arr1[] = {'a', 'r', 'r', '1', '\0'};
  char arr2[20] = "################";
  strcpy(arr2, arr1);
  printf("%s\n", arr2);
  return 0;
}

void swap(int *a, int *b) {
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}
int test15() {
  int a = 10;
  int b = 17;
  swap(&a, &b);
  printf("a= %d,b= %d\n", a, b);
  return 0;
}
int test16() {
  int i = 20;
  int res = Facl(i);
  printf("%d\n", res);
  return 0;
}
int Facl(int i) {
  if (0 == i)
    return 0;
  if (1 == i)
    return 1;
  return Facl(i - 1) * i;
}

int test17() {
  // printf("aaaaaaaaaa\n");
  int a = 1;
  scanf("%d\n", &a);
  printf("%d\n", a);
}
void test18() {
  int a = 10;
  char b = 'b';
  float c = 1;
  short e = 0;
  int d[10] = {1};
  printf("%d\n", sizeof(a));         // 4
  printf("%d\n", sizeof(b));         // 1
  printf("%d\n", sizeof(c));         // 4
  printf("%d\n", sizeof(d));         // 40
  printf("%d\n", sizeof(int));       // 4
  printf("%d\n", sizeof(short));     // 2
  printf("%d\n", sizeof(int[2]));    // 8
  printf("%d\n", sizeof(int[10]));   // 40
  printf("%d\n", sizeof(int[20]));   // 80
  printf("%d\n", sizeof(int *));     // 8 系统位数/8
  printf("%d\n", sizeof(e = a + 5)); // 2
  printf("%d\n", e);                 // 0 sizeof操作符内部不进行运算
}
void test19() {
  int a = 5;
  printf("%d\n", -a == (~a + 1)); //负数为按位取反加一
}

void test20() {
  int a = 0x11223344;
  int *pa = &a;
  char *pb = &a;
  *pa = 0;
  printf("%p\n", pa);
  printf("%p\n", pb);
  printf("%d\n", *pa);
  printf("%c\n", *pb);
}
void test21() {
  //二级指针
  int a = 10;
  int *pa = &a;
  int **ppa = &pa;
  printf("%d\n", **ppa);
  printf("%d\n", *pa);
  printf("%d\n", a);
}
int bitCount(int num1) {
  int count = 0;
  unsigned int num2 = (unsigned int)num1;
  while (num2) {
    if ((num2 & 1) == 1) {
      count++;
    }
    num2 = num2 >> 1;
  }
  return count;
}
int bitCount2(int num) {
  unsigned int num1 = (unsigned int)num;
  int count = 0;
  while (num1) {
    count++;
    //将会去掉最右边的一个1
    num1 = num1 & (num1 - 1);
  }
  return count;
}
void saveType() {
  int a = 1;
  if (*(char *)&a) {
    printf("小端\n");
  } else {
    printf("大端\n");
  }
}
void test22() {
  char a = -128;
  unsigned char b = a;
  printf("%u\n", a);
  printf("%d\n", b);
}
void test23() {
  unsigned int a = -10;
  if (a > 1) {
    printf("大于\n");
  }
}
void test24() {
  int a = 9;
  float *p = &a;
  printf("%d\n", a);
  printf("%f\n", *p);
  printf("%X\n", a);
}
void test25() {
  // char p[] = {'a', 'b', 'c', '\0'};
  char p[] = "abc";
  // const char *p="abc";//不能直接修改字符串常量
  *p = 'W';
  printf("%s\n", p);
}
void test26() {
  int arr1[10] = {};
  int(*parr1)[] = &arr1; //指针数组

  char c = 'w';
  char *arr2[5] = {&c, &c}; //数组指针
}

void test28(int arr[]) {}
void test29(int *arr) {}
void test30(int arr[][5]) {}
void test31(int (*arr)[5]) {}
void test32(int *arr[]) {}
void test33(int **arr) {}
void test27() {
  int arr[5] = {};
  //一维数组传参
  test28(arr);
  test29(arr);
  //二维数组传参
  int arr2[3][5] = {};
  test30(arr2);
  test31(arr2);
  //指针数组传参
  int *arr3[4] = {};
  test32(arr3);
  test33(arr3);
}

void test34() {
  //函数指针
  printf("%d\n", Add(1, 2));
  printf("%d\n", (&Add)(3, 4));
  printf("%d\n", (*Add)(5, 6));
  printf("%d\n", (**Add)(7, 8));

  int (*padd)(int, int) = Add;
  printf("%d\n", padd(9, 10));
  // printf("%d\n",(&padd)(9,10));
  printf("%d\n", (*padd)(9, 10));
  printf("%d\n", (**padd)(9, 10));

  //函数地址
  printf("%u\n", Add);
  printf("%u\n", &Add);
  printf("%u\n", padd);
  printf("%u\n", &padd);
}

int Add(int a, int b) { return a + b; }

void test35() {
  // 执行地址为0的函数
  //将0强制转换为返回值为void的函数指针，再解应用，再执行
  (*(void (*)())0)();

  //定义一个入参为int, void(*)(int)，返回值为void(*)(int)的函数指针
  void (*signal(int, void (*)(int)))(int);
  //简化
  typedef void (*value)(int);
  value signal2(int, value);
  //指针类型的使用，变量名需要在*后面
}

int plus(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

void test36(){
  printf("函数指针数组\n");
  int (*fun[4])(int, int) = {plus, sub, mul, div};
  int a = 6;
  int b = 10;
  int size = sizeof(fun) / sizeof(fun[0]);
  printf("%d\n", size);
  for (int i = 0; i < size; i++) {
    printf("%d\n", fun[i](a, b));
  }
}
void test37(){ 
  int (*fun[4])(int, int) = {plus, sub, mul, div};
  //指向 函数指针数组 的指针 ->(将函数指针数组的变量名fun替换为指针*pfun)
  int (*(*pfun)[])(int,int) = &fun;
}

void test39(void (*p)(char*),char *str){
  p(str);
}
void test40(char *str){
  printf("%s\n",str);
}
void test38(){
  //函数指针传参
  test39(test40,"good");
}
