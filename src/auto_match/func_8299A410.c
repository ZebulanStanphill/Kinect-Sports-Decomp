extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82996970();
extern unsigned int lbl_82005710;


unsigned __int64
fn_8299A410(int param_1,int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6,
             int *param_7)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  
  uVar8 = 0;
  uVar12 = lbl_82005710;
  if (param_3 != 0) {
    do {
      puVar1 = (unsigned int *)*param_2;
      if ((puVar1 != (unsigned int *)0x0) && (*puVar1 != 0)) {
        uVar6 = (unsigned __int64)*puVar1 & 0xfff00000;
        iVar4 = fn_82996970(uVar6);
        if ((uVar6 & 0xffffffff) == 0x11000000) {
          iVar4 = 1;
        }
        uVar9 = 0;
        if (puVar1[1] != 0) {
          iVar10 = 0;
          do {
            iVar2 = *(int *)(*(int *)(iVar10 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
            if ((((*(int *)(iVar2 + 4) == *(int *)(param_1 + 0x80)) &&
                 (*(unsigned char *)(iVar2 + 0x6f) == param_4)) && (param_5 == *(unsigned char *)(iVar2 + 0x6e))) &&
               ((iVar4 == 0 || (*(int *)(iVar2 + 0x3c) != 0)))) {
              uVar11 = 0;
              if (param_6 != 0) {
                piVar7 = param_7;
                do {
                  if (*(int *)(iVar2 + 0x10) ==
                      *(int *)(*(int *)(*piVar7 * 4 + *(int *)(param_1 + 0x14)) + 0x10)) {
                    iVar5 = fn_82964628(uVar12,param_1,*(unsigned int *)(param_1 + 0x88),0);
                    if (iVar5 == -1) {
                      return 0xffffffff8007000e;
                    }
                    iVar3 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14));
                    *(unsigned int *)(iVar3 + 0x3c) = *(unsigned int *)(iVar2 + 0x3c);
                    *(int *)(iVar3 + 0x38) = param_7[uVar11];
                    *(int *)(iVar10 + puVar1[2]) = iVar5;
                    break;
                  }
                  uVar11 = uVar11 + 1;
                  piVar7 = piVar7 + 1;
                } while (uVar11 < param_6);
              }
              if (uVar11 == param_6) {
                fn_82975B00(param_1,0,0x12c1,0xffffffff82050f18);
                return 0xffffffff80004005;
              }
            }
            uVar9 = uVar9 + 1;
            iVar10 = iVar10 + 4;
          } while (uVar9 < puVar1[1]);
        }
      }
      uVar8 = uVar8 + 1;
      param_2 = param_2 + 1;
    } while (uVar8 < param_3);
  }
  return 0;
}

