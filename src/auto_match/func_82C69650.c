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
extern void fn_82CAAF00(int, int *, int);

void fn_82C69650(char *param_1, int param_2)
{
  char *base = *(char **)(param_1 + 0x6070);
  if (0 < param_2) {
    int *p = (int *)(base + 0x46e0);
    int n = param_2;
    do {
      int v;
      fn_82CAAF00(*(int *)(param_1 + 0x3ba4), p, -1);
      v = *p;
      n--;
      p[-0x41] = v;
      p++;
      *(unsigned *)(v + 0x26c) = 0xaaaaaaaa;
    } while (n != 0);
  }
  *(int *)(base + 0x47e0) = param_2;
  *(int *)(base + 0x46dc) = param_2;
}
