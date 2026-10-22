extern void fn_8265C990(void *p, int flags);
extern int fn_82A1E658(int h);

typedef struct Node Node;
typedef struct {
  char pad00[8];
  void (*release)(Node *self);
  char pad0c[0x10];
  void (*unlink)(Node *self, Node **head);
} NodeVtbl;
struct Node { NodeVtbl *vtbl; };

typedef struct Obj Obj;
typedef struct {
  char pad00[0x20];
  int (*fail)(Obj *self);
  char pad24[0x4c];
  void (*finish)(Obj *self);
  char pad74[8];
  int (*close)(Obj *self);
} ObjVtbl;

struct Obj {
  ObjVtbl *vtbl;
  char pad04[0x28];
  int handle;
  char pad30[0x48];
  unsigned int flags;
  void *buf;
  int pad80;
  Node *head;
};

int fn_82C053E8(Obj *o)
{
  int hr = 0;
  Node *n;
  Node **head;
  if (o->handle != -1) hr = o->vtbl->close(o);
  if (o->handle != -1 && (o->flags & 4) == 0 && fn_82A1E658(o->handle) < 0)
    hr = o->vtbl->fail(o);
  head = &o->head;
  n = *head;
  while (n) {
    n->vtbl->unlink(n, head);
    n->vtbl->release(n);
    n = *head;
  }
  if (o->buf) fn_8265C990(o->buf, 0x208c800a);
  o->vtbl->finish(o);
  return hr;
}
