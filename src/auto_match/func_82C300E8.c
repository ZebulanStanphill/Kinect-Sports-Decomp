typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A6C940();
extern int fn_82BA02A8();
extern int fn_82C16A38();


unsigned __int64
fn_82C300E8(int param_1,unsigned char *param_2,unsigned int param_3,int param_4,int param_5,int param_6,
             int param_7,int (**param_8)())

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar7;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  bool bVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  
  lVar11 = 0;
  if ((param_3 == 0) || (param_5 != 0)) {
    *(unsigned int *)(param_1 + 0x4c) = 1;
  }
  if (0 < (int)param_3) {
    *(unsigned char **)(param_1 + 0x1c) = param_2;
    *(unsigned int *)(param_1 + 0x20) = param_3;
    if (param_8 == (int (**)())0x0) {
      param_8 = fn_82BA02A8;
    }
    *(int (***)())(param_1 + 0x54) = param_8;
    if ((param_4 != 0) || (param_6 != 0)) {
      *(unsigned char **)(param_1 + 0x14) = param_2;
      *(unsigned int *)(param_1 + 0x18) = param_3;
      if (param_6 != 0) {
        uVar7 = fn_82C16A38(*(unsigned int *)(param_1 + 8));
        if ((uVar7 & 0xff) != ((int)(uVar7 & 0xff) >> 3) * 8) {
          *(unsigned int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_3;
        }
        if (*(int *)(param_1 + 0x44) != 0) {
          uVar7 = *(unsigned int *)(param_1 + 0x48);
          if (uVar7 < param_3) {
            *(unsigned int *)(param_1 + 0x20) = uVar7;
            *(unsigned int *)(param_1 + 0x44) = 0;
          }
          else {
            *(unsigned int *)(param_1 + 0x48) = uVar7 - param_3;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      if (param_4 != 0) {
        *(unsigned int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1U & 0x3ff;
      }
    }
    else if ((param_4 != 0) && (param_6 == 0)) {
      uVar1 = *(unsigned int *)(param_1 + 0x10);
      *(unsigned int *)(param_1 + 0x10) = 0;
      *(unsigned int *)(param_1 + 0xc) = uVar1;
      uVar4 = (**(int (***)())(param_1 + 0x54))(*param_2);
      uVar12 = (uVar4 & 0xff) << 8;
      uVar5 = (**(int (***)())(param_1 + 0x54))(*(unsigned char *)(*(int *)(param_1 + 0x1c) + 1));
      uVar6 = (**(int (***)())(param_1 + 0x54))(*(unsigned char *)(*(int *)(param_1 + 0x1c) + 2));
      uVar7 = (**(int (***)())(param_1 + 0x54))(*(unsigned char *)(*(int *)(param_1 + 0x1c) + 3));
      iVar2 = *(int *)(param_1 + 8);
      uVar13 = uVar7 & 0xff | (unsigned int)((uVar6 & 0xff | (uVar5 & 0xff | uVar12) << 8) << 8);
      *(unsigned int *)(param_1 + 0x10) = uVar13;
      uVar5 = fn_82C16A38(iVar2);
      uVar7 = (unsigned int)((uVar5 & 0xffffffff) >> 3) & 0x1f;
      iVar9 = (int)(uVar5 & 0xff);
      iVar3 = *(int *)(param_1 + 0x34);
      *(unsigned int *)(param_1 + 0x1c) = uVar7 + *(int *)(param_1 + 0x1c);
      *(unsigned int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar7;
      lVar11 = (uVar5 & 0xff) + (unsigned __int64)(unsigned int)(iVar9 >> 3) * -8;
      iVar10 = (int)((uVar4 & 0xff) >> 4);
      *(int *)(param_1 + 0x34) = iVar10;
      if (*(int *)(param_1 + 0x3c) == 0) {
        bVar8 = false;
        if ((2 < param_7) && ((uVar12 & 0x400) != 0)) {
          bVar8 = true;
        }
        iVar10 = iVar10 - iVar3;
        if (((iVar10 != 1) && (iVar10 != -0xf)) || (bVar8)) {
          *(unsigned int *)(param_1 + 0x24) = uVar13;
          *(int *)(param_1 + 0x28) = 0x20 - iVar9;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) + 4;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x18) + -4;
          *(unsigned int *)(iVar2 + 0xc) = 1;
          return 6;
        }
        *(unsigned int *)(iVar2 + 0xc) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x3c) = 0;
      }
    }
    fn_82A6C940(param_1,lVar11);
  }
  return 0;
}

