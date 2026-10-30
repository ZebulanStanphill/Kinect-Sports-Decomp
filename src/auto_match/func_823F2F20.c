struct Fn_823F2F20;
typedef struct Impl_823F2F20 { struct IVT_823F2F20 *vt; } Impl_823F2F20;
typedef struct IVT_823F2F20 {
  Impl_823F2F20 *(*move)(Impl_823F2F20 *, struct Fn_823F2F20 *);
  void *s1; void *s2;
  void (*del)(Impl_823F2F20 *, unsigned char);
} IVT_823F2F20;
typedef struct Fn_823F2F20 { char pad[0x10]; Impl_823F2F20 *impl; } Fn_823F2F20;
typedef struct Obj_823F2F20 { char pad[0x38]; Fn_823F2F20 f; } Obj_823F2F20;

void fn_823F2F20(Obj_823F2F20 *param_1, Fn_823F2F20 *param_2)
{
  Fn_823F2F20 *self = &param_1->f;
  Impl_823F2F20 *i;
  if (self != param_2) {
    i = self->impl;
    if (i != 0) {
      i->vt->del(i, (unsigned char)((Fn_823F2F20 *)i != self));
      self->impl = 0;
    }
    i = param_2->impl;
    if (i == 0) {
      self->impl = 0;
    } else if ((Fn_823F2F20 *)i == param_2) {
      self->impl = i->vt->move(i, self);
    } else {
      self->impl = i;
      param_2->impl = 0;
    }
  }
}
