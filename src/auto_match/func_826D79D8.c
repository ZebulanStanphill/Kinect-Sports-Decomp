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
int fn_826D79D8(int *p, unsigned *key, unsigned idx)
{
  int r = idx;
  unsigned *e = (unsigned *)(idx * 0x10 + *p + 8);
  if (*e != 0xfffffffe && e[1] == idx) {
    for (;;) {
      if (e[1] == idx && e[2] == *key) return r;
      r = *e;
      if (r == -1) break;
      e = (unsigned *)(r * 0x10 + *p + 8);
    }
  }
  return -1;
}
