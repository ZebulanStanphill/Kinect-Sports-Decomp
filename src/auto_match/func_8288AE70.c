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
typedef struct Node_8288AE70 {
  struct Node_8288AE70 *left;
  struct Node_8288AE70 *parent;
  struct Node_8288AE70 *right;
  unsigned int key;
  int val;
  char color;
  char isnil;
} Node_8288AE70;

typedef struct Tree_8288AE70 {
  int pad0;
  Node_8288AE70 *head;
} Tree_8288AE70;

typedef struct Pair_8288AE70 {
  unsigned int first;
  unsigned char second;
} Pair_8288AE70;

extern int fn_8288A9B8(Pair_8288AE70 *, Tree_8288AE70 *, Node_8288AE70 *, int);
extern int fn_8288AB68(Tree_8288AE70 *, Pair_8288AE70 *);

unsigned int *fn_8288AE70(Tree_8288AE70 *tree, unsigned int *key)
{
  Node_8288AE70 *where;
  Node_8288AE70 *node;
  Pair_8288AE70 p;
  int r;

  where = tree->head;
  node = tree->head->parent;
  while (node->isnil == 0) {
    if (node->key < *key) {
      node = node->right;
    } else {
      where = node;
      node = node->left;
    }
  }
  if (where == tree->head || *key < where->key) {
    p.first = *key;
    p.second = 0;
    r = fn_8288AB68(tree, &p);
    fn_8288A9B8(&p, tree, where, r);
    where = (Node_8288AE70 *)p.first;
  }
  return (unsigned int *)((char *)where + 0x10);
}
