typedef struct Item_82741008 { void (**vt)(struct Item_82741008 *, int); int pad; unsigned rc; } Item_82741008;
typedef struct Vec_82741008 { int *data; unsigned count; } Vec_82741008;
typedef struct Obj_82741008 { char pad[0x48]; char a[0xc]; char b[0xc]; Vec_82741008 *vec; } Obj_82741008;
extern void fn_8273FE38(void *);
extern void fn_826C30F8(void *p);

void fn_82741008(Obj_82741008 *self)
{
  unsigned n, i;
  fn_8273FE38(self);
  fn_826C30F8(self->a);
  fn_826C30F8(self->b);
  if (self->vec != 0) {
    n = self->vec->count;
    for (i = 0; i < n; i++) {
      int *e = &((int *)self->vec->data)[i];
      if (*e != 0) {
        Item_82741008 *it = (Item_82741008 *)*e;
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
