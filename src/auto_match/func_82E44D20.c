extern int fn_82F64CE0();


void fn_82E44D20(unsigned int *param_1,unsigned int param_2)

{
  if ((*param_1 & 0x8000000) == 0) {
    if ((int)param_2 < 0) {
      if (0 < (int)param_1[2]) {
        *(unsigned short *)(param_1[2] * 2 + param_1[3] + -2) = 0;
        param_2 = fn_82F64CE0(param_1[3]);
      }
    }
    else {
      *(unsigned short *)(param_2 * 2 + param_1[3]) = 0;
    }
    param_1[1] = param_2;
  }
  return;
}

