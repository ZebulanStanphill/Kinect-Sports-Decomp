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
typedef struct N_82B503A8 { int a, b; int count; unsigned cap; char data[1]; } N_82B503A8;
extern N_82B503A8 *fn_82B4B410(unsigned *p, int x);
char *fn_82B503A8(unsigned *p)
{
  N_82B503A8 *n;
  char *e;
  if ((p[1] & 1) == 0) {
    n = (N_82B503A8 *)((*p & 0xfffffffe) - 4);
    if (n != 0 && (unsigned)(n->count + 1) <= n->cap) goto ok;
  }
  n = fn_82B4B410(p, 1);
ok:
  e = n->data + n->count * 12;
  n->count++;
  return e;
}
