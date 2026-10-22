typedef unsigned int uint;

int fn_827B5528(uint *param_1, uint param_2, uint param_3, uint *param_4, uint *param_5)
{
  uint y;

  if ((param_1[2] + param_2 <= param_1[0]) && (param_1[3] + param_3 <= param_1[1])) {
    *param_4 = param_1[2];
    *param_5 = param_1[3];
    param_1[2] = param_2 + param_1[2];
    if (param_3 > param_1[4]) {
      param_1[4] = param_3;
    }
    return 1;
  }
  y = param_1[3] + param_1[4];
  param_1[3] = y;
  if (y + param_3 <= param_1[1]) {
    *param_4 = 0;
    *param_5 = param_1[3];
    param_1[2] = param_2;
    param_1[4] = param_3;
    return 1;
  }
  return 0;
}
