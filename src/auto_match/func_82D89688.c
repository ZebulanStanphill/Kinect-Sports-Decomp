typedef struct Heap Heap;
typedef struct {
  void *f0, *f4;
  void (*Free)(Heap *h, void *p, int flags);
} HeapVtbl;
struct Heap { HeapVtbl *vt; };

typedef struct {
  char pad[0x10];
  Heap *heap;
} Ctx;

extern Ctx *fn_82CE5410(void);

typedef struct {
  char pad[0x64];
  void *buf;
} Self;

Self *fn_82D89688(Self *self, unsigned int flags)
{
  if (self->buf != 0) {
    Heap *h = fn_82CE5410()->heap;
    h->vt->Free(h, self->buf, 0x200);
  }
  if (flags & 1) {
    Heap *h = fn_82CE5410()->heap;
    h->vt->Free(h, self, 0x80);
  }
  return self;
}
