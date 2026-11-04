typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern int fn_822AF200();


void fn_82359698(char *param_1, int param_2)
{
  char *b;
  int piVar1;
  unsigned char cVar2;
  unsigned int auStack_20[2];

  b = param_1 + 0x40;
  auStack_20[0] = 0;
  fn_822AF200(b + 0x40, auStack_20);
  piVar1 = *(int *)(*(int *)(b + 0x3c) + 8);
  if (piVar1 != 0) {
    cVar2 = (*(unsigned char (**)(int, int))(*(int *)piVar1 + 8))(piVar1, param_2);
  } else {
    cVar2 = 1;
  }
  if (cVar2 != 0) {
    *(int *)(b + 0x18) = param_2;
  }
}
