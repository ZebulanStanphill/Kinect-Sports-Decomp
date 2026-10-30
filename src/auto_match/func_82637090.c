typedef struct { int a, b, c; } E_82637090;
typedef struct { E_82637090 *data; unsigned size; unsigned cap; } V_82637090;
extern E_82637090 *fn_8265C940(unsigned, int);
extern void fn_8265C990(void *, int);
extern void *memcpy(void *, const void *, unsigned);
void fn_82637090(V_82637090 *v, E_82637090 *e, int *hr)
{
  unsigned need = v->size + 1;
  if (need > v->cap) {
    unsigned nc = v->cap * 2;
    E_82637090 *n;
    if (nc < need) nc = need;
    n = fn_8265C940(nc * 12, 0x64800000);
    if (n == 0) {
      *hr = 0x8007000e;
      return;
    }
    v->cap = nc;
    if (v->data != 0) {
      memcpy(n, v->data, v->size * 12);
      fn_8265C990(v->data, 0x24800000);
    }
    v->data = n;
  }
  if (*hr >= 0) {
    E_82637090 *d = v->data + v->size;
    *d = *e;
    v->size = v->size + 1;
  }
}
