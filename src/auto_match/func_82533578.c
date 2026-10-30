extern float lbl_821CC160;

static float side_(float *a, float *b, float *c)
{
  return (c[0] - a[0]) * (b[1] - a[1]) - (b[0] - a[0]) * (c[1] - a[1]);
}

int fn_82533578(float *p1, float *p2, float *p3, float *p4)
{
  float s = side_(p1, p2, p4);
  if (side_(p2, p3, p4) * s < lbl_821CC160) {
    return 0;
  }
  if (side_(p3, p1, p4) * s < lbl_821CC160) {
    return 0;
  }
  return 1;
}
