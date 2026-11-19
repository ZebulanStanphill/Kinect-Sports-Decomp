typedef struct Sub_82603828 { int pad[2]; int f8; } Sub_82603828;
typedef struct Obj_82603828 { void *vt; unsigned short f4; char pad[0x13a]; Sub_82603828 *f140; } Obj_82603828;
extern char lbl_821CA858[];
extern void fn_82D82E28(int, Sub_82603828 *);
extern void fn_82CE4118(Sub_82603828 *);
extern int *fn_82CE5410();
extern void fn_82D95638(Obj_82603828 *);

Obj_82603828 *fn_82603828(Obj_82603828 *self, unsigned int flags)
{
  int *iVar1;
  Sub_82603828 *s;
  self->vt = lbl_821CA858;
  s = self->f140;
  if (s != 0) {
    if (s->f8 != 0) {
      fn_82D82E28(s->f8, s);
    }
    fn_82CE4118(self->f140);
  }
  self->f140 = 0;
  fn_82D95638(self);
  if ((flags & 1) != 0) {
    iVar1 = fn_82CE5410();
    (*(void (**)(int *, Obj_82603828 *, int))(**(int **)(iVar1 + 4) + 8))(*(int **)(iVar1 + 4), self, self->f4);
  }
  return self;
}
