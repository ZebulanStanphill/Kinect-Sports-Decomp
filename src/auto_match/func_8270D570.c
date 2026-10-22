typedef struct Obj Obj;
typedef struct Dev Dev;
typedef struct Node Node;

typedef struct DevVtbl {
  void *pad0[11];
  void (*f2c)(Dev *self, int a);
  void (*f30)(Dev *self);
  void *pad34[14];
  void (*f6c)(Dev *self, int a);
  void (*f70)(Dev *self);
} DevVtbl;
struct Dev {
  DevVtbl *vtbl;
};

typedef struct NodeVtbl {
  void *pad0[3];
  int (*f0c)(Node *self);
  void *pad10[20];
  void (*f60)(Node *self, Obj *o);
} NodeVtbl;
struct Node {
  NodeVtbl *vtbl;
};

typedef struct Owner {
  char pad[0xc];
  Dev *dev;
} Owner;

struct Obj {
  Owner *owner;
  char pad4[0x48];
  int x4c;
  int x50;
  unsigned int count;
  Node *stack[0x40];
};

void fn_8270D570(Obj *o, Node *n)
{
  Dev *dev = o->owner->dev;

  dev->vtbl->f6c(dev, o->count != 0);
  if (o->count < 0x40) {
    o->stack[o->count] = n;
  }
  o->count++;
  o->x50++;
  o->x4c++;
  dev->vtbl->f2c(dev, n->vtbl->f0c(n));
  n->vtbl->f60(n, o);
  dev->vtbl->f30(dev);
  o->x4c--;
  dev->vtbl->f70(dev);
}
