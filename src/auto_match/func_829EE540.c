extern int fn_829EE1D8();
extern int fn_829EE4F0();


void fn_829EE540(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  iVar1 = fn_829EE4F0(param_1,(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)) / 0x24,
                        *(unsigned int *)(param_2 + 0x14));
  if (iVar1 < 0) {
LAB_829ee5e8:
    *param_1 = iVar1;
  }
  else {
    uVar4 = 0;
    if ((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)) / 0x24 != 0) {
      iVar2 = 0;
      lVar3 = 0;
      do {
        iVar1 = fn_829EE1D8(param_1,uVar4,*(unsigned int *)(iVar2 + *(int *)(param_2 + 0x1c)),
                              (unsigned __int64)*(unsigned int *)(param_2 + 8) + lVar3);
        if (iVar1 < 0) goto LAB_829ee5e8;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x24;
        iVar2 = iVar2 + 4;
      } while ((uVar4 & 0xffffffff) <
               (unsigned __int64)(unsigned int)((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)) / 0x24));
    }
  }
  return;
}

