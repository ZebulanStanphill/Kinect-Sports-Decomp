#include "stdext/xmemory.h"
inline void *operator new(unsigned int, void *p) throw() { return p; }
extern "C" long _InterlockedIncrement(long *);
extern "C" long _InterlockedDecrement(long *);
struct Control { void *vt; long uses, weaks; };
struct Shared {
 void *ptr; Control *ctrl;
 Shared(const Shared &b) : ptr(b.ptr), ctrl(b.ctrl) { if (ctrl) _InterlockedIncrement(&ctrl->uses); }
};
struct Node { Node *next, *prev; Shared val; };
extern "C" __declspec(noreturn) void fn_82F622A8(const char *);
struct List { Node *head; unsigned int size; };
extern "C" void fn_828A4FF8(List *self, Node *where, Node *first, Node *last) {
 for (; first != last; first = first->next) {
  Node *prev=where->prev;
  Node *p=std::_Allocate(1,(Node *)0);
  p->next=where; p->prev=prev;
  ::new ((void *)&p->val) Shared(first->val);
  if (0x1ffffffeU - self->size < 1) fn_82F622A8("list<T> too long");
  ++self->size;
  where->prev=p;
  p->prev->next=p;
 }
}
