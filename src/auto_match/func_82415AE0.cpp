#include "stdext/exception.h"
typedef __declspec(passinreg) union __vector4 {float f[4];unsigned int u[4];} V;
struct Node {Node *next,*prev;int value;};
struct Obj {Node *head;int size,pad;int a,b,c;int pad2[2];V v;int pad3[4];int value;int pad4[3];V w,x;};
extern "C" {void *fn_8265C9E0(unsigned int);extern V lbl_821962C0;}
extern "C" Obj *fn_82415AE0(Obj *self) {
 self->size=0;
 Node *p=(Node *)fn_8265C9E0(12);
 if(p) {
 self->head=p;p->next=p;self->head->prev=self->head;
 self->a=0;self->b=0;self->c=0;
 self->v=lbl_821962C0;self->value=0;self->w=lbl_821962C0;self->x=lbl_821962C0;
 return self;
 }
 stdext::bad_alloc(0)._Raise();
}
