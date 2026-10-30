struct Fn_82329730;
typedef struct Impl_82329730 { struct IVT_82329730 *vt; } Impl_82329730;
typedef struct IVT_82329730 {
  Impl_82329730 *(*move)(Impl_82329730 *, struct Fn_82329730 *);
  void *s1; void *s2;
  void (*del)(Impl_82329730 *, unsigned char);
} IVT_82329730;
typedef struct Fn_82329730 { char pad[0x10]; Impl_82329730 *impl; } Fn_82329730;
typedef struct Obj_82329730 { char pad[0x50]; Fn_82329730 f; } Obj_82329730;

void fn_82329730(Obj_82329730 *param_1, Fn_82329730 *param_2)
{
  Fn_82329730 *self = &param_1->f;
  Impl_82329730 *i;
  if (self != param_2) {
    i = self->impl;
    if (i != 0) {
      i->vt->del(i, (unsigned char)((Fn_82329730 *)i != self));
      self->impl = 0;
    }
    i = param_2->impl;
    if (i == 0) {
      self->impl = 0;
    } else if ((Fn_82329730 *)i == param_2) {
      self->impl = i->vt->move(i, self);
    } else {
      self->impl = i;
      param_2->impl = 0;
    }
  }
}
