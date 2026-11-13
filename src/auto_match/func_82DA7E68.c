extern int fn_82F68B6C();


extern int fn_83089FA0();
extern int fn_82DA7D50();

void fn_82DA7E68(unsigned *param_1)
{
  int *p;
  int *e;
  int t;

  p = (int *)param_1[0];
  e = p + param_1[1] * 2;
  for (; p < e; p += 2) {
    t = p[0];
    if (*(int *)((int)*(char *)(t + 5) + t + 0x14) >
        *(int *)((int)*(char *)(p[1] + 5) + p[1] + 0x14)) {
      int *q = p + 1;
      *p = *q;
      *q = t;
    }
  }
  if ((int)param_1[1] <= 1) {
    return;
  }
  fn_83089FA0(param_1[0], 0, param_1[1] - 1, fn_82DA7D50);
}
