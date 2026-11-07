typedef struct Obj_8287A6B8 {
  int pad0;
  float f4;
  float f8;
  float fc;
  float f10;
  float f14;
  float f18;
  unsigned char b1c;
  float f20;
  float f24;
  unsigned char b28;
  float f2c;
  float f30;
  int sub34;
} Obj_8287A6B8;

extern int fn_822924C0(void *dst, void *src);

Obj_8287A6B8 *fn_8287A6B8(Obj_8287A6B8 *param_1, Obj_8287A6B8 *param_2)
{
  param_1->f4 = param_2->f4;
  param_1->f8 = param_2->f8;
  param_1->fc = param_2->fc;
  param_1->f10 = param_2->f10;
  param_1->f14 = param_2->f14;
  param_1->f18 = param_2->f18;
  param_1->b1c = param_2->b1c;
  param_1->f20 = param_2->f20;
  param_1->f24 = param_2->f24;
  param_1->b28 = param_2->b28;
  param_1->f2c = param_2->f2c;
  param_1->f30 = param_2->f30;
  fn_822924C0(&param_1->sub34, &param_2->sub34);
  return param_1;
}
