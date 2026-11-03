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


typedef struct { unsigned int pad[6]; unsigned int child[2]; } TNode_8268E620;
#define T(x) ((TNode_8268E620 *)(x))

unsigned int fn_8268E620(unsigned int *param_1, unsigned int nb)
{
  unsigned int t;
  unsigned int v;
  unsigned int rsize;
  unsigned int rst;
  unsigned int sizebits;
  unsigned int rt;
  unsigned int trem;

  t = *param_1; v = 0; rsize = 0xffffffff;
  if (t == 0) {
    return v;
  }
  rst = 0; sizebits = nb;
  for (;;) {
    trem = t - nb;
    if (t >= nb && trem < rsize) {
      v = t;
      rsize = trem;
      if (trem == 0) {
        return t;
      }
    }
    rt = T(t)->child[1];
    t = T(t)->child[sizebits >> 31];
    if (rt != 0 && rt != t) {
      rst = rt;
    }
    if (t == 0) break;
    sizebits <<= 1;
  }
  t = rst;
  if (t == 0) {
    return v;
  }
  do {
    trem = t - nb;
    if (t >= nb && trem < rsize) {
      rsize = trem;
      v = t;
    }
    t = T(t)->child[T(t)->child[0] == 0];
  } while (t != 0);
  return v;
}
