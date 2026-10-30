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
typedef struct Node_8243CD40 Node_8243CD40;
struct Node_8243CD40 { Node_8243CD40 *left; Node_8243CD40 *parent; Node_8243CD40 *right; unsigned int key; unsigned int val; char color; char isnil; };
typedef struct { int pad; Node_8243CD40 *head; } Tree_8243CD40;
typedef struct { unsigned int key; unsigned int val; } Pair_8243CD40;
extern Node_8243CD40 *fn_83062700(Tree_8243CD40 *);
extern void fn_82831208(Node_8243CD40 **, Tree_8243CD40 *, Node_8243CD40 *, Node_8243CD40 *);
unsigned int *fn_8243CD40(Tree_8243CD40 *t, unsigned int *k)
{
  Node_8243CD40 *where;
  Node_8243CD40 *node;
  Node_8243CD40 *out;
  Node_8243CD40 *pn;
  Node_8243CD40 *ret;
  Pair_8243CD40 *p;
  unsigned int key;

  where = t->head;
  pn = t->head->parent;
  if (!pn->isnil) {
    do {
      if (pn->key < *k) {
        pn = pn->right;
      } else {
        where = pn;
        pn = pn->left;
      }
    } while (!pn->isnil);
  }
  ret = where;
  if (where != t->head) {
    if (*k >= where->key) goto done;
  }
  key = *k;
  node = fn_83062700(t);
  p = (Pair_8243CD40 *)&node->key;
  if (p != 0) {
    p->key = key;
    p->val = 0;
  }
  fn_82831208(&out, t, where, node);
  ret = out;
done:
  return &ret->val;
}

