typedef struct Obj Obj;
typedef struct {
  void (*dtor)(Obj *, int);
} VT;
struct Obj {
  VT *vt;
};

typedef struct {
  void *vt;
  int f4;
  Obj *a;
  Obj *b;
  Obj *c;
} Self;

extern void fn_8265CA20(void *);
extern char lbl_82197048[];

Self *fn_823BD500(Self *param_1, unsigned int param_2)
{
  if (param_1->c != 0) {
    param_1->c->vt->dtor(param_1->c, 1);
  }
  if (param_1->b != 0) {
    param_1->b->vt->dtor(param_1->b, 1);
  }
  if (param_1->a != 0) {
    param_1->a->vt->dtor(param_1->a, 1);
  }
  param_1->vt = lbl_82197048;
  if (param_2 & 1) {
    fn_8265CA20(param_1);
  }
  return param_1;
}
