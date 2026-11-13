typedef struct Sub_82874A50 Sub_82874A50;
typedef struct VT_82874A50 {
  int pad[7];
  int (*f1c)();
} VT_82874A50;
struct Sub_82874A50 {
  VT_82874A50 *vt;
};

typedef struct Elem_82874A50 {
  unsigned char state;
  char pad1[3];
  Sub_82874A50 sub;
  char pad8[0x70 - 8];
} Elem_82874A50;

typedef struct Self_82874A50 {
  VT_82874A50 *vt;
  Elem_82874A50 *begin;
  Elem_82874A50 *end;
  char pad0c[0x18 - 0xc];
  int m18[1];
} Self_82874A50;

int fn_82874A50(Self_82874A50 *self)
{
  Elem_82874A50 *p;
  int hr;

  for (p = self->begin; p != self->end; p++) {
    if (p->state == 1) {
      p->sub.vt->f1c(&p->sub);
    }
  }
  hr = self->vt->f1c(self, self->m18);
  if (hr < 0) {
    return 0xa0260000;
  }
  return 0x20260000;
}
