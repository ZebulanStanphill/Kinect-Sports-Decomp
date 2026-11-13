extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;


unsigned int fn_825580C0(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  __int64 lVar4;
  
  uVar3 = 0;
  if (lbl_8326B4D8 == 0) {
    if (param_1 == 4) {
      piVar2 = &lbl_8326B4C8;
      lVar4 = 4;
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          uVar3 = *(unsigned int *)(*(int *)(iVar1 + 0x34) * 0x28 + iVar1 + 0x38) & param_2 | uVar3;
        }
        piVar2 = piVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    else {
      uVar3 = ((int *)((&lbl_8326B4C8)[param_1] + 0x34))
              [*(int *)((&lbl_8326B4C8)[param_1] + 0x34) * 10 + 1] & param_2;
    }
  }
  return uVar3;
}

