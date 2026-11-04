typedef struct Item_8274E6A0 { void (**vt)(struct Item_8274E6A0 *, int); int pad; unsigned rc; } Item_8274E6A0;
typedef struct Vec_8274E6A0 { int *data; unsigned count; } Vec_8274E6A0;
typedef struct Obj_8274E6A0 { char pad[0x40]; char a[0xc]; char b[0xc]; Vec_8274E6A0 *vec; } Obj_8274E6A0;
extern void fn_826BE6C0(void *);
extern void fn_826C30F8(void *p);

void fn_8274E6A0(Obj_8274E6A0 *self)
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
        Item_8274E6A0 *it = (Item_8274E6A0 *)*e;
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
