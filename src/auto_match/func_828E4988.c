typedef struct { void *s0, *s1, *s2; unsigned int (*m)(void *); } VT_828E4988;
typedef struct { VT_828E4988 *vt; int f4; } Obj_828E4988;
typedef struct { Obj_828E4988 *obj; int arg; } Arg_828E4988;
typedef struct { void *vt; int f4; int f8; int fc; int f10; int f14; } Self_828E4988;
extern void *lbl_8202725C;
extern void fn_82517978(void *, Obj_828E4988 *, int, int);
extern void fn_828A2240(void *, void *, void *);
extern void fn_828E3548(void *, unsigned int, void *);

Self_828E4988 *fn_828E4988(Self_828E4988 *self, Arg_828E4988 *a)
{
  char t[4];
  int *p = &self->f4;
  int z;
  unsigned int n;
  *p = a->obj->f4;
  self->f8 = 0;
  self->fc = 0;
  self->vt = &lbl_8202725C;
  self->f10 = 0;
  self->f14 = 0;
  fn_82517978(&self->f10, a->obj, a->arg, 0);
  fn_828A2240((char *)self + 0x18, t, t);
  z = 0;
  n = a->obj->vt->m(a->obj);
  fn_828E3548((char *)self + 0x28, n, &z);
  return self;
}
