typedef struct Res_826AB790 { int f0; int f4; unsigned int refs; } Res_826AB790;
typedef struct Ref_826AB790 { Res_826AB790 *obj; int f4; } Ref_826AB790;
typedef struct RefSrc_826AB790 { Res_826AB790 *obj; void *owner; unsigned char flag; } RefSrc_826AB790;
typedef struct Sec_826AB790 { void *vt; Res_826AB790 *res; } Sec_826AB790;
typedef struct Obj_826AB790 {
  void *vt;
  int f4[3];
  Sec_826AB790 sec;
  int f18[6];
  Res_826AB790 *res;
  int f34;
  int f38;
  Ref_826AB790 ref;
  unsigned char f44;
} Obj_826AB790;

extern void fn_826C0910(Obj_826AB790 *p, int a);
extern void fn_826C3378(Ref_826AB790 *r, void *owner, int flag);
extern void fn_826824B0(Res_826AB790 *r);
extern void *lbl_82007318;
extern void *lbl_82007340;
static void Sec_init(Sec_826AB790 *s) { s->vt = &lbl_82007340; }

Obj_826AB790 *fn_826AB790(Obj_826AB790 *p, Res_826AB790 *res, int a3, RefSrc_826AB790 *src)
{
  fn_826C0910(p, res->f4);
  p->vt = &lbl_82007318;
  Sec_init(&p->sec);
  res->refs = (res->refs + 1) & 0x8fffffff;
  p->res = res;
  p->f34 = 0;
  p->f38 = a3;
  p->f44 = 0;
  { Ref_826AB790 *r = &p->ref; Res_826AB790 *o = src->obj;
    r->obj = o;
    if (o != 0) o->refs = (o->refs + 1) & 0x8fffffff;
    r->f4 = 0;
    if (src->owner != 0) fn_826C3378(r, src->owner, src->flag & 1); }
  res->refs = (res->refs + 1) & 0x8fffffff;
  if (p->sec.res != 0) fn_826824B0(p->sec.res);
  p->sec.res = res;
  return p;
}
