typedef struct Alloc Alloc;
typedef struct AllocVt { void *f0, *f4; void (*blockFree)(Alloc *, void *, int); } AllocVt;
struct Alloc { AllocVt *vt; };
typedef struct Mem { char pad[0x10]; Alloc *alloc; } Mem;
extern Mem *fn_82CE5410(void);
typedef struct Buf { char pad[0x64]; void *data; } Buf;
typedef struct Self { char pad[0x70]; Buf buf; } Self;

void fn_82D89718(Self *self)
{
  Buf *b = &self->buf;
  if (b->data) {
    Alloc *a = fn_82CE5410()->alloc;
    a->vt->blockFree(a, b->data, 0x200);
  }
}
