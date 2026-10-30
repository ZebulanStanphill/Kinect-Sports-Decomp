typedef struct Item_8286D828 Item_8286D828;
typedef struct {
  char pad0[0x2c];
  int (*f2c)(Item_8286D828 *);
  void (*f30)(Item_8286D828 *, int);
} VT_8286D828;
struct Item_8286D828 {
  VT_8286D828 *vt;
};

typedef struct {
  char pad0[4];
  Item_8286D828 **begin;
  Item_8286D828 **end;
} Vec_8286D828;

extern unsigned char fn_828647C0(int, int);
extern void *memmove(void *, const void *, unsigned int);

int fn_8286D828(Vec_8286D828 *v, int key)
{
  Item_8286D828 **p = v->begin;
  Item_8286D828 *item;
  Item_8286D828 **nx;

  while (p != v->end) {
    item = *p;
    if (fn_828647C0(item->vt->f2c(item), key) != 0) goto found;
    p++;
  }
  return 0xa0370000;
found:
  nx = p + 1;
  memmove(p, nx, (v->end - nx) * sizeof(Item_8286D828 *));
  v->end = v->end - 1;
  item->vt->f30(item, 1);
  return 0x20370000;
}
