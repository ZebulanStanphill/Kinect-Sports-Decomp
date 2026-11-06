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


typedef struct Buf_822EF060 {
  int (**vt)(struct Buf_822EF060 *);
  char pad0[0x1c];
  unsigned char **gfirst;
  char pad1[0xc];
  int *gcount;
} Buf_822EF060;

typedef struct Iter_822EF060 {
  Buf_822EF060 *buf;
  unsigned char got;
  unsigned char ch;
} Iter_822EF060;

unsigned char fn_822EF060(Iter_822EF060 *param_1)

{
  Buf_822EF060 *b;
  int n;
  int c;

  b = param_1->buf;
  if (b != 0) {
    if (*b->gfirst != 0) {
      n = *b->gcount;
    }
    else {
      n = 0;
    }
    if (n > 0) {
      c = **b->gfirst;
    }
    else {
      c = b->vt[6](b);
    }
    if (c != -1) {
      param_1->ch = (unsigned char)c;
      goto done;
    }
  }
  param_1->buf = 0;
done:
  param_1->got = 1;
  return param_1->ch;
}
