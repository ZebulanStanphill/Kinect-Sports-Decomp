#include "stdext/xmemory.h"
inline void *operator new(unsigned int, void *p) throw() { return p; }
struct Pair { unsigned a,b; };
struct Node { Node *next,*prev; Pair value; };
struct List { Node *head; unsigned size; };
extern "C" __declspec(noreturn) void fn_82F622A8(const char*);
extern "C" void fn_82580F90(List *self,unsigned val) {
 Pair value={val,5};
 Node *next=self->head,*prev=next->prev;
 Node *p=std::_Allocate(1,(Node*)0);
 p->next=next;p->prev=prev;
 ::new ((void*)&p->value) Pair(value);
 if (0x1ffffffe-self->size < 1) fn_82F622A8("list<T> too long");
 ++self->size;next->prev=p;p->prev->next=p;
}
