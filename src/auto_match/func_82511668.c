typedef struct Fn_82511668 Fn_82511668;
typedef struct Impl_82511668 Impl_82511668;
struct Impl_82511668 {
  struct {
    Impl_82511668 *(*copy)(Impl_82511668 *, Fn_82511668 *);
    int pad[2];
    void (*destroy)(Impl_82511668 *, int);
  } *vt;
};
struct Fn_82511668 {
  int pad[4];
  Impl_82511668 *impl;
};
extern void fn_82359C18(Fn_82511668 *);

void fn_82511668(char *param_1, Fn_82511668 *param_2)
{
  Fn_82511668 *self = (Fn_82511668 *)(param_1 + 8);
  if (self != param_2) {
    Impl_82511668 *p = self->impl;
    if (p != 0) {
      p->vt->destroy(p, (Fn_82511668 *)p != self);
      self->impl = 0;
    }
    if (param_2->impl == 0) {
      self->impl = 0;
    } else {
      if ((Fn_82511668 *)param_2->impl == param_2)
        self->impl = param_2->impl->vt->copy(param_2->impl, self);
      else
        self->impl = param_2->impl->vt->copy(param_2->impl, 0);
    }
  }
  fn_82359C18(param_2);
}
