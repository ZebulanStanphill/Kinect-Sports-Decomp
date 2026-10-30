typedef struct { char *beg; char *end; char *cap; } Vec_8300BC78;
typedef struct {
  void *vt0; int pad[6]; void *vt1; int pad2[10]; Vec_8300BC78 vec;
} Obj_8300BC78;
extern void fn_82FA5190(void *, void *);
extern void fn_83007708(Obj_8300BC78 *);
extern char lbl_8217C078[];
extern char lbl_8217C940[];
extern void *lbl_831BC768;

static void Destroy(Vec_8300BC78 *v)
{
  if (v->beg != 0) {
    v->end = v->beg;
    fn_82FA5190(lbl_831BC768, v->beg);
    v->beg = 0;
    v->end = 0;
    v->cap = 0;
  }
}
void fn_8300BC78(Obj_8300BC78 *o)
{
  o->vt0 = lbl_8217C078;
  o->vt1 = lbl_8217C940;
  Destroy(&o->vec);
  fn_83007708(o);
}
