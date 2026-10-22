typedef struct Alloc Alloc;
typedef struct {
  void *f0;
  void *f4;
  void (*Free)(Alloc *self, void *p, unsigned int size);
  void *fc;
  void (*FreeAligned)(Alloc *self, void *p, unsigned int size, int align);
} AllocVtbl;
struct Alloc { AllocVtbl *vtbl; };

typedef struct {
  void *data;
  int size;
  unsigned int cap;
} Array;

extern int fn_82CE5410(void);

Array *fn_82599388(Array *self, unsigned int flags)
{
  Alloc *a;

  a = *(Alloc **)(fn_82CE5410() + 0x10);
  self->size = 0;
  if ((self->cap & 0x80000000) == 0) {
    a->vtbl->FreeAligned(a, self->data, self->cap & 0x3fffffff, 4);
  }
  self->data = 0;
  self->cap = 0x80000000;
  if (flags & 1) {
    a = *(Alloc **)(fn_82CE5410() + 0x10);
    a->vtbl->Free(a, self, 0xc);
  }
  return self;
}
