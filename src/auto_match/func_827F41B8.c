typedef struct {
  void *vtbl;
  void *name;
  int f8;
  int fc;
  int f10;
  int f14;
  int f18;
  short f1c;
  short f1e;
} Obj;

extern void fn_827F3980(Obj *o, int a, int b);
extern char lbl_8201DD34[];
extern char lbl_83156AB4[];

Obj *fn_827F41B8(Obj *param_1, int *param_2, void *param_3, int param_4, int param_5)
{
  param_1->vtbl = lbl_8201DD34;
  param_1->name = param_3 ? param_3 : lbl_83156AB4;
  param_1->f8 = param_2[2];
  param_1->fc = 0;
  param_1->f10 = 0;
  param_1->f14 = 0;
  param_1->f18 = 0;
  param_1->f1c = 0;
  param_1->f1e = 0;
  fn_827F3980(param_1, param_4, param_5);
  return param_1;
}
