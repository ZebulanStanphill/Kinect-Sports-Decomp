extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82A4D220(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    sync(1);
    *(unsigned int *)(param_1 + 100) = 0;
    *(int *)(param_1 + 0x60) = iVar1;
    *(unsigned int *)(param_1 + 0x70) = 1;
  }
  if ((param_3[1] == 0) || (param_6 == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(param_1 + 0x2c),0,*(int *)(param_1 + 0x38) << 2);
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    if (*(float *)(param_1 + 0x40) == lbl_821AAD20) goto LAB_82a4d2f0;
  }
  if (*(int *)(param_1 + 0x3c) == 2) {
    if (*(float *)(param_1 + 0x40) == lbl_82002AE0) {
LAB_82a4d2f0:
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_1 + 0x2c),0,*(int *)(param_1 + 0x38) << 2);
    }
  }
  *(unsigned int *)(param_1 + 0x24) = *param_3;
  *(unsigned int *)(param_1 + 0x28) = *param_3;
  *(int *)(param_1 + 0x34) = param_3[2] * *(int *)(param_1 + 0x38);
  (**(int (***)())(param_1 + 0x6c))(param_1 + 0x24);
  return;
}

