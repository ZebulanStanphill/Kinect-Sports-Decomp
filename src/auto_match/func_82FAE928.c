typedef struct { char *beg; char *end; char *cap; } Vec_82FAE928;
typedef struct {
  void *vt0; int pad[6]; void *vt1; int pad2[32]; Vec_82FAE928 vec;
} Obj_82FAE928;
extern void fn_82FA5190(void *, void *);
extern void fn_82FAFDD8(Obj_82FAE928 *);
extern char lbl_8216CD20[];
extern char lbl_8217C940[];
extern void *lbl_831BC768;

static void Destroy(Vec_82FAE928 *v)
{
  if (v->beg != 0) {
    v->end = v->beg;
    fn_82FA5190(lbl_831BC768, v->beg);
    v->beg = 0;
    v->end = 0;
    v->cap = 0;
  }
}
void fn_82FAE928(Obj_82FAE928 *o)
{
  o->vt0 = lbl_8216CD20;
  o->vt1 = lbl_8217C940;
  Destroy(&o->vec);
  fn_82FAFDD8(o);
}
