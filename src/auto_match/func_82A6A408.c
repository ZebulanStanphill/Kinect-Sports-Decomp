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
extern unsigned int uStack_10;


extern int _blkmov(int, int, int);
void fn_82A6A408(int param_1,int param_2,int param_3,int param_4)
{
  int n, m, iVar1;
  unsigned uStack_10;
  n = *(int *)(param_3 + 0x58);
  m = n * param_4;
  uStack_10 = param_1 << (*(int *)(param_3 + 0x5c) - (unsigned)*(unsigned short *)(param_3 + 0x6e));
  iVar1 = m + param_2;
  if (0 < n) {
    _blkmov(iVar1, (int)&uStack_10 + ((iVar1 - m) - param_2) + 2, n);
  }
}
