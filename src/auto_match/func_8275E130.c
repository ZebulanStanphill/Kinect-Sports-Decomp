void fn_8275E130(int *param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = (float)(__int64)*(int *)(iVar1 + 0x2c);
  *param_3 = (float)(__int64)*(int *)(iVar1 + 0x30);
  if ((*(unsigned char *)(iVar1 + 0x70) & 0x80) == 0) {
    return;
  }
  *param_2 = *param_2 * *(float *)(iVar1 + 0x6c);
  *param_3 = *param_3 * *(float *)(iVar1 + 0x6c);
  return;
}

