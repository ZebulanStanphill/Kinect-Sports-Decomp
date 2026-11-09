typedef struct W_822F9060 { float *ptr; unsigned rep; } W_822F9060;
extern unsigned char fn_8223AAC0(unsigned);
extern void fn_822315A0(unsigned);

float *fn_822F9060(float *param_1, W_822F9060 *param_2, int *param_3)
{
  float f;
  float *p;
  unsigned rep;
  unsigned r;
  float *e;
  param_1[0] = 0.0f;
  f = param_1[0];
  param_1[1] = f;
  param_1[2] = f;
  param_1[3] = f;
  param_1[4] = f;
  param_1[5] = f;
  r = param_2->rep;
  e = param_2->ptr;
  p = 0;
  rep = 0;
  if (r != 0 && fn_8223AAC0(r) != 0) {
    rep = r;
    p = e;
  }
  param_1[0] = p[*param_3];
  param_1[1] = p[*param_3 + 5];
  param_1[2] = p[*param_3 + 10];
  param_1[3] = p[*param_3 + 15];
  param_1[4] = p[*param_3 + 20];
  param_1[5] = p[*param_3 + 25];
  if (rep != 0) {
    fn_822315A0(rep);
  }
  if (param_2->rep != 0) {
    fn_822315A0(param_2->rep);
  }
  return param_1;
}
