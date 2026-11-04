typedef struct Item_8273BC58 { void (**vt)(struct Item_8273BC58 *, int); int pad; unsigned rc; } Item_8273BC58;
typedef struct Vec_8273BC58 { int *data; unsigned count; } Vec_8273BC58;
typedef struct Obj_8273BC58 { char pad[0x64]; char a[0xc]; char b[0xc]; Vec_8273BC58 *vec; } Obj_8273BC58;
extern void fn_826BE6C0(void *);
extern void fn_826C30F8(void *p);

void fn_8273BC58(Obj_8273BC58 *self)
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
        Item_8273BC58 *it = (Item_8273BC58 *)*e;
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
