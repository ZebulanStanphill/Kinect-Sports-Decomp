extern unsigned fn_828E63C8();
extern unsigned char fn_828E6160(void *, void *, void *);
extern void fn_828B5580(void *, void *);
extern void fn_828B55B0(void *);
extern unsigned fn_828A1D70(void *);
extern void fn_828E78D8(void *, void *, unsigned, unsigned);
typedef struct { int key; char v[8]; int tail; } Val_828E7FB0;
typedef struct { int p0; unsigned head; } Self_828E7FB0;
typedef struct { int key; char v[8]; } Key_828E7FB0;
int fn_828E7FB0(Self_828E7FB0 *self, Key_828E7FB0 *key)
{
  unsigned n = fn_828E63C8();
  if (n == self->head || fn_828E6160(self, key, (void *)(n + 0xc)) != 0) {
    struct { unsigned out[4]; Val_828E7FB0 t; } L;
    unsigned node;
    Val_828E7FB0 *p;
    L.t.key = key->key;
    fn_828B5580(L.t.v, key->v);
    L.t.tail = 0;
    node = fn_828A1D70(self);
    p = (Val_828E7FB0 *)(node + 0xc);
    if (p != 0) {
      p->key = L.t.key;
      fn_828B5580(p->v, L.t.v);
      p->tail = L.t.tail;
    }
    fn_828E78D8(L.out, self, n, node);
    n = L.out[0];
    fn_828B55B0(L.t.v);
  }
  return n + 0x18;
}