#include "stdext/xmemory.h"
inline void *operator new(unsigned int, void *p) throw() { return p; }
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
 float f[4]; unsigned int u[4];
} Vec;
struct Value { unsigned int key; Vec value; Value(unsigned int k, const Vec &v) : key(k), value(v) {} };
struct Node { Node *left, *parent, *right; int pad; Value val; unsigned char color, nil; char endpad[14]; };
struct Tree { int pad; Node *head; unsigned int size; };
extern "C" Tree *lbl_83276560;
struct It { Node *p; };
extern "C" void fn_82386ED0(It *, Tree *, Node *, Node *);
extern "C" Vec *fn_823863A8(const unsigned int *key) {
 Tree *tree=lbl_83276560;
 Node *where=tree->head;
 Node *x=tree->head->parent;
 while (!x->nil) {
  if (x->val.key < *key) x=x->right;
  else { where=x; x=x->left; }
 }
 Node *res=where;
 if (where == tree->head || *key < where->val.key) {
  unsigned int k=*key;
  Vec zero = Vec();
  Node *p=std::_Allocate(1,(Node *)0);
  p->left=tree->head; p->parent=tree->head; p->right=tree->head;
  p->color=0; p->nil=0;
  ::new ((void *)&p->val) Value(k, zero);
  It out;
  fn_82386ED0(&out,tree,where,p);
  res=out.p;
 }
 return &res->val.value;
}
