void __emit(unsigned int);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct Lock { int a, b; int held; } Lock;
typedef struct Owner { int a; Lock lock; } Owner;
typedef struct Entry { Node *next; Node *prev; Owner *owner; } Entry;
typedef struct Holder_8289AF80 { int pad; Entry e; } Holder_8289AF80;
typedef struct Guard { Lock *l; int pad[3]; } Guard;
extern void fn_822B1B90(Guard *g, Lock *lock);

void fn_8289AF80(void *unused, Holder_8289AF80 *h)
{
  Guard g;
  Entry *e = &h->e;
  if (e->owner) {
    fn_822B1B90(&g, &e->owner->lock);
    e->next->prev = e->prev;
    e->prev->next = e->next;
    __lwsync();
    g.l->held = 0;
  }
}
