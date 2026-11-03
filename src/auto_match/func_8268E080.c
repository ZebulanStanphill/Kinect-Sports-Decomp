typedef struct Obj_8268E080 Obj_8268E080;
typedef struct VT_8268E080 {
  void *f0, *f4, *f8, *fc;
  int (*f10)(Obj_8268E080 *);
  void (*f14)(Obj_8268E080 *, int);
  void (*f18)(Obj_8268E080 *, int, int);
} VT_8268E080;
struct Obj_8268E080 { VT_8268E080 *vt; };

extern int fn_8268DB10(int, int);
extern int fn_8268DB68(int, int, int);
extern unsigned char *fn_8268E008(int);
extern Obj_8268E080 *lbl_83155300[];

int fn_8268E080(int param_1, int param_2, int param_3)
{
  Obj_8268E080 *o;
  int r;
  o = lbl_83155300[*fn_8268E008(param_2)];
  r = fn_8268DB10(param_1, param_2);
  if (r == 0) {
    r = fn_8268DB68(param_1, param_2, o->vt->f10(o));
    if (r == 0)
      return 0;
    o->vt->f14(o, r);
  }
  o->vt->f18(o, r, param_3);
  return 1;
}
