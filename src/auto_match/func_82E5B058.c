extern int fn_82E58050();
extern int fn_82E5AEC8();
typedef struct { unsigned int a, b, c, d; } Q16;
extern const Q16 lbl_820F8F08;
extern char lbl_82154D88[];
extern char lbl_8215FDD0[];

typedef struct {
  void *vt0;
  void *vt4;
  int f8;
  int fc;
  Q16 f10;
  int f20[10];
  __int64 f48;
  __int64 f50;
  int f58, f5c, f60, f64, f68, f6c, f70, f74;
  short f78;
  short f7a;
  int f7c;
  __int64 f80;
  int f88;
  int f8c[0x1b];
  int ff8;
} Obj;

Obj *fn_82E5B058(Obj *param_1)
{
  fn_82E58050(param_1);
  param_1->vt0 = lbl_82154D88;
  param_1->vt4 = lbl_8215FDD0;
  fn_82E5AEC8(param_1->f8c);
  fn_82E5AEC8(&param_1->ff8);
  param_1->f48 = 0;
  param_1->f50 = 0;
  param_1->f58 = 0;
  param_1->f5c = 0;
  param_1->f60 = 0;
  param_1->f64 = 0;
  param_1->f68 = 0;
  param_1->f6c = 0;
  param_1->f70 = 0;
  param_1->f74 = 0;
  param_1->f10 = lbl_820F8F08;
  param_1->f78 = 0;
  param_1->f7a = 0;
  param_1->f80 = 0;
  param_1->f88 = 0;
  return param_1;
}
