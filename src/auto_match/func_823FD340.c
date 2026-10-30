typedef struct { void *px; void *rc; } Ref_823FD340;
typedef struct {
  void *vt;
  int f4;
  char pad[8];
  Ref_823FD340 a;
  Ref_823FD340 b;
} Obj_823FD340;
extern int lbl_821B72F4[];
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);

Obj_823FD340 *fn_823FD340(Obj_823FD340 *p, Ref_823FD340 *s1, Ref_823FD340 *s2)
{
  Ref_823FD340 *r;
  void *rc;
  void *px;
  p->f4 = 0;
  p->vt = lbl_821B72F4;
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
