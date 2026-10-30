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
extern __int64 fn_827E38C0();


longlong fn_827DA928(int param_1)
{
  unsigned int *p;
  unsigned int *e;
  longlong sum = 0;

  p = *(unsigned int **)(param_1 + 4);
  e = *(unsigned int **)(param_1 + 8);
  for (; p != e; p++) {
    sum = fn_827E38C0(*p) + sum;
  }
  p = *(unsigned int **)(param_1 + 0x2c);
  e = *(unsigned int **)(param_1 + 0x30);
  for (; p != e; p++) {
    sum = fn_827E38C0(*p) + sum;
  }
  return sum;
}
