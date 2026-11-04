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
extern int fn_82B8B280(int, int, int, int, int);
extern unsigned char fn_82B8BCB0(int, int, int, int);

unsigned int fn_82B8D528(int a, int b, int c)
{
  unsigned int k;
  unsigned char ok;


  k = *(unsigned int *)(b + 8) >> 7 & 0x7f;
  if (k != 0x70) {
    ok = k == 0x7d || k == 0x7c;
    if (!ok && k != 0x71) {
      return fn_82B8BCB0(c, a, b, 1) == 0;
    }
  }
  return fn_82B8B280(a, b, 0, 1, c);
}
