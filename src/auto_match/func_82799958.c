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
extern void *fn_8267B890(void *, int, int);
extern void fn_8267BE38(void *);
extern int fn_826BD6B0(void *, void *, int);
extern int fn_82797FA0(void *, void *, int, int, int, int, int, int, int);
extern void *lbl_831E7E64;

int fn_82799958(void *a, void *b, int n, int p4, int p5, int p6, int p7, int p8, int p9)
{
  void *t;
  int r;
  t = fn_8267B890(lbl_831E7E64, (n + 1) * 2, 0);
  r = fn_826BD6B0(t, b, n);
  r = fn_82797FA0(a, t, r, p4, p5, p6, p7, p8, p9);
  fn_8267BE38(t);
  return r;
}
