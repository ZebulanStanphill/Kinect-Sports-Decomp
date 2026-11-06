typedef struct FuncImpl_82256C80 FuncImpl_82256C80;
typedef struct FuncImplVtbl_82256C80 {
  FuncImpl_82256C80 *(*Copy)(FuncImpl_82256C80 *self, void *where);
} FuncImplVtbl_82256C80;
struct FuncImpl_82256C80 { FuncImplVtbl_82256C80 *vt; };
typedef struct Func_82256C80 {
  char space[0x10];
  FuncImpl_82256C80 *impl;
  int pad14;
} Func_82256C80;
typedef struct Weak_82256C80 {
  void *ptr;
  void *rep;
} Weak_82256C80;
typedef struct Obj_82256C80 {
  void *vt;
  char pad4[0x38 - 4];
  Func_82256C80 f1;
  Func_82256C80 f2;
  char s68[8];
  char s70[8];
  Weak_82256C80 w78;
  Weak_82256C80 w80;
  Weak_82256C80 w88;
  Weak_82256C80 w90;
  char s98[8];
} Obj_82256C80;
extern void fn_8223A4D8(Obj_82256C80 *self, Obj_82256C80 *other);
extern unsigned char fn_8223AAC0(void *rep);
extern void fn_822315A0(void *rep);
extern void fn_82365BD8(void *self, void *other);
extern char lbl_82196C58[];
extern char lbl_82198198[];

static __forceinline void copyFunc(Func_82256C80 *d, Func_82256C80 *s)
{
  if (s->impl == 0)
    d->impl = 0;
  else if (s->impl == (void *)s->space)
    d->impl = s->impl->vt->Copy(s->impl, d->space);
  else
    d->impl = s->impl->vt->Copy(s->impl, 0);
}

static __forceinline void lockWeak(Weak_82256C80 *d, Weak_82256C80 *s)
{
  void *rep;
  void *ptr;
  d->ptr = 0;
  d->rep = 0;
  rep = s->rep;
  ptr = s->ptr;
  if (rep != 0 && fn_8223AAC0(rep)) {
    if (d->rep != 0)
      fn_822315A0(d->rep);
    d->rep = rep;
    d->ptr = ptr;
  }
}

Obj_82256C80 *fn_82256C80(Obj_82256C80 *self, Obj_82256C80 *other)
{
  fn_8223A4D8(self, other);
  self->vt = lbl_82196C58;
  copyFunc(&self->f1, &other->f1);
  copyFunc(&self->f2, &other->f2);
  self->vt = lbl_82198198;
  fn_82365BD8(self->s68, other->s68);
  fn_82365BD8(self->s70, other->s70);
  lockWeak(&self->w78, &other->w78);
  lockWeak(&self->w80, &other->w80);
  lockWeak(&self->w88, &other->w88);
  lockWeak(&self->w90, &other->w90);
  fn_82365BD8(self->s98, other->s98);
  return self;
}
