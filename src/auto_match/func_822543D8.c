typedef struct FuncImpl_822543D8 FuncImpl_822543D8;
typedef struct FuncImplVtbl_822543D8 {
  FuncImpl_822543D8 *(*Copy)(FuncImpl_822543D8 *self, void *where);
} FuncImplVtbl_822543D8;
struct FuncImpl_822543D8 { FuncImplVtbl_822543D8 *vt; };
typedef struct Func_822543D8 {
  char space[0x10];
  FuncImpl_822543D8 *impl;
  int pad14;
} Func_822543D8;
typedef struct Weak_822543D8 {
  void *ptr;
  void *rep;
} Weak_822543D8;
typedef struct Obj_822543D8 {
  void *vt;
  char pad4[0x38 - 4];
  Func_822543D8 f1;
  Func_822543D8 f2;
  char s68[8];
  char s70[8];
  char s78[8];
  Weak_822543D8 w80;
  Weak_822543D8 w88;
  Weak_822543D8 w90;
  Weak_822543D8 w98;
} Obj_822543D8;
extern void fn_8223A4D8(Obj_822543D8 *self, Obj_822543D8 *other);
extern unsigned char fn_8223AAC0(void *rep);
extern void fn_822315A0(void *rep);
extern void fn_82365BD8(void *self, void *other);
extern char lbl_82196C58[];
extern char lbl_82197F84[];

static __forceinline void copyFunc(Func_822543D8 *d, Func_822543D8 *s)
{
  if (s->impl == 0)
    d->impl = 0;
  else if (s->impl == (void *)s->space)
    d->impl = s->impl->vt->Copy(s->impl, d->space);
  else
    d->impl = s->impl->vt->Copy(s->impl, 0);
}

static __forceinline void lockWeak(Weak_822543D8 *d, Weak_822543D8 *s)
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

Obj_822543D8 *fn_822543D8(Obj_822543D8 *self, Obj_822543D8 *other)
{
  fn_8223A4D8(self, other);
  self->vt = lbl_82196C58;
  copyFunc(&self->f1, &other->f1);
  copyFunc(&self->f2, &other->f2);
  self->vt = lbl_82197F84;
  fn_82365BD8(self->s68, other->s68);
  fn_82365BD8(self->s70, other->s70);
  fn_82365BD8(self->s78, other->s78);
  lockWeak(&self->w80, &other->w80);
  lockWeak(&self->w88, &other->w88);
  lockWeak(&self->w90, &other->w90);
  lockWeak(&self->w98, &other->w98);
  return self;
}
