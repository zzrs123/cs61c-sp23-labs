#include <stdio.h>
#include <stdlib.h>

int* int_on_stack() {
  // Allocates memory on the stack for an integer
  // int x = 5; 局部变量在函数返回后就会被释放，无法拿到其地址
  
  // 改为静态，放在静态存储区（数据段）
  static int x = 5;

  // Returns a pointer that points to the number 5
  return &x;
}

int* int_on_heap() {
  // TODO: allocate memory on the heap for an integer
  int * ptr_to_5 = (int*)malloc(sizeof(int*));


  // TODO: store the number 5 in memory you just allocated
  *ptr_to_5 = 5;

  // Returns a pointer that points to the number 5
  return ptr_to_5;
}

int main() {
  // 堆栈的概念有点忘记了
  // ptr_to_stack-> address of x
  int* ptr_to_stack = int_on_stack();
  // 
  int* ptr_to_heap = int_on_heap();

  printf("ptr_to_stack is the address %p\n", ptr_to_stack);
  printf("ptr_to_heap is the address %p\n", ptr_to_heap);

  return 0;
}
