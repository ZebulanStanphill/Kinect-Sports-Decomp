#include "stdext/xmemory.h"
inline void *operator new(unsigned int, void *p) throw() { return p; }
struct Mapped { unsigned __int64 data[3]; };
struct Bytes { unsigned char data[24]; };
struct Value { float key; unsigned char blob[24]; Value(float k, const Mapped &v) : key(k) { *(Bytes *)blob=*(const Bytes *)&v; } };
struct Node { Node *left, *parent, *right; Value val; unsigned char color, nil; char pad[2]; };
struct Tree { int pad; Node *head; unsigned int size; };
struct It { Node *p; };
extern "C" void fn_825505D0(It *, Tree *, Node *, Node *);
static unsigned char less(float a,float b) { return a<b; }
extern "C" void *fn_8254F830(Tree *tree, const float *key) {
 Node *where=tree->head;
 Node *x=tree->head->parent;
 while (!x->nil) {
  if (less(x->val.key,*key)) x=x->right;
  else { where=x; x=x->left; }
 }
 It it; it.p = where;
 if (where == tree->head || less(*key,where->val.key)) {
  float k=*key;
  Mapped zero = Mapped();
  Node *p=std::_Allocate(1,(Node *)0);
  p->left=tree->head; p->parent=tree->head; p->right=tree->head;
  p->color=0; p->nil=0;
  ::new ((void *)&p->val) Value(k, zero);
  It out; fn_825505D0(&out,tree,where,p); it = out;
 }
 return it.p->val.blob;
}
