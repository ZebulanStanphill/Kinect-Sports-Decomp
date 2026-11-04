typedef struct Item_8274D2A8 { void (**vt)(struct Item_8274D2A8 *, int); int pad; unsigned rc; } Item_8274D2A8;
typedef struct Vec_8274D2A8 { int *data; unsigned count; } Vec_8274D2A8;
typedef struct Obj_8274D2A8 { char pad[0x3c]; char a[0xc]; char b[0xc]; Vec_8274D2A8 *vec; } Obj_8274D2A8;
extern void fn_826BE6C0(void *);
extern void fn_826C30F8(void *p);

void fn_8274D2A8(Obj_8274D2A8 *self)
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
        Item_8274D2A8 *it = (Item_8274D2A8 *)*e;
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
