typedef struct { char pad[0x1c]; unsigned char f1c; unsigned char f1d; } Cfg_827FEF90;
typedef struct { char pad[0x30]; Cfg_827FEF90 *cfg; } In_827FEF90;
typedef struct { In_827FEF90 *in; } Obj_827FEF90;

float fn_827FEF90(Obj_827FEF90 *param_1, float *param_2)
{
  float *p = param_2;
  if (param_1->in->cfg->f1c != 0) {
    p = p + 1;
  }
  if (param_1->in->cfg->f1d != 0) {
    p = p + 1;
  }
  return *p;
}
