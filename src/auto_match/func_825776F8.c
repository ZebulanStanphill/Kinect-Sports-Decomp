typedef unsigned char bool;
extern int fn_825A2410();
extern int fn_82A1DD38();


void fn_825776F8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar8 = fn_825A2410(param_1 + 0x38);
    fn_82A1DD38(uVar8,param_2,0x1c);
  }
  else {
    if (*param_2 == 0) {
      iVar9 = param_2[1];
      if (iVar9 < 0) {
        return;
      }
    }
    else {
      iVar9 = 0;
    }
    if (iVar9 < *(int *)(param_1 + 8)) {
      bVar5 = *param_2 == 0;
      uVar10 = (unsigned __int64)(param_2[2] == 0);
      iVar3 = param_2[6];
      if (param_2[3] != 0) {
        uVar10 = uVar10 | 2;
      }
      iVar1 = param_2[5];
      iVar2 = param_2[4];
      iVar9 = *(int *)((iVar9 + 3) * 4 + param_1);
      iVar4 = (unsigned int)bVar5 * 0x10 + iVar9;
      uVar7 = (unsigned int)((uVar10 & 2) << 0x1d);
      *(int *)(iVar4 + 0x10) = iVar2;
      *(int *)(iVar4 + 0x18) = iVar1;
      uVar6 = *(unsigned int *)(iVar4 + 0xc) & 0x3fffffff;
      *(unsigned int *)(iVar4 + 0xc) = uVar7 | (unsigned int)((~uVar10 & 0xffffffff) << 0x1f) | uVar6;
      if (iVar3 != 0) {
        *(int *)(iVar4 + 0x14) = iVar2;
        *(unsigned int *)(iVar4 + 0xc) = uVar7 | uVar6;
        if ((uVar10 & 2) == 0) {
          if (bVar5) {
            *(unsigned int *)(iVar9 + 8) = *(unsigned int *)(*(int *)(iVar9 + 0x54) + 0x14c);
          }
          else {
            *(unsigned int *)(iVar9 + 4) = *(unsigned int *)(*(int *)(iVar9 + 0x54) + 0x134);
          }
        }
        else {
          *(unsigned int *)((bVar5 + 1) * 4 + iVar9) = 0;
        }
      }
    }
  }
  return;
}

