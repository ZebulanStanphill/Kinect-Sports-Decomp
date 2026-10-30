typedef struct Pair_823FD088 { void *p; void *rc; } Pair_823FD088;
typedef struct Obj_823FD088 {
  void *vt; void *f4; int pad[5]; Pair_823FD088 f1c; Pair_823FD088 f24; Pair_823FD088 f2c;
  Pair_823FD088 f34; Pair_823FD088 f3c;
} Obj_823FD088;
extern char lbl_821B72AC[];
extern void fn_82365BD8(Pair_823FD088 *, Pair_823FD088 *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_822315A0(void *);

static void Lock(Pair_823FD088 *d, Pair_823FD088 *s)
{
  void *rc = s->rc;
  void *p = s->p;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    if (d->rc != 0) {
      fn_822315A0(d->rc);
    }
    d->rc = rc;
    d->p = p;
  }
}

Obj_823FD088 *fn_823FD088(Obj_823FD088 *o, Pair_823FD088 *a, Pair_823FD088 *b, Pair_823FD088 *c, Pair_823FD088 *d, Pair_823FD088 *e)
{
  o->f4 = 0;
  o->vt = lbl_821B72AC;
  fn_82365BD8(&o->f1c, a);
  o->f24.p = 0;
  o->f24.rc = 0;
  Lock(&o->f24, b);
  fn_82365BD8(&o->f2c, c);
  fn_82365BD8(&o->f34, d);
  { Pair_823FD088 *q = &o->f3c; q->rc = 0; q->p = 0; }
  Lock(&o->f3c, e);
  if (a->rc != 0) fn_822315A0(a->rc);
  if (b->rc != 0) fn_822315A0(b->rc);
  if (c->rc != 0) fn_822315A0(c->rc);
  if (d->rc != 0) fn_822315A0(d->rc);
  if (e->rc != 0) fn_822315A0(e->rc);
  return o;
}
