extern unsigned int lbl_82014C48;
extern float lbl_82014C4C;


double fn_82768880(int param_1,int param_2)

{
  unsigned char *pbVar1;
  
  if (param_2 == -1) {
    return (double)lbl_82014C48;
  }
  pbVar1 = (unsigned char *)(**(int **)(param_1 + 0x30) + *(int *)(param_1 + 0x38) + param_2 * 8 + 2);
  return (double)(((float)((int)(short)((unsigned short)pbVar1[1] << 8) | (unsigned int)*pbVar1) * lbl_82014C4C) /
                 (float)*(unsigned int *)(param_1 + 0x54));
}

