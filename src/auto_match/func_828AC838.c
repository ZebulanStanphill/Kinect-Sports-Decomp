extern unsigned int lbl_82024D24;


void fn_828AC838(unsigned int *param_1,__int64 param_2,__int64 param_3)

{
  param_1[4] = (int)param_2;
  param_1[5] = (int)param_3;
  *param_1 = &lbl_82024D24;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(char *)(param_1 + 1) = '\x01' - (param_2 + param_3 == 0);
  return;
}

