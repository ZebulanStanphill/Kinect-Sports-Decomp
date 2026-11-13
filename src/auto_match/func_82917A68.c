unsigned __int64 fn_82917A68(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((unsigned int)param_1[1] != 0) {
    iVar1 = *(int *)(*param_1 + 8) + param_1[1];
  } else {
    iVar1 = 0;
  }
  *param_2 = iVar1;
  param_2[1] = (unsigned int)*(unsigned short *)(param_1 + 2);
  param_2[2] = (unsigned int)*(unsigned short *)((int)param_1 + 10);
  param_2[3] = (unsigned int)*(unsigned short *)(param_1 + 3);
  param_2[4] = (unsigned int)*(unsigned short *)param_1[6];
  param_2[5] = (unsigned int)*(unsigned short *)(param_1[6] + 2);
  param_2[6] = (unsigned int)*(unsigned short *)(param_1[6] + 4);
  param_2[7] = (unsigned int)*(unsigned short *)(param_1[6] + 6);
  param_2[8] = (unsigned int)*(unsigned short *)(param_1[6] + 8);
  param_2[9] = (unsigned int)*(unsigned short *)(param_1[6] + 10);
  param_2[10] = param_2[8] * param_2[6] * param_2[7] * 4;
  if ((unsigned int)param_1[5] != 0) {
    iVar1 = *(int *)(*param_1 + 8) + param_1[5];
  } else {
    iVar1 = 0;
  }
  param_2[0xb] = iVar1;
  return 0;
}

