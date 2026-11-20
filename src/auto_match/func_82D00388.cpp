#include "havok/hkString.h"

typedef struct Allocator_82D00388 Allocator_82D00388;
struct Allocator_82D00388 {
  struct {
    void *f0;
    void *(*alloc)(Allocator_82D00388 *self, int size);
  } *vt;
};

typedef struct Table_82D00388 {
  void *data;
  int count;
  int mask;
} Table_82D00388;

extern "C" char *fn_82CE5410(void);

extern "C" Table_82D00388 *fn_82D00388(Table_82D00388 *self)
{
  Allocator_82D00388 *a = *(Allocator_82D00388 **)(fn_82CE5410() + 0x10);
  self->data = a->vt->alloc(a, 0xc0);
  hkString::memSet(self->data, 0xff, 0x40);
  self->count = 0;
  self->mask = 0xf;
  return self;
}
