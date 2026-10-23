#include "stdext/exception.h"
struct Node { Node *left,*parent,*right; char value[20]; unsigned char color,isnil; };
struct Tree { int pad; Node *head; unsigned int size; };
extern "C" { void *fn_8265C9E0(unsigned int); int atexit(void (*)()); void fn_8313F9E0(); extern Tree lbl_832978B8; extern unsigned int lbl_83298F88; }
extern "C" Tree *fn_825AA5F8() {
 if (!(lbl_83298F88 & 1)) {
  lbl_83298F88 |= 1;
  lbl_832978B8.size=0;
  Node *n=(Node *)fn_8265C9E0(36);
  if (n) {
  lbl_832978B8.head=n;
  n->left=n;
  lbl_832978B8.head->parent=lbl_832978B8.head;
  lbl_832978B8.head->right=lbl_832978B8.head;
  lbl_832978B8.head->color=1;
  lbl_832978B8.head->isnil=1;
  atexit(fn_8313F9E0);
 } else stdext::bad_alloc(0)._Raise();
 }
 return &lbl_832978B8;
}
