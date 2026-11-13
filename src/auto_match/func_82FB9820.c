struct Q_82FB9820;
struct P_82FB9820;
typedef struct PVT_82FB9820 { void (*dtor)(struct P_82FB9820 *, int); } PVT_82FB9820;
typedef struct QVT_82FB9820 { void *s0, *s4; void (*f8)(struct Q_82FB9820 *, void *); } QVT_82FB9820;
typedef struct P_82FB9820 { PVT_82FB9820 *vt; int pad[18]; void *f4c; } P_82FB9820;
typedef struct Q_82FB9820 { QVT_82FB9820 *vt; } Q_82FB9820;

int fn_82FB9820(P_82FB9820 *param_1, Q_82FB9820 *param_2)
{
  if (param_1->f4c != 0) {
    param_2->vt->f8(param_2, param_1->f4c);
    param_1->f4c = 0;
  }
  param_1->vt->dtor(param_1, 1);
  param_2->vt->f8(param_2, param_1);
  return 1;
}
