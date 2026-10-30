extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern char lbl_82197A6C[];
typedef struct SP_8224B5B8 { void *first; void *second; } SP;
typedef struct Obj_8224B5B8 { void *vt; int f4; char pad[0x14]; SP a, b, c, d, e; } Obj;
static __inline void Assign(SP *dst, SP *src)
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
Obj * fn_8224B5B8(Obj *o, SP *a, SP *b, SP *c, SP *d, SP *e)
{
  o->f4 = 0;
  o->vt = lbl_82197A6C;
  Assign(&o->a, a);
  Assign(&o->b, b);
  Assign(&o->c, c);
  Assign(&o->d, d);
  Assign(&o->e, e);
  if (a->second != 0) fn_822315A0(a->second);
  if (b->second != 0) fn_822315A0(b->second);
  if (c->second != 0) fn_822315A0(c->second);
  if (d->second != 0) fn_822315A0(d->second);
  if (e->second != 0) fn_822315A0(e->second);
  return o;
}
