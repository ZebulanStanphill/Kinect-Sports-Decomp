extern int fn_82A1EFC0();


void fn_8241C3A0(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = param_1[0x96];
  param_2[1] = param_1[0x97];
  param_2[2] = param_1[0x95];
  param_2[3] = param_1[0xa3];
  if ((param_1[0xc] == 0) || (iVar1 = 1, *(int *)(param_1[0xc] + 0x78) == 0)) {
    iVar1 = 0;
  }
  param_2[4] = iVar1;
  if (param_1[0xc] != 0) {
    iVar1 = 1;
    if (*(float *)(param_1[0xc] + 100) < *(float *)(*param_1 + 0x310)) goto LAB_8241c424;
  }
  iVar1 = 0;
LAB_8241c424:
  param_2[5] = iVar1;
  param_2[7] = param_1[0x9d];
  if ((param_1[0xc] == 0) || (iVar1 = 1, *(int *)(param_1[0xc] + 0x38) == 0)) {
    iVar1 = 0;
  }
  param_2[8] = iVar1;
  if ((param_1[0xc] == 0) || (iVar1 = 1, *(int *)(param_1[0xc] + 0x1d0) != 3)) {
    iVar1 = 0;
  }
  param_2[9] = iVar1;
  param_2[6] = param_1[0x9c];
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_2 + 10,0,0x3c);
}

