typedef struct Vec_828FDE70 { char pad[0x5c]; void *data; unsigned size; unsigned cap; } Vec_828FDE70;
extern void *memcpy(void *, const void *, unsigned);
extern void *fn_8265C940(unsigned, int);
extern void fn_8265C990(void *, int);

int fn_828FDE70(Vec_828FDE70 *v, unsigned n)
{
  if (v->size + n > v->cap) {
    unsigned ncap = v->cap ? v->cap : 0x100;
    void *p;
    while (v->size + n > ncap) {
      ncap = ncap << 1;
    }
    p = fn_8265C940(ncap * 4, 0x24810000);
    if (p == 0) {
      return 0x8007000e;
    }
    memcpy(p, v->data, v->size * 4);
    fn_8265C990(v->data, 0x24810000);
    v->data = p;
    v->cap = ncap;
  }
  return 0;
}
