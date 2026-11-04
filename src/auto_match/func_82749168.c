typedef struct Item_82749168 { void (**vt)(struct Item_82749168 *, int); int pad; unsigned rc; } Item_82749168;
typedef struct Vec_82749168 { int *data; unsigned count; } Vec_82749168;
typedef struct Obj_82749168 { char pad[0x54]; char a[0xc]; char b[0xc]; Vec_82749168 *vec; } Obj_82749168;
extern void fn_826BE6C0(void *);
extern void fn_826C30F8(void *p);

void fn_82749168(Obj_82749168 *self)
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
        Item_82749168 *it = (Item_82749168 *)*e;
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
