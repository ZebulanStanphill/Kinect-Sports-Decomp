extern int fn_8261E878();
extern unsigned int lbl_821917C0;
extern unsigned int ltcg_pool_0_0f;


void fn_825DCCE0(double param_1,double param_2,double param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar1 = *(unsigned int *)(param_4 + 0x1f8);
  iVar2 = *(int *)(param_5 + 0xf98);
  *(float *)(param_5 + 0xfac) = (float)((double)*(float *)(param_5 + 0xfac) + param_3);
  uVar3 = *(unsigned int *)(param_5 + 0xfa8) & uVar1;
  *(unsigned int *)(param_5 + 0xfa8) = uVar3;
  if (*(int *)(param_5 + 0xf94) == 0) {
    if (uVar1 == 0) {
      *(unsigned int *)(param_5 + 0xf98) = 0;
    }
    else {
      if ((*(char *)(param_5 + 0x262) != '\0') && (iVar2 == 0)) {
        if (((double)lbl_821917C0 < ABS(param_1)) || ((double)lbl_821917C0 < ABS(param_2))) {
          *(unsigned int *)(param_5 + 0xf94) = 1;
          iVar4 = param_4 + 0x640;
          goto LAB_825dcd48;
        }
      }
      if ((*(char *)(param_5 + 0x261) != '\0') && (uVar3 == 0)) {
        *(unsigned int *)(param_5 + 0xf98) = 1;
      }
    }
  }
  else if ((uVar1 != 0) && (*(int *)(param_5 + 0xf9c) == 0)) {
    *(unsigned int *)(param_5 + 0xf94) = 0;
    iVar4 = param_4 + 0x644;
LAB_825dcd48:
    *(unsigned int *)(param_5 + 0xfa8) = 1;
    *(unsigned int *)(param_5 + 0xfac) = ltcg_pool_0_0f;
    fn_8261E878(param_4,iVar4);
  }
  if (*(char *)(param_5 + 0x262) == '\0') {
    *(unsigned int *)(param_5 + 0xf94) = 0;
  }
  iVar4 = *(int *)(param_5 + 0xf98);
  *(unsigned int *)(param_5 + 0xf9c) = uVar1;
  if ((iVar4 != 0) || (uVar5 = 1, iVar2 == 0)) {
    uVar5 = 0;
  }
  *(unsigned int *)(param_5 + 0xf24) = uVar5;
  if (iVar4 != iVar2) {
    if (((*(unsigned int *)(param_4 + 0x310) & 0x100) == 0) && (uVar5 = 1, *(int *)(param_4 + 0x220) != 2))
    goto LAB_825dce34;
  }
  uVar5 = 0;
LAB_825dce34:
  *(unsigned int *)(param_5 + 0xf20) = uVar5;
  if ((iVar4 == 0) || (uVar5 = 1, *(char *)(param_5 + 0x385) == '\0')) {
    uVar5 = 0;
  }
  *(unsigned int *)(param_5 + 0xf98) = uVar5;
  return;
}

