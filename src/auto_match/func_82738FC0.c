typedef struct Item_82738FC0 { void (**vt)(struct Item_82738FC0 *, int); int pad; unsigned rc; } Item_82738FC0;
typedef struct Vec_82738FC0 { int *data; unsigned count; } Vec_82738FC0;
typedef struct Obj_82738FC0 { char pad[0x48]; char a[0xc]; char b[0xc]; Vec_82738FC0 *vec; } Obj_82738FC0;
extern void fn_826BE6C0(void *);
extern void fn_826C30F8(void *p);

void fn_82738FC0(Obj_82738FC0 *self)
{
  unsigned n, i;
  fn_826BE6C0(self);
  fn_826C30F8(self->a);
  fn_826C30F8(self->b);
  if (self->vec != 0) {
    n = self->vec->count;
    for (i = 0; i < n; i++) {
      int *e = &((int *)self->vec->data)[i];
      if (*e != 0) {
        Item_82738FC0 *it = (Item_82738FC0 *)*e;
        unsigned w = it->rc + 1;
        it->rc = w;
        if ((w & 0x70000000) != 0) {
          it->rc = w & 0x8fffffff;
          (*it->vt)(it, 2);
        }
      }
    }
  }
}
