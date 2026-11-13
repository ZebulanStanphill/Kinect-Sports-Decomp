typedef struct { int p0; unsigned size; unsigned *data; } Vec_82BC0DD8;
typedef struct { char pad[0x24]; Vec_82BC0DD8 *v; } Self_82BC0DD8;
extern unsigned *fn_82BC0088(Vec_82BC0DD8 *, unsigned);
static __forceinline unsigned *At(Vec_82BC0DD8 *v, unsigned i) { if (i < v->size) return v->data + i; return fn_82BC0088(v, i); }
void fn_82BC0DD8(Self_82BC0DD8 *self, unsigned key, int val)
{
  unsigned i;
  for (i = 0; i < self->v->size; i++) {
    if (*At(self->v, i) == key) {
      *At(self->v, i) = val;
      return;
    }
  }
}