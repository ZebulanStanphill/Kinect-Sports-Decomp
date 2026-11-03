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
extern unsigned char fn_828B5650(void *, void *);
typedef struct Node { struct Node *left, *parent, *right; unsigned a; char y[0x9]; char pad[3]; char color; char isnil; } Node;
typedef struct { unsigned a; char y[1]; } Key;
typedef struct { char pad[4]; Node *head; } Tree;
typedef struct { Node *lo, *hi; } Range;
static __forceinline unsigned char lt(Key *x, Key *y)
{
  if (x->a < y->a || (!(y->a < x->a) && fn_828B5650(x->y, y->y))) return 1;
  return 0;
}
Range *fn_828E6B10(Range *out, Tree *tree, Key *k)
{
  Node *lo = tree->head;
  Node *hi = lo;
  Node *p = lo->parent;
  while (!p->isnil) {
    if (lt((Key *)&p->a, k)) {
      p = p->right;
    } else {
      if (hi->isnil && lt(k, (Key *)&p->a)) hi = p;
      lo = p;
      p = p->left;
    }
  }
  if (hi->isnil) p = tree->head->parent; else p = hi->left;
  while (!p->isnil) {
    if (lt(k, (Key *)&p->a)) { hi = p; p = p->left; }
    else p = p->right;
  }
  out->lo = lo;
  out->hi = hi;
  return out;
}
