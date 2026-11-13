extern char lbl_820F3D88[];


double fn_82C378E0(float *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x40) - *(int *)(*(int *)(param_2 + 4) + param_3 * 4);
  if (iVar1 >= 0x48) {
    iVar1 = 0x47;
  }
  return (double)((*(float *)(lbl_820F3D88 + iVar1 * 4) /
                  (float)(__int64)(1 << (iVar1 >> 2))) * *param_1);
}

