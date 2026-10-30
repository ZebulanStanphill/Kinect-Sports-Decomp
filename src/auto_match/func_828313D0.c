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
typedef struct Node_828313D0 {
  struct Node_828313D0 *left;
  struct Node_828313D0 *parent;
  struct Node_828313D0 *right;
  unsigned key;
  int value;
  char color;
  char isnil;
} Node_828313D0;

typedef struct Tree_828313D0 {
  int pad;
  Node_828313D0 *head;
} Tree_828313D0;

typedef struct Tree2_828313D0 {
  int pad;
  Node_828313D0 *head;
} Tree2_828313D0;

typedef struct Pair_828313D0 {
  unsigned key;
  int value;
} Pair_828313D0;

typedef struct Iter_828313D0 {
  Node_828313D0 *node;
  int pad;
} Iter_828313D0;

extern Iter_828313D0 *fn_82831370(Iter_828313D0 *, Tree_828313D0 *, Node_828313D0 *, Pair_828313D0 *);

int *fn_828313D0(Tree_828313D0 *t, unsigned *k)
{
  Node_828313D0 *where = t->head;
  Node_828313D0 *p = t->head->parent;
  Node_828313D0 *res;
  if (p->isnil == 0) {
    do {
      if (p->key < *k) {
        p = p->right;
      } else {
        where = p;
        p = p->left;
      }
    } while (p->isnil == 0);
  }
  res = where;
  if (where == t->head || *k < where->key) {
    struct { Iter_828313D0 ret; Pair_828313D0 pr; } l;
    l.pr.key = *k;
    l.pr.value = 0;
    res = fn_82831370(&l.ret, t, where, &l.pr)->node;
  }
  return &res->value;
}
