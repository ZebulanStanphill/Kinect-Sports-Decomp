#include "stdext/exception.h"
struct Node { Node *left,*parent,*right; char value[36]; unsigned char color,isnil; };
struct Manager { void *vtable; const char *name; int pad; Node *head; int size; };
extern "C" { void *fn_8265C9E0(unsigned int); extern char lbl_821C0B60[]; extern Manager lbl_83298EF8; }
extern "C" Manager *fn_8235A3B8() {
 lbl_83298EF8.vtable=lbl_821C0B60;
 lbl_83298EF8.name="MindStateMan";
 lbl_83298EF8.size=0;
 Node *n=(Node *)fn_8265C9E0(0x34);
 if (n) {
  lbl_83298EF8.head=n;
  n->left=n;
  lbl_83298EF8.head->parent=lbl_83298EF8.head;
  lbl_83298EF8.head->right=lbl_83298EF8.head;
  lbl_83298EF8.head->color=1;
  lbl_83298EF8.head->isnil=1;
  return &lbl_83298EF8;
 }
 stdext::bad_alloc(0)._Raise();
}
