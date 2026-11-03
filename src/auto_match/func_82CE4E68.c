typedef union { float f; unsigned u; } FU_82CE4E68;

void fn_82CE4E68(unsigned char *param_1, float *param_2, int param_3)
{
  int i;
  FU_82CE4E68 c;
  float *p;

  p = param_2;
  i = 0;
  if (param_3 > 0) {
    do {
      c.f = *p;
      if ((c.u & 0x7f800000) == 0x7f800000) {
        *param_1 = 0;
        return;
      }
      i++;
      p++;
    } while (i < param_3);
  }
  *param_1 = 1;
}
