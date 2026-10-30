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
extern int fn_82243728(void *, int);
extern void fn_82243668(void *, int, void *, int);
extern void fn_828AC670(void *, int, int);
extern void fn_828AC4E8(void *);
extern void *memset(void *, int, unsigned);

unsigned char fn_822437F0(void *a, char *buf, void *c)
{
  unsigned char ok = fn_82243728(a, 0) != 0;
  if (ok) {
    int lo, hi;
    fn_82243668(a, 1, buf, 8);
    fn_82243668(a, 2, buf + 0x2c, 0x10);
    fn_82243668(a, 3, buf + 8, 0x24);
    lo = fn_82243728(a, 4);
    hi = fn_82243728(a, 5);
    fn_828AC670(c, lo, hi);
  } else {
    memset(buf, 0, 0x3c);
    fn_828AC4E8(c);
  }
  return ok;
}
