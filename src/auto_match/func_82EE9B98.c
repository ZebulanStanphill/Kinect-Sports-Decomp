typedef struct Node { struct Node *next; struct Node *prev; int m8; struct Sink *mc; unsigned m10; int m14; } Node;
typedef struct Sink { struct SinkVt *vt; } Sink;
struct SinkVt { void *f0; void (*f4)(Sink *); };
typedef struct { int count; Node *next; Node *prev; unsigned id; int pad; int ac; } Lst;
typedef struct { char pad[0x50]; char cs[0x1048]; Lst lst; } Self;
extern void *fn_82E50BE8(int, int, int, int, int);
extern void fn_82EE9850(Self *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

int fn_82EE9B98(Self *self, int a, Sink *sink, unsigned *outId)
{
  Node *n;
  Node *tail;
  Lst *l;
  int r;
  RtlEnterCriticalSection(self->cs);
  n = (Node *)fn_82E50BE8(0x18, 0, 0, 0, 0);
  if (n == 0) {
    r = 0x8007000e;
    RtlLeaveCriticalSection(self->cs);
    return r;
  } else {
    n->m8 = a;
    n->mc = sink;
    if (sink != 0) sink->vt->f4(sink);
    n->m10 = self->lst.id;
    self->lst.id = self->lst.id + 1;
    n->m14 = 0;
    if (self->lst.id == 0) self->lst.id = 1;
    l = &self->lst;
    tail = l->prev;
    n->next = (Node *)&l->next;
    n->prev = tail;
    tail->next = n;
    self->lst.prev = n;
    l->count = l->count + 1;
    if (outId != 0) *outId = n->m10;
    if (self->lst.ac == 0) fn_82EE9850(self);
    r = 0;
  }
  RtlLeaveCriticalSection(self->cs);
  return r;
}
