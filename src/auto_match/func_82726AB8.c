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
typedef struct { int pad; int ref; } RefA;
typedef struct { int ref; } RefB;

typedef struct {
  char pad0[8];
  int s8;
  int c;
  int s10;
  int x14;
  int a;
  int b;
  int x20;
  unsigned short x24;
  unsigned short x26;
  unsigned char x28;
  unsigned short x2a;
} Self;

extern void fn_8267BE38(RefB *p);
extern void fn_8267C498(RefA *p);
extern void fn_8268BA10(void *dst, void *src);
extern void fn_826C6368(RefB *p);

Self *fn_82726AB8(Self *param_1, Self *param_2)
{
  RefB *b;
  int h;

  fn_8268BA10(&param_1->s8, &param_2->s8);
  param_1->c = param_2->c;
  fn_8268BA10(&param_1->s10, &param_2->s10);
  param_1->x14 = param_2->x14;
  h = param_2->a;
  if (h != 0) {
    ((RefA *)h)->ref++;
  }
  if ((RefA *)param_1->a != 0) {
    fn_8267C498((RefA *)param_1->a);
  }
  param_1->a = param_2->a;
  h = param_2->b;
  if (h != 0) {
    ((RefB *)h)->ref++;
  }
  b = (RefB *)param_1->b;
  if (b != 0) {
    if (--b->ref == 0) {
      fn_826C6368(b);
      fn_8267BE38(b);
    }
  }
  param_1->b = param_2->b;
  param_1->x20 = param_2->x20;
  param_1->x24 = param_2->x24;
  param_1->x26 = param_2->x26;
  param_1->x28 = param_2->x28;
  param_1->x2a = param_2->x2a;
  return param_1;
}
