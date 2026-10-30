extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern char lbl_82197A84[];
typedef struct SP_8224B7A0 { void *first; void *second; } SP;
typedef struct Obj_8224B7A0 { void *vt; int f4; char pad[0x18]; SP a, b, c, d, e, f; } Obj;
static __forceinline void Assign(SP *dst, SP *src)
{
  void *rc, *p;
  dst->first = 0;
  dst->second = 0;
  rc = src->second;
  p = src->first;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    if (dst->second != 0) fn_822315A0(dst->second);
    dst->second = rc;
    dst->first = p;
  }
}
Obj * fn_8224B7A0(Obj *o, SP *a, SP *b, SP *c, SP *d, SP *e, SP *f)
{
  o->f4 = 0;
  o->vt = lbl_82197A84;
  Assign(&o->a, a);
  Assign(&o->b, b);
  Assign(&o->c, c);
  Assign(&o->d, d);
  Assign(&o->e, e);
  Assign(&o->f, f);
  if (a->second != 0) fn_822315A0(a->second);
  if (b->second != 0) fn_822315A0(b->second);
  if (c->second != 0) fn_822315A0(c->second);
  if (d->second != 0) fn_822315A0(d->second);
  if (e->second != 0) fn_822315A0(e->second);
  if (f->second != 0) fn_822315A0(f->second);
  return o;
}
