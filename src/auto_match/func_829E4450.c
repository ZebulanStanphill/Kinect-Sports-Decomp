typedef struct Obj_829E4450 {
  char pad[0xfc];
  int f_fc;
  float f_100;
} Obj_829E4450;

extern int fn_829E3EC8(Obj_829E4450 *, int, float *);

int fn_829E4450(Obj_829E4450 *param_1, int param_2, float *param_3)
{
  float v;
  int hr;

  if (param_3 == 0) {
    return 0x80070057;
  }
  if (param_2 != param_1->f_fc) {
    hr = fn_829E3EC8(param_1, param_2, &v);
    if (hr < 0) {
      return hr;
    }
  } else {
    v = param_1->f_100;
  }
  *param_3 = v;
  return 0;
}
