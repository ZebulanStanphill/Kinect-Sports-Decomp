struct Q_82F98908;
struct P_82F98908;
typedef struct PVT_82F98908 { void (*dtor)(struct P_82F98908 *, int); } PVT_82F98908;
typedef struct QVT_82F98908 { void *s0, *s4; void (*f8)(struct Q_82F98908 *, void *); } QVT_82F98908;
typedef struct P_82F98908 { PVT_82F98908 *vt; int pad[6]; void *f1c; } P_82F98908;
typedef struct Q_82F98908 { QVT_82F98908 *vt; } Q_82F98908;

int fn_82F98908(P_82F98908 *param_1, Q_82F98908 *param_2)
{
  if (param_1->f1c != 0) {
    param_2->vt->f8(param_2, param_1->f1c);
    param_1->f1c = 0;
  }
  param_1->vt->dtor(param_1, 1);
  param_2->vt->f8(param_2, param_1);
  return 1;
}
