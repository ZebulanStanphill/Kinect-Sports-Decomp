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
extern unsigned int *__imp__XexExecutableModuleHandle;
typedef struct { char pad[0x2c]; unsigned short count; short pad2; short *names; } XexMod_82A20E30;
extern XexMod_82A20E30 **__imp_XexExecutableModuleHandle;
extern int fn_82A20D78();

int fn_82A20E30(int param_1)
{
  char buf[512];
  XexMod_82A20E30 *h;
  unsigned n;
  unsigned i, nx;
  if (fn_82A20D78("default.xex", 0xc, param_1) != 0) return 1;
  h = *__imp_XexExecutableModuleHandle;
  n = h->count;
  if (n != 0) {
    i = 0;
    do {
      nx = (i + 1) & 0xffff;
      buf[i] = (char)h->names[i];
      n = h->count;
      i = nx;
    } while (nx < n);
  }
  return fn_82A20D78(buf, n, param_1) != 0;
}
