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


typedef struct { unsigned int key; unsigned int val; } Pair_82490CB8;
typedef struct { Pair_82490CB8 *first; Pair_82490CB8 *last; } Vec_82490CB8;
typedef struct { char pad[0x30]; int f30; unsigned int lo; unsigned int hi; } Range_82490CB8;
typedef struct { int **vt; } Obj_82490CB8;
typedef struct {
  int limit;
  Vec_82490CB8 items;
  int pad[4];
  Range_82490CB8 *range;
  Obj_82490CB8 **lbeg;
  Obj_82490CB8 **lend;
} State_82490CB8;

int fn_82490CB8(State_82490CB8 *s)

{
  Vec_82490CB8 *v = &s->items;
  Pair_82490CB8 *it;
  Pair_82490CB8 *src;
  Pair_82490CB8 *dp;
  unsigned int t;
  unsigned int *dstw;
  unsigned int *srcv;
  Pair_82490CB8 *last;
  Pair_82490CB8 *w;
  Range_82490CB8 *r;
  Obj_82490CB8 **l;
  Obj_82490CB8 **lend;
  int n;

  it = s->items.first;
  n = 0;
  while (it != s->items.last && n < 1) {
    unsigned int key = it->key;
    if (key > s->limit - 0x82U ||
        ((r = s->range) != 0 && key >= r->lo && (r->f30 != 0 || key <= r->hi))) {
      it = it + 1;
    }
    else {
      l = s->lbeg;
      lend = s->lend;
      for (; l != lend; l++) {
        ((void (*)(Obj_82490CB8 *, unsigned int, unsigned int))(*l)->vt[6])(*l, it->key, it->key);
      }
      last = v->last;
      src = it + 1;
      if (src != last) {
        dp = it - 1;
        do {
          ++dp;
          dp->key = src->key;
          t = src->val;
          src = src + 1;
          dp->val = t;
        } while (src != last);
      }
      last = v->last - 1;
      for (w = last; w != v->last; w = w + 1) {
      }
      v->last = last;
      n = n + 1;
    }
  }
  return n;
}
