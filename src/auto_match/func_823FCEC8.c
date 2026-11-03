typedef struct SP_823FCEC8 {
  int px;
  unsigned rep;
} SP_823FCEC8;

typedef struct Obj_823FCEC8 {
  int *vt;
  int f4;
  char pad[0x2c - 8];
  SP_823FCEC8 m[7];
  SP_823FCEC8 w1;
  SP_823FCEC8 w2;
} Obj_823FCEC8;

extern void fn_822315A0(unsigned);
extern unsigned char fn_8223AAC0(unsigned);
extern void fn_82365BD8(SP_823FCEC8 *, SP_823FCEC8 *);
extern int lbl_821B7294[];

Obj_823FCEC8 *fn_823FCEC8(Obj_823FCEC8 *self, SP_823FCEC8 *a2, SP_823FCEC8 *a3, SP_823FCEC8 *a4,
                          SP_823FCEC8 *a5, SP_823FCEC8 *a6, SP_823FCEC8 *a7, SP_823FCEC8 *a8,
                          SP_823FCEC8 *a9, SP_823FCEC8 *a10)
{
  SP_823FCEC8 *w;
  unsigned r;
  int px;
  self->f4 = 0;
  self->vt = lbl_821B7294;
  fn_82365BD8(&self->m[0], a2);
  fn_82365BD8(&self->m[1], a3);
  fn_82365BD8(&self->m[2], a4);
  fn_82365BD8(&self->m[3], a5);
  fn_82365BD8(&self->m[4], a6);
  fn_82365BD8(&self->m[5], a7);
  fn_82365BD8(&self->m[6], a8);
  w = &self->w1;
  w->px = 0;
  w->rep = 0;
  r = a9->rep;
  px = a9->px;
  if (r != 0 && fn_8223AAC0(r) != 0) {
    if (w->rep != 0)
      fn_822315A0(w->rep);
    w->rep = r;
    w->px = px;
  }
  w = &self->w2;
  w->px = 0;
  w->rep = 0;
  r = a10->rep;
  px = a10->px;
  if (r != 0 && fn_8223AAC0(r) != 0) {
    if (w->rep != 0)
      fn_822315A0(w->rep);
    w->rep = r;
    w->px = px;
  }
  if (a2->rep != 0) fn_822315A0(a2->rep);
  if (a3->rep != 0) fn_822315A0(a3->rep);
  if (a4->rep != 0) fn_822315A0(a4->rep);
  if (a5->rep != 0) fn_822315A0(a5->rep);
  if (a6->rep != 0) fn_822315A0(a6->rep);
  if (a7->rep != 0) fn_822315A0(a7->rep);
  if (a8->rep != 0) fn_822315A0(a8->rep);
  if (a9->rep != 0) fn_822315A0(a9->rep);
  if (a10->rep != 0) fn_822315A0(a10->rep);
  return self;
}
