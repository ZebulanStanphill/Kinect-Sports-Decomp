typedef struct Fn_823000E0 Fn_823000E0;
typedef struct Impl_823000E0 Impl_823000E0;
struct Impl_823000E0 {
  struct {
    Impl_823000E0 *(*copy)(Impl_823000E0 *, Fn_823000E0 *);
    int pad[2];
    void (*destroy)(Impl_823000E0 *, int);
  } *vt;
};
struct Fn_823000E0 {
  int pad[4];
  Impl_823000E0 *impl;
};
extern void fn_82359C18(Fn_823000E0 *);

void fn_823000E0(char *param_1, Fn_823000E0 *param_2)
{
  Fn_823000E0 *self = (Fn_823000E0 *)(param_1 + 0x510);
  if (self != param_2) {
    Impl_823000E0 *p = self->impl;
    if (p != 0) {
      p->vt->destroy(p, (Fn_823000E0 *)p != self);
      self->impl = 0;
    }
    if (param_2->impl == 0) {
      self->impl = 0;
    } else {
      if ((Fn_823000E0 *)param_2->impl == param_2)
        self->impl = param_2->impl->vt->copy(param_2->impl, self);
      else
        self->impl = param_2->impl->vt->copy(param_2->impl, 0);
    }
  }
  fn_82359C18(param_2);
}
