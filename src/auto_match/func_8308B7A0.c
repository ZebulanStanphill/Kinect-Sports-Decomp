extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_8308B7A0(int param_1,int param_2,short param_3,int param_4,int *param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  if ((*(unsigned int *)(param_4 + 0xc) & 1) == 0) {
    iVar1 = fn_82CE5410();
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),param_5,8);
    }
    iVar1 = *param_5;
    iVar3 = param_5[1] * 8;
    param_5[1] = param_5[1] + 1;
    *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(param_2 + 0xc);
    *(unsigned int *)(iVar3 + iVar1 + 4) = *(unsigned int *)(param_4 + 0xc);
  }
  else {
    param_1 = (*(unsigned int *)(param_4 + 0xc) & 0xfffffffe) + param_1;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      psVar2 = *(short **)(param_1 + 4);
      do {
        if (*psVar2 == param_3) goto LAB_8308b864;
        iVar1 = iVar1 + 1;
        psVar2 = psVar2 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    iVar1 = -1;
LAB_8308b864:
    iVar3 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 != iVar1) {
      *(unsigned short *)(iVar1 * 2 + *(int *)(param_1 + 4)) =
           *(unsigned short *)(iVar3 * 2 + *(int *)(param_1 + 4));
    }
  }
  return;
}

