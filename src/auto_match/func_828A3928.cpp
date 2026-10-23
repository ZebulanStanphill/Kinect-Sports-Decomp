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
extern "C" void fn_828A3928(void *, Node *next, Node *prev, const Shared *val) {
 Node *p=(Node *)fn_8265C9E0(sizeof(Node));
 if (p) {
  p->next=next; p->prev=prev;
  ::new ((void *)&p->val) Shared(*val);
  return;
 }
 stdext::bad_alloc(0)._Raise();
}
