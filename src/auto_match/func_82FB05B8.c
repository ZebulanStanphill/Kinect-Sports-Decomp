typedef struct { char *beg; char *end; char *cap; } Vec_82FB05B8;
typedef struct {
  void *vt0; int pad[6]; void *vt1; int pad2[23]; Vec_82FB05B8 vec;
} Obj_82FB05B8;
extern void fn_82FA5190(void *, void *);
extern void fn_83002148(Obj_82FB05B8 *);
extern char lbl_8216CEA0[];
extern char lbl_8217C940[];
extern void *lbl_831BC768;

static void Destroy(Vec_82FB05B8 *v)
{
  if (v->beg != 0) {
    v->end = v->beg;
    fn_82FA5190(lbl_831BC768, v->beg);
    v->beg = 0;
    v->end = 0;
    v->cap = 0;
  }
}
void fn_82FB05B8(Obj_82FB05B8 *o)
{
  o->vt0 = lbl_8216CEA0;
  o->vt1 = lbl_8217C940;
  Destroy(&o->vec);
  fn_83002148(o);
}
