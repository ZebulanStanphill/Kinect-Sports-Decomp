typedef struct Item_826A4830 { void (**vt)(struct Item_826A4830 *, int); int pad; unsigned rc; } Item_826A4830;
typedef struct Vec_826A4830 { int *data; unsigned count; } Vec_826A4830;
typedef struct Obj_826A4830 { char pad[0x4c]; char a[0xc]; char b[0xc]; Vec_826A4830 *vec; } Obj_826A4830;
extern void fn_826A1BD8(void *);
extern void fn_826C30F8(void *p);

void fn_826A4830(Obj_826A4830 *self)
{
  unsigned n, i;
  fn_826A1BD8(self);
  fn_826C30F8(self->a);
  fn_826C30F8(self->b);
  if (self->vec != 0) {
    n = self->vec->count;
    for (i = 0; i < n; i++) {
      int *e = &((int *)self->vec->data)[i];
      if (*e != 0) {
        Item_826A4830 *it = (Item_826A4830 *)*e;
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
