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
typedef struct Blk_82363740 { void *vt; int uses; int weaks; int pad; char obj[1]; } Blk_82363740;
typedef struct Out_82363740 { void *obj; Blk_82363740 *blk; } Out_82363740;
extern void *fn_82400E48(void *, void *, void *, void *);
extern void *fn_8251F720(char *, int);
extern void fn_8251FA58(void *);
extern void *fn_8265C9E0(unsigned int);
extern unsigned int lbl_821A8D8C;

Out_82363740 *fn_82363740(Out_82363740 *out, char *a, void *b)
{
  void *h = fn_8251F720(a + 0x7ec, 0);
  Blk_82363740 *blk = (Blk_82363740 *)fn_8265C9E0(0x3f0);
  if (blk != 0) {
    blk->uses = 1;
    blk->vt = &lbl_821A8D8C;
    blk->weaks = 1;
    if (blk->obj != 0) fn_82400E48(blk->obj, a, b, h);
  } else {
    blk = 0;
  }
  out->blk = blk;
  out->obj = blk->obj;
  if (h != 0) fn_8251FA58(h);
  return out;
}
