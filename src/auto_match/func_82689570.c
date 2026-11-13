extern int fn_82670230(int);


typedef struct VT_82689570 { int pad[12]; void (*f30)(void *, void *); } VT_82689570;
typedef struct Inner_82689570 { VT_82689570 *vt; } Inner_82689570;
typedef struct Obj_82689570 { int pad; int inner; } Obj_82689570;

static Obj_82689570 *sel_(int c, Obj_82689570 *p) { return c ? p : 0; }

void fn_82689570(Obj_82689570 *param_1, void *param_2, int param_3)
{
  int p = param_1->inner;
  if (p != 0 && param_3 == 2) {
    ((Inner_82689570 *)p)->vt->f30((void *)p, sel_((unsigned)param_1 - 8 != 0, param_1));
    if ((unsigned)param_1->inner != 0) {
      fn_82670230(param_1->inner);
    }
    param_1->inner = 0;
  }
}
