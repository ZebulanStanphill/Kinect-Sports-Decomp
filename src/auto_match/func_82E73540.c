extern int lbl_8215EF68;
typedef struct Itf_82E73540 { void **vt; } Itf_82E73540;
typedef struct Sub_82E73540 { unsigned a, b; Itf_82E73540 *itf; unsigned c; } Sub_82E73540;
typedef struct Obj_82E73540 {
  void *vt; int p4; int f8; int pc;
  unsigned __int64 f10; unsigned __int64 f18;
  unsigned short f20; unsigned char f22; int f24; int f28; Sub_82E73540 s;
} Obj_82E73540;
Obj_82E73540 *fn_82E73540(Obj_82E73540 *p, Itf_82E73540 *itf, unsigned __int64 a, unsigned __int64 b,
                          unsigned short sh, unsigned char c, int d)
{
  Sub_82E73540 *s = &p->s;
  p->f18 = b;
  s->a = 0;
  s->b = 0;
  s->c = 0;
  p->s.itf = itf;
  p->f10 = a;
  p->f20 = sh;
  p->f8 = 1;
  p->f22 = c;
  p->f24 = d;
  p->f28 = 1;
  p->vt = &lbl_8215EF68;

  ((void (*)(Itf_82E73540 *))itf->vt[1])(itf);
  ((void (*)(Itf_82E73540 *, Sub_82E73540 *))s->itf->vt[0x2d])(s->itf, s);
  s->b = s->a;
  return p;
}
