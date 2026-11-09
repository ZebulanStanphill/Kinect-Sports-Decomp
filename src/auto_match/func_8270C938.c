typedef struct Src_8270C938 Src_8270C938;
typedef struct SrcVt_8270C938 {
  void *s[4];
  int (*f10)(Src_8270C938 *);
  void *s2;
  int (*f18)(Src_8270C938 *);
} SrcVt_8270C938;
struct Src_8270C938 { SrcVt_8270C938 *vt; };
typedef struct Obj_8270C938 {
  void *vt;
  int f4;
  Src_8270C938 *src;
  int fc;
  int mode;
  int extra;
} Obj_8270C938;

int fn_8270C938(Obj_8270C938 *o)
{
  int a;
  int b;

  a = o->src->vt->f18(o->src);
  if (a != -1 && o->mode == 2) {
    b = o->src->vt->f10(o->src) + o->extra;
    if (b > a) {
      a = b;
    }
  }
  return a;
}
