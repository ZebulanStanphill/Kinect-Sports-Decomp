void fn_82DE55B8(const float *r, float m, float *I)
{
  float *p;
  p = &I[0]; *p -= (r[1] * r[1] + r[2] * r[2]) * m;
  p = &I[5]; *p -= (r[0] * r[0] + r[2] * r[2]) * m;
  p = &I[10]; *p -= (r[0] * r[0] + r[1] * r[1]) * m;
  I[1] += r[0] * m * r[1];
  I[4] = I[1];
  I[6] += m * r[2] * r[1];
  I[9] = I[6];
  I[8] += r[0] * m * r[2];
  I[2] = I[8];
}
