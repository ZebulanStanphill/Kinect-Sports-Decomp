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
extern void fn_82289408(int, int, int, int);
extern int fn_82484768(int);
extern void fn_8234F338(int, int, int *, int *);
extern void fn_8228A728(char *, int, int, int, int *, int *);
extern void fn_8229E090(int, int, int);

void fn_82289930(unsigned int param_1, int param_2)
{
  int v;
  int a;
  int b;
  char buf[1008];

  switch (param_1) {
  case 1:
    v = 1;
    break;
  case 0:
    fn_82289408(param_2, 2, 0, 0);
    { int r = fn_82484768(*(int *)(param_2 + 0x11f0)); fn_8234F338(*(int *)(param_2 + 0x11f0) + 0x234, r, &b, &a); }
    fn_8228A728(buf, param_2, 2, fn_82484768(*(int *)(param_2 + 0x11f0)), &b, &a);
    v = 7;
    break;
  default:
    return;
  }
  *(int *)(param_2 + 0x604) = v;
  if (*(unsigned *)(param_2 + 0x11f8) != 0) {
    fn_8229E090(*(int *)(param_2 + 0x11f8), 0, 1);
    *(int *)(param_2 + 0x11f8) = 0;
  }
}
