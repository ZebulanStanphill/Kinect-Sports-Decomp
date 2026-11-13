typedef struct VT_8255E0B0 {
  int pad[0x14 / 4];
  int (*f14)(struct Obj_8255E0B0 *);
} VT_8255E0B0;
typedef struct Obj_8255E0B0 { VT_8255E0B0 *vt; } Obj_8255E0B0;
typedef struct { char pad[0x1b4]; Obj_8255E0B0 *obj; } Sub_8255E0B0;
typedef struct { char pad[0x8c0]; Sub_8255E0B0 *sub; } Self_8255E0B0;
extern void fn_8255DEA0(Self_8255E0B0 *, int, void *);

int fn_8255E0B0(Self_8255E0B0 *self, int unused, void *p)
{
  int id;
  Obj_8255E0B0 *o;
  if (self->sub == 0 || (o = self->sub->obj) == 0) {
    id = -1;
  } else {
    id = o->vt->f14(o);
  }
  if (id == -1) {
    return 0;
  }
  fn_8255DEA0(self, id, p);
  return 1;
}
