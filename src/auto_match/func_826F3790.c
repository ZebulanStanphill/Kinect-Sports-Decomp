extern int lbl_8200DB34;
typedef struct Vt_826F3790 { int p0, p1, p2, p3; unsigned (*f10)(void *, void *, int); unsigned (*f14)(void *); } Vt_826F3790;
typedef struct Itf_826F3790 { Vt_826F3790 *vt; } Itf_826F3790;
typedef struct A_826F3790 { Vt_826F3790 *vt; int p4, p8; int itf; } A_826F3790;
typedef struct V16_826F3790 { int a, b, c, d; } V16_826F3790;
typedef struct Obj_826F3790 { int vt; char pad[0x18]; V16_826F3790 v; int w; } Obj_826F3790;
extern void fn_826E4D70(void *, unsigned, unsigned);
extern void fn_8267C498(unsigned);
Obj_826F3790 *fn_826F3790(Obj_826F3790 *p, A_826F3790 *a, int *p3, V16_826F3790 *p4, int p5)
{
  int itf = a->itf;
  unsigned r, s; int a1, b, c, d;
  if (itf != 0) r = ((Itf_826F3790 *)itf)->vt->f10((void *)itf, p4, p5);
  else r = 0;
  s = a->vt->f14(a);
  fn_826E4D70(p, r, s);
  if (r != 0) fn_8267C498(r);
  p->vt = (int)&lbl_8200DB34;
  d = p4->d; c = p4->c; b = p4->b; a1 = p4->a;
  p->v.a = a1; p->v.b = b; p->v.c = c; p->v.d = d;
  p->w = *p3;
  return p;
}
