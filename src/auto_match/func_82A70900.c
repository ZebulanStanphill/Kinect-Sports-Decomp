extern char lbl_820957E0[];


double fn_82A70900(float *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x40) - *(int *)(*(int *)(param_2 + 4) + param_3 * 4);
  if (iVar1 >= 0x48) {
    iVar1 = 0x47;
  }
  return (double)((*(float *)(lbl_820957E0 + iVar1 * 4) /
                  (float)(__int64)(1 << (iVar1 >> 2))) * *param_1);
}

