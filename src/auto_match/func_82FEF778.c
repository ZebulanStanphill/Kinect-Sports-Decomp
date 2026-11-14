typedef struct Obj_82FEF778 Obj_82FEF778;
typedef struct ObjVt_82FEF778 {
  void *pad0[3];
  void (*fC)(Obj_82FEF778 *self, int msg, int arg);
  void *pad10[4];
  void (*f20)(Obj_82FEF778 *self, int msg, int arg);
} ObjVt_82FEF778;
struct Obj_82FEF778 {
  ObjVt_82FEF778 *vt;
  char pad4[0xd5];
  unsigned char flags;
};
void fn_82FEF778(Obj_82FEF778 *self, int msg, int arg)
{
  switch (msg) {
  case 1:
    return;
  case 2:
    break;
  case 3:
    {
      void (*f)(Obj_82FEF778 *, int, int) = self->vt->f20;
      self->flags |= 0x20;
      f(self, msg, arg);
    }
    return;
  case 4:
    if (arg != 1) {
      return;
    }
    self->flags = (self->flags & 0xdb) | 4;
    break;
  case 5:
    self->vt->fC(self, msg, arg);
    return;
  }
}
