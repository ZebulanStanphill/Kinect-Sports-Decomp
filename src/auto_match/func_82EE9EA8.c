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
typedef struct Node_82EE9EA8 Node_82EE9EA8;
struct Node_82EE9EA8 {
  int pad0[2];
  Node_82EE9EA8 *left;
  Node_82EE9EA8 *right;
  __int64 key;
  unsigned rank;
};
Node_82EE9EA8 *fn_82EE9EA8(void *param_1, Node_82EE9EA8 *n, Node_82EE9EA8 *b)
{
  Node_82EE9EA8 *r = n->right;
  Node_82EE9EA8 *m;
  Node_82EE9EA8 *l;
  unsigned rk;
  if (r == 0) m = b;
  else if (b == 0) m = r;
  else if (r->key < b->key) m = fn_82EE9EA8(param_1, r, b);
  else m = fn_82EE9EA8(param_1, b, r);
  l = n->left;
  n->right = m;
  if (l == 0 || l->rank < m->rank) {
    n->left = m;
    n->right = l;
  }
  if (n->right == 0) {
    rk = 1;
  } else {
    unsigned a = n->right->rank;
    unsigned c = n->left->rank;
    if (c < a) a = c;
    rk = a + 1;
  }
  n->rank = rk;
  return n;
}
