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
typedef struct Node_8249CB58 Node_8249CB58;
struct Node_8249CB58 { Node_8249CB58 *left; Node_8249CB58 *parent; Node_8249CB58 *right; int key; int val; char color; char isnil; };
typedef struct { int pad; Node_8249CB58 *head; } Tree_8249CB58;
typedef struct { int key; int val; } Pair_8249CB58;
extern Node_8249CB58 *fn_83062700(Tree_8249CB58 *);
extern void fn_8249CC10(Node_8249CB58 **, Tree_8249CB58 *, Node_8249CB58 *, Node_8249CB58 *);
int *fn_8249CB58(Tree_8249CB58 *t, int *k)
{
  Node_8249CB58 *where;
  Node_8249CB58 *node;
  Node_8249CB58 *out;
  Node_8249CB58 *pn;
  Node_8249CB58 *ret;
  Pair_8249CB58 *p;
  int key;

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
  p = (Pair_8249CB58 *)&node->key;
  if (p != 0) {
    p->key = key;
    p->val = 0;
  }
  fn_8249CC10(&out, t, where, node);
  ret = out;
done:
  return &ret->val;
}

