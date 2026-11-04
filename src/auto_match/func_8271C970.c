typedef struct Item_8271C970 { void (**vt)(struct Item_8271C970 *, int); int pad; unsigned rc; } Item_8271C970;
typedef struct Vec_8271C970 { int *data; unsigned count; } Vec_8271C970;
typedef struct Obj_8271C970 { char pad[0x44]; char a[0xc]; char b[0xc]; Vec_8271C970 *vec; } Obj_8271C970;
extern void fn_826BE6C0(void *);
extern void fn_826C30F8(void *p);

void fn_8271C970(Obj_8271C970 *self)
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
        Item_8271C970 *it = (Item_8271C970 *)*e;
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
