typedef struct Node { struct Node *next; } Node;

typedef struct Heap Heap;
typedef struct {
  void *f0;
  void *f4;
  void (*Free)(Heap *h, void *p, int size);
  void *fc;
  void (*Free2)(Heap *h, void *p, int size, int flags);
} HeapVtbl;
struct Heap { HeapVtbl *vt; };

typedef struct {
  char pad0[0x10];
  Heap *h10;
  char pad14[4];
  Heap *h18;
} Mem;

typedef struct {
  char pad0[0x10];
  int count;
  void *buf14;
  int pad18;
  int size1c;
  char pad20[0x50 - 0x20];
  void *buf50;
  short pad54;
  unsigned short size56;
  char pad58[0x68 - 0x58];
  Node *list68;
  char pad6c[0x78 - 0x6c];
  Node *list78;
} Obj;

extern Mem *fn_82CE5410(void);
extern void fn_82DC4190(Obj *o, int f);

void fn_82DC4230(Obj *o)
{
  Node *n;
  Mem *m;
  void *p;
  int size;

  while (o->list68 != 0) {
    n = o->list68;
    o->list68 = n->next;
    m = fn_82CE5410();
    m->h10->vt->Free(m->h10, n, 0x1000);
  }
  while (o->list78 != 0) {
    n = o->list78;
    o->list78 = n->next;
    m = fn_82CE5410();
    m->h10->vt->Free(m->h10, n, 0x30);
  }
  p = o->buf14;
  if (p != 0) {
    size = o->size1c;
    m = fn_82CE5410();
    m->h18->vt->Free2(m->h18, p, size, 1);
    o->buf14 = 0;
  }
  if (o->count > 1) {
    size = o->size56;
    p = o->buf50;
    m = fn_82CE5410();
    m->h10->vt->Free2(m->h10, p, size, 4);
    o->buf50 = 0;
  }
  fn_82DC4190(o, 1);
}
