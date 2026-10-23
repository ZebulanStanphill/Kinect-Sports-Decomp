typedef unsigned int uint;
typedef struct { int a; int b; } Item;
typedef struct { Item *data; uint size; uint cap; } Vec;
extern void *fn_8265C940(uint size, uint flags);
extern void fn_8265C990(void *p, uint flags);
extern void *memcpy(void *d, const void *s, uint n);

void fn_82637168(Vec *v, Item *item, int *hr)
{
  uint n;
  uint cap;
  Item *p;

  n = v->size + 1;
  if (n > v->cap) {
    cap = v->cap * 2;
    if (cap < n) {
      cap = n;
    }
    p = fn_8265C940(cap * 8, 0x64800000);
    if (p == 0) {
      *hr = 0x8007000e;
      return;
    }
    v->cap = cap;
    if (v->data != 0) {
      memcpy(p, v->data, v->size * 8);
      fn_8265C990(v->data, 0x24800000);
    }
    v->data = p;
  }
  if (*hr >= 0) {
    v->data[v->size] = *item;
    v->size++;
  }
}
