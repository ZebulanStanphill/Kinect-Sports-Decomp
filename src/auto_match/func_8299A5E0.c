extern int fn_82964628();
extern int fn_82975B00();
extern unsigned int lbl_82005710;


unsigned __int64
fn_8299A5E0(int param_1,int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6,
             int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  
  uVar6 = 0;
  uVar10 = lbl_82005710;
  if (param_3 != 0) {
    do {
      iVar1 = *param_2;
      if ((iVar1 != 0) && (uVar7 = 0, *(int *)(iVar1 + 4) != 0)) {
        iVar8 = 0;
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 8) + iVar8) * 4 + *(int *)(param_1 + 0x14));
          if ((((*(int *)(iVar2 + 4) == *(int *)(param_1 + 0x80)) && (*(int *)(iVar2 + 0x3c) != 0))
              && (*(unsigned char *)(iVar2 + 0x6f) == param_4)) && (param_5 == *(unsigned char *)(iVar2 + 0x6e))) {
            uVar9 = 0;
            if (param_6 != 0) {
              piVar5 = param_7;
              do {
                if (*(int *)(iVar2 + 0x10) ==
                    *(int *)(*(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x10)) {
                  iVar4 = fn_82964628(uVar10,param_1,*(unsigned int *)(param_1 + 0x88),0);
                  if (iVar4 == -1) {
                    return 0xffffffff8007000e;
                  }
                  iVar3 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14));
                  *(unsigned int *)(iVar3 + 0x3c) = *(unsigned int *)(iVar2 + 0x3c);
                  *(int *)(iVar3 + 0x38) = param_7[uVar9];
                  *(int *)(*(int *)(iVar1 + 8) + iVar8) = iVar4;
                  break;
                }
                uVar9 = uVar9 + 1;
                piVar5 = piVar5 + 1;
              } while (uVar9 < param_6);
            }
            if (uVar9 == param_6) {
              fn_82975B00(param_1,0,0x12c2,0xffffffff82050f18);
              return 0xffffffff80004005;
            }
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (uVar7 < *(unsigned int *)(iVar1 + 4));
      }
      uVar6 = uVar6 + 1;
      param_2 = param_2 + 1;
    } while (uVar6 < param_3);
  }
  return 0;
}

