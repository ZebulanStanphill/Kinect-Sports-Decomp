void fn_82F11098(short *param_1, int param_2, int n)
{
  short a, b, c, d;
  int e;
  unsigned u;
  int i;

  u = 1;
  for (i = 0; i < n; i++) {
    b = param_1[-1];
    c = param_1[0];
    d = param_1[1];
    a = param_1[-2];
    param_1[-2] = (short)((int)((a * 8 - a) + d + u + 3) >> 3);
    param_1[-1] = (short)((int)(((b * 8 - b) - a) - u + c + d + 4) >> 3);
    param_1[0] = (short)((int)(((c * 8 - c) - d) + b + a + u + 3) >> 3);
    e = (d * 8 - d) - u + a;
    u = u ^ 1;
    param_1[1] = (short)(e + 4 >> 3);
    param_1 = param_1 + param_2;
  }
}
