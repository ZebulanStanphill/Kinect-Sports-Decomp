typedef struct Node Node;
struct Node { void *data; int pad4; Node *next; Node *prev; };
typedef struct { int pad[2]; Node *first; } List;
typedef struct Iface Iface;
struct Iface { void *f0; void *f4; int (*f8)(Iface *, void *); };
typedef struct {
  char pad0[0x10];
  List *list;
  char pad14[4];
  unsigned count;
  char pad1c[0x2c];
  void *h48;
  Iface *iface;
  char pad50[0x3c];
  int elemSize;
  int total;
} Ctx;
typedef struct { char pad[0x2c]; Ctx *ctx; } Obj;
extern int fn_82C10B28(void *, int, Node **);

int fn_82C27E48(Obj *p)
{
  Ctx *c = p->ctx;
  Node *n = 0;
  int hr = 0;
  if (c->count != 0) {
    n = c->list->first;
    while (n != 0) {
      hr = c->iface->f8(c->iface, n->data);
      if (hr < 0) {
        return hr;
      }
      n->prev->next = n->next;
      if (n->next != 0) {
        n->next->prev = n->prev;
      }
      c->count--;
      c->total = c->total - c->elemSize;
      if (c->count == 0) {
        c->list->first = 0;
      }
      hr = fn_82C10B28(c->h48, 0x1d, &n);
      if (hr < 0) {
        return hr;
      }
      n = c->list->first;
    }
  }
  return hr;
}
