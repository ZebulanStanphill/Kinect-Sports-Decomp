struct I_82E46EF8;
typedef struct IV_82E46EF8 { void *s0; void *s4; void (*f8)(struct I_82E46EF8 *); void *sc; void *s10; int (*f14)(struct I_82E46EF8 *, int *); } IV_82E46EF8;
typedef struct I_82E46EF8 { IV_82E46EF8 *vt; } I_82E46EF8;
typedef struct O_82E46EF8 { char pad[0x64]; unsigned n; char p68[0xc]; I_82E46EF8 **items; } O_82E46EF8;
extern void *memcpy(void *, const void *, unsigned);

int fn_82E46EF8(O_82E46EF8 *o, unsigned idx)
{
  int hr;
  int v;
  I_82E46EF8 *p;
  I_82E46EF8 **e;

  v = 0;
  if (idx >= o->n) {
    hr = 0x80070057;
  } else {
    p = o->items[idx];
    if (p == 0) {
      hr = 0x8000ffff;
    } else {
      hr = p->vt->f14(p, &v);
      if (hr >= 0) {
        e = o->items + idx;
        memcpy(e, e + 1, (o->n - idx - 1) * 4);
        o->n = o->n - 1;
        p->vt->f8(p);
      }
    }
  }
  return hr;
}
