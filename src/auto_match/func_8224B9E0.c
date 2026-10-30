typedef struct { void *px; void *rc; } Ref_8224B9E0;
typedef struct {
  void *vt;
  int f4;
  char pad[8];
  Ref_8224B9E0 a;
  Ref_8224B9E0 b;
} Obj_8224B9E0;
extern int lbl_82197A9C[];
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);

Obj_8224B9E0 *fn_8224B9E0(Obj_8224B9E0 *p, Ref_8224B9E0 *s1, Ref_8224B9E0 *s2)
{
  Ref_8224B9E0 *r;
  void *rc;
  void *px;
  p->f4 = 0;
  p->vt = lbl_82197A9C;
  r = &p->a;
  r->px = 0;
  r->rc = 0;
  rc = s1->rc;
  px = s1->px;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    if (r->rc != 0) fn_822315A0(r->rc);
    r->rc = rc;
    r->px = px;
  }
  r = &p->b;
  r->px = 0;
  r->rc = 0;
  rc = s2->rc;
  px = s2->px;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    if (r->rc != 0) fn_822315A0(r->rc);
    r->rc = rc;
    r->px = px;
  }
  if (s1->rc != 0) fn_822315A0(s1->rc);
  if (s2->rc != 0) fn_822315A0(s2->rc);
  return p;
}
