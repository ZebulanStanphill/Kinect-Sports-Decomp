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
typedef struct Iter_826B1D88 { unsigned *tab; unsigned idx; } Iter_826B1D88;
typedef struct Pair_826B1D88 { int *obj; int val; } Pair_826B1D88;
extern void fn_82695FA0(char *, int);
extern unsigned char fn_826A8E58(Iter_826B1D88 *, Pair_826B1D88 *);
extern void fn_826AE718(void *, void *, Pair_826B1D88 *, int);
extern void fn_826B0A78(Iter_826B1D88 *, void *, int *);

void fn_826B1D88(void *a, int *b, int c)
{
  struct { Iter_826B1D88 it; Pair_826B1D88 pr; } L;
  fn_826B0A78(&L.it, a, b);
  L.pr.obj = 0;
  L.pr.val = 0;
  if (fn_826A8E58(&L.it, &L.pr) == 0) {
    fn_82695FA0((char *)(L.it.idx * 0x20 + *L.it.tab + 0x18), c);
  } else {
    L.pr.obj = b;
    L.pr.val = c;
    fn_826AE718(a, a, &L.pr, *(int *)(*b + 0xc));
  }
}
