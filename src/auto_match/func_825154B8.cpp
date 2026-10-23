#include "stdext/exception.h"
struct Node { Node *left,*parent,*right; char value[60]; unsigned char color,isnil; };
struct Tree { int pad; Node *head; unsigned int size; };
extern "C" { void *fn_8265C9E0(unsigned int); int atexit(void (*)()); void fn_8313F190(); extern Tree lbl_83297944; extern unsigned int lbl_83298FD8; }
extern "C" Tree *fn_825154B8() {
 if (!(lbl_83298FD8 & 1)) {
  lbl_83298FD8 |= 1;
  lbl_83297944.size=0;
  Node *n=(Node *)fn_8265C9E0(76);
  if (n) {
  lbl_83297944.head=n;
  n->left=n;
  lbl_83297944.head->parent=lbl_83297944.head;
  lbl_83297944.head->right=lbl_83297944.head;
  lbl_83297944.head->color=1;
  lbl_83297944.head->isnil=1;
  atexit(fn_8313F190);
 } else stdext::bad_alloc(0)._Raise();
 }
 return &lbl_83297944;
}
