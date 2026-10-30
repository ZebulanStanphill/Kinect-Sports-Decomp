typedef struct { void *ptr; void *rep; } SP_823933E0;
typedef struct {
  void *vt;
  int f4;
  char pad8[0x24];
  SP_823933E0 a;
  SP_823933E0 b;
  SP_823933E0 c;
  SP_823933E0 d;
  SP_823933E0 e;
  SP_823933E0 f;
  SP_823933E0 g;
  SP_823933E0 h;
  SP_823933E0 i;
} Obj_823933E0;
extern unsigned int lbl_821B4858[];
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_82365BD8(void *, void *);

Obj_823933E0 *fn_823933E0(Obj_823933E0 *o, SP_823933E0 *p2, SP_823933E0 *p3, SP_823933E0 *p4, SP_823933E0 *p5, SP_823933E0 *p6, SP_823933E0 *p7, SP_823933E0 *p8, SP_823933E0 *p9, SP_823933E0 *p10)
{
  SP_823933E0 *d;
  void *rep;
  void *ptr;
  o->f4 = 0;
  o->vt = lbl_821B4858;
  d = &o->a;
  d->ptr = 0;
  d->rep = 0;
  rep = p2->rep;
  ptr = p2->ptr;
  if (rep != 0 && fn_8223AAC0(rep)) {
    if (d->rep != 0) fn_822315A0(d->rep);
    d->rep = rep;
    d->ptr = ptr;
  }
  d = &o->b;
  d->ptr = 0;
  d->rep = 0;
  rep = p3->rep;
  ptr = p3->ptr;
  if (rep != 0 && fn_8223AAC0(rep)) {
    if (d->rep != 0) fn_822315A0(d->rep);
    d->rep = rep;
    d->ptr = ptr;
  }
  d = &o->c;
  d->ptr = 0;
  d->rep = 0;
  rep = p4->rep;
  ptr = p4->ptr;
  if (rep != 0 && fn_8223AAC0(rep)) {
    if (d->rep != 0) fn_822315A0(d->rep);
    d->rep = rep;
    d->ptr = ptr;
  }
  fn_82365BD8(&o->d, p5);
  d = &o->e;
  d->ptr = 0;
  d->rep = 0;
  rep = p6->rep;
  ptr = p6->ptr;
  if (rep != 0 && fn_8223AAC0(rep)) {
    if (d->rep != 0) fn_822315A0(d->rep);
    d->rep = rep;
    d->ptr = ptr;
  }
  d = &o->f;
  d->ptr = 0;
  d->rep = 0;
  rep = p7->rep;
  ptr = p7->ptr;
  if (rep != 0 && fn_8223AAC0(rep)) {
    if (d->rep != 0) fn_822315A0(d->rep);
    d->rep = rep;
    d->ptr = ptr;
  }
  fn_82365BD8(&o->g, p8);
  fn_82365BD8(&o->h, p9);
  fn_82365BD8(&o->i, p10);
  if (p2->rep != 0) fn_822315A0(p2->rep);
  if (p3->rep != 0) fn_822315A0(p3->rep);
  if (p4->rep != 0) fn_822315A0(p4->rep);
  if (p5->rep != 0) fn_822315A0(p5->rep);
  if (p6->rep != 0) fn_822315A0(p6->rep);
  if (p7->rep != 0) fn_822315A0(p7->rep);
  if (p8->rep != 0) fn_822315A0(p8->rep);
  if (p9->rep != 0) fn_822315A0(p9->rep);
  if (p10->rep != 0) fn_822315A0(p10->rep);
  return o;
}
