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
typedef struct Val { int first; __int64 second; } Val;
typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  int pad;
  Val val;
  char color;
  char isnil;
} Node;
typedef struct Tree { int alloc; Node *head; int size; } Tree;

extern Node *fn_828807A0(Tree *t);

Node *fn_828C9A30(Tree *t, Node *root, Node *where)
{
  Node *newroot;
  Node *p;
  Val *v;

  newroot = t->head;
  if (!root->isnil) {
    p = fn_828807A0(t);
    v = &p->val;
    if (v != 0) {
      v->first = root->val.first;
      v->second = root->val.second;
    }
    p->parent = where;
    p->color = root->color;
    if (newroot->isnil) {
      newroot = p;
    }
    p->left = fn_828C9A30(t, root->left, p);
    p->right = fn_828C9A30(t, root->right, p);
  }
  return newroot;
}
