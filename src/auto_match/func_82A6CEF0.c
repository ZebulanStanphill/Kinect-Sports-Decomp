typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A6C940();
extern int fn_82BA02A8();
extern int fn_82C16A38();
extern int fn_82F68B64();


unsigned __int64
fn_82A6CEF0(unsigned __int64 param_1,unsigned char *param_2,unsigned __int64 param_3,int param_4,int param_5,
             int param_6,int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar9;
  int (**pcVar10)();
  int iVar11;
  int iVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  
  param_8 = param_8 ^ 0xab7638de;
  iVar7 = fn_82F68B64();
  pcVar10 = (int (**)())param_8;
  lVar13 = 0;
  iVar9 = (int)param_3;
  if ((iVar9 == 0) || (param_5 != 0)) {
    *(unsigned int *)(iVar7 + 0x4c) = 1;
  }
  if (0 < iVar9) {
    *(unsigned char **)(iVar7 + 0x1c) = param_2;
    *(int *)(iVar7 + 0x20) = iVar9;
    if ((param_8 & 0xffffffff) == 0) {
      pcVar10 = fn_82BA02A8;
    }
    *(int (***)())(iVar7 + 0x54) = pcVar10;
    if ((param_4 != 0) || (param_6 != 0)) {
      *(unsigned char **)(iVar7 + 0x14) = param_2;
      *(int *)(iVar7 + 0x18) = iVar9;
      if (param_6 != 0) {
        uVar8 = fn_82C16A38(*(unsigned int *)(iVar7 + 8));
        if ((uVar8 & 0xff) != ((int)(uVar8 & 0xff) >> 3) << 3) {
          *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) + iVar9;
        }
        if (*(int *)(iVar7 + 0x44) != 0) {
          uVar8 = *(unsigned int *)(iVar7 + 0x48);
          if ((unsigned __int64)uVar8 < (param_3 & 0xffffffff)) {
            *(unsigned int *)(iVar7 + 0x20) = uVar8;
            *(unsigned int *)(iVar7 + 0x44) = 0;
          }
          else {
            *(unsigned int *)(iVar7 + 0x48) = uVar8 - iVar9;
          }
        }
      }
    }
    if (*(int *)(iVar7 + 0x38) == 0) {
      if (param_4 != 0) {
        *(unsigned int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1U & 0x3ff;
      }
    }
    else if ((param_4 != 0) && (param_6 == 0)) {
      uVar1 = *(unsigned int *)(iVar7 + 0x10);
      *(unsigned int *)(iVar7 + 0x10) = 0;
      *(unsigned int *)(iVar7 + 0xc) = uVar1;
      uVar4 = (**(int (***)())(iVar7 + 0x54))(*param_2);
      uVar14 = (uVar4 & 0xff) << 8;
      uVar5 = (**(int (***)())(iVar7 + 0x54))(*(unsigned char *)(*(int *)(iVar7 + 0x1c) + 1));
      uVar6 = (**(int (***)())(iVar7 + 0x54))(*(unsigned char *)(*(int *)(iVar7 + 0x1c) + 2));
      uVar8 = (**(int (***)())(iVar7 + 0x54))(*(unsigned char *)(*(int *)(iVar7 + 0x1c) + 3));
      iVar9 = *(int *)(iVar7 + 8);
      uVar15 = uVar8 & 0xff | (unsigned int)((uVar6 & 0xff | (uVar5 & 0xff | uVar14) << 8) << 8);
      *(unsigned int *)(iVar7 + 0x10) = uVar15;
      uVar5 = fn_82C16A38(iVar9);
      uVar8 = (unsigned int)((uVar5 & 0xffffffff) >> 3) & 0x1f;
      iVar11 = (int)(uVar5 & 0xff);
      iVar2 = *(int *)(iVar7 + 0x34);
      *(unsigned int *)(iVar7 + 0x1c) = uVar8 + *(int *)(iVar7 + 0x1c);
      *(unsigned int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) - uVar8;
      lVar13 = (uVar5 & 0xff) + (unsigned __int64)(unsigned int)(iVar11 >> 3) * -8;
      iVar12 = (int)((uVar4 & 0xff) >> 4);
      *(int *)(iVar7 + 0x34) = iVar12;
      if (*(int *)(iVar7 + 0x3c) == 0) {
        bVar3 = false;
        if ((2 < param_7) && ((uVar14 & 0x400) != 0)) {
          bVar3 = true;
        }
        iVar12 = iVar12 - iVar2;
        if (((iVar12 != 1) && (iVar12 != -0xf)) || (bVar3)) {
          *(unsigned int *)(iVar7 + 0x24) = uVar15;
          *(int *)(iVar7 + 0x28) = 0x20 - iVar11;
          *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x14) + 4;
          *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x18) + -4;
          *(unsigned int *)(iVar9 + 0xc) = 1;
          return 6;
        }
        *(unsigned int *)(iVar9 + 0xc) = 0;
      }
      else {
        *(unsigned int *)(iVar7 + 0x3c) = 0;
      }
    }
    fn_82A6C940(iVar7,lVar13);
  }
  return 0;
}

