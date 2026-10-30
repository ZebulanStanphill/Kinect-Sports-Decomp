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
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern int fn_82AB5FE0(int);
extern int fn_82AB6498(int);
extern int fn_82AB6770(int);
extern int fn_82AB67A8(int);
extern int fn_82AB6BC8(int);
extern int fn_82B6B0C8(unsigned);
extern int fn_82B6B230(int, void *);
extern int fn_82B9F808(unsigned);

typedef struct SR_82B6C878 {
  int f0; int f4; void (*f8)(int, void *); char pad[8]; unsigned f14; unsigned f18; unsigned f1c;
} SR_82B6C878;

int fn_82B6C878(SR_82B6C878 *param_1)
{
  if (param_1 == 0) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pSR",
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\shaderrecycler.cpp",
                0x11d);
  }
  if (param_1->f18 != 0) {
    int a;
    int b;
    int iVar5 = param_1->f18;
    while ((a = fn_82AB6498(iVar5)) != 0) {
      int uVar1 = fn_82AB67A8(a);
      while ((b = fn_82AB6498(uVar1)) != 0) {
        int *e = (int *)fn_82AB67A8(b);
        fn_82AB6BC8(e[0]);
        fn_82AB6BC8(e[1]);
        fn_82B6B230(param_1->f1c, e);
        fn_82AB6770(b);
      }
      fn_82AB5FE0(uVar1);
      fn_82AB6770(a);
      iVar5 = param_1->f18;
    }
    fn_82AB5FE0(param_1->f18);
  }
  if (param_1->f14 != 0) {
    fn_82B9F808(param_1->f14);
  }
  if (param_1->f1c != 0) {
    fn_82B6B0C8(param_1->f1c);
  }
  param_1->f8(param_1->f0, param_1);
  return 0;
}
