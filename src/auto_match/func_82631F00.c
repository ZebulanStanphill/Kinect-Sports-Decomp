extern void *memset(void *, int, unsigned int);

int * fn_82631F00(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                   unsigned int param_5)
{
  *param_1 = (int)param_4;
  param_1[2] = (int)param_5;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_4 != 0) {
    memset((void *)param_4, 0, param_5);
  }
  param_1[5] = (int)param_2;
  param_1[7] = (int)param_3;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_2 != 0) {
    memset((void *)param_2, 0, param_3);
  }
  return param_1;
}
