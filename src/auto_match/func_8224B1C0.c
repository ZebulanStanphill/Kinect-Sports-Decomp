typedef struct SP_8224B1C0 { void *ptr; void *rc; } SP_8224B1C0;
typedef struct Obj_8224B1C0 { void *vt; int uses; int weaks; char body[1]; } Obj_8224B1C0;
extern unsigned char fn_8223AAC0(void *);
extern void fn_8224B5B8(void *, SP_8224B1C0 *, SP_8224B1C0 *, SP_8224B1C0 *, SP_8224B1C0 *, SP_8224B1C0 *);
extern unsigned int lbl_821AD588;

static void mk_(SP_8224B1C0 *dst, SP_8224B1C0 *src)
{
  void *rc = src->rc;
  void *ptr = src->ptr;
  dst->ptr = 0;
  dst->rc = 0;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    dst->rc = rc;
    dst->ptr = ptr;
  }
}

Obj_8224B1C0 *fn_8224B1C0(Obj_8224B1C0 *o, SP_8224B1C0 *a2, SP_8224B1C0 *a3, SP_8224B1C0 *a4, SP_8224B1C0 *a5, SP_8224B1C0 *a6)
{
  struct { SP_8224B1C0 p6, p5, p4, p3, p2; } L;
  o->uses = 1;
  o->vt = &lbl_821AD588;
  o->weaks = 1;
  if (o->body != 0) {
    mk_(&L.p6, a6);
    mk_(&L.p5, a5);
    mk_(&L.p4, a4);
    mk_(&L.p3, a3);
    mk_(&L.p2, a2);
    fn_8224B5B8(o->body, &L.p2, &L.p3, &L.p4, &L.p5, &L.p6);
  }
  return o;
}
