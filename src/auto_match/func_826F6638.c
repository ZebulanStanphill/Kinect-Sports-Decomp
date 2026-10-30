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
extern int fn_8268CC00();
extern int fn_826E7BF8();

typedef struct { int a; int b; unsigned int c; unsigned int d; } St_826F6638;

void fn_826F6638(int param_1, unsigned int param_2)
{
  St_826F6638 s;
  undefined1 auStack_40 [32];

  s.a = param_1 + 5;
  s.c = 0;
  s.b = -1;
  s.d = 0;
  fn_8268CC00(auStack_40);
  if (s.d != 0) {
    s.c = s.c + 1;
  }
  s.c = s.c + 4;
  s.d = 0;
  fn_826E7BF8(&s, auStack_40);
  *(unsigned char *)(param_1 + 4) = s.c < param_2 - 1;
}
