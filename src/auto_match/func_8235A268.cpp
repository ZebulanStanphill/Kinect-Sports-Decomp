#include "stdext/xmemory.h"
struct Node { Node *left, *parent, *right; char value[36]; unsigned char color, nil; };
struct Registry { void *vt; const char *name; int pad; Node *head; unsigned int count; };
extern "C" { extern Registry lbl_83298F28; extern char lbl_821C0B60[]; }
extern "C" Registry *fn_8235A268() {
 Registry *self=&lbl_83298F28;
 self->vt=lbl_821C0B60;
 self->name="SportPlayer";
 self->count=0;
 Node *p=std::_Allocate(1,(Node*)0);
 self->head=p;
 self->head->left=self->head;
 self->head->parent=self->head;
 self->head->right=self->head;
 self->head->color=1;
 self->head->nil=1;
 return self;
}
