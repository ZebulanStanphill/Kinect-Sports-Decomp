typedef struct Item_82735680 { void (**vt)(struct Item_82735680 *, int); int pad; unsigned rc; } Item_82735680;
typedef struct Vec_82735680 { int *data; unsigned count; } Vec_82735680;
typedef struct Obj_82735680 { char pad[0x78]; char a[0xc]; char b[0xc]; Vec_82735680 *vec; } Obj_82735680;
extern void fn_826BE6C0(void *);
extern void fn_826C30F8(void *p);

void fn_82735680(Obj_82735680 *self)
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
        Item_82735680 *it = (Item_82735680 *)*e;
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
