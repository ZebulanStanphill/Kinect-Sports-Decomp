typedef struct Self Self;
typedef struct SelfVt {
  void *pad[20];
  int (*f50)(void);
} SelfVt;

struct Self {
  SelfVt *vt;
  int f4;
  int f8;
  int fc;
  void *f10;
  int f14;
  int f18;
  unsigned int stride;
  int f20;
  unsigned int count;
  int f28;
  int f2c;
  char f30[0x48 - 0x30];
  unsigned int size;
};

extern int fn_82EE6048(void *a, unsigned int off, void *out, int len);

int fn_82F48580(Self *self, unsigned int id, unsigned int *index)
{
  int hr;
  unsigned int off;
  unsigned int i;
  unsigned int value;
  unsigned int need;

  off = 0;
  value = 0;
  if (self->vt->f50() == 0) {
    return 0x80004001;
  }
  if (self->f10 == 0) {
    return 0xc00d36b6;
  }
  if (index == 0) {
    return 0x80004003;
  }
  need = self->stride * self->count + 8;
  if (self->size < need) {
    return 0xc00d3a9e;
  }
  for (i = 0; i < self->count; i++) {
    hr = fn_82EE6048(self->f30, off, &value, 4);
    if (hr < 0) break;
    if (value == id) {
      *index = i;
      return hr;
    }
    off = self->stride + off;
  }
  return 0xc00d36bf;
}
