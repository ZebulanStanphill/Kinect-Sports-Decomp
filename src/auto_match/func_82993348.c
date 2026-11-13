extern int fn_8294B7A8();
extern int fn_8294D3A8();
extern int fn_82964588();
extern int fn_82964628();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


unsigned __int64 fn_82993348(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  
  uVar7 = 0;
  *(unsigned int *)(param_1 + 0x224) = 0xffffffff;
  uVar9 = 0;
  *(unsigned int *)(param_1 + 0x228) = 0xffffffff;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar8 = 0;
    uVar10 = lbl_82005758;
    uVar11 = lbl_82005710;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar9;
      *(unsigned int *)(param_1 + 0x104) = *(unsigned int *)(*(int *)(param_1 + 0x18) + iVar8);
      *(unsigned int *)(param_1 + 0x100) = uVar9;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar8);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar1 = *puVar2 & 0xfff00000;
      if (((uVar1 == 0x20300000) || (uVar1 == 0x20200000)) && (*(int *)(param_1 + 0x224) == -1)) {
        uVar5 = fn_82964588(param_1,0xffffffff8201261c,0x311,1,4);
        uVar6 = fn_82964628(uVar11,param_1,uVar5,0,0);
        *(unsigned int *)(param_1 + 0x224) = uVar6;
        uVar6 = fn_82964628(uVar10,param_1,uVar5,0,1);
        *(unsigned int *)(param_1 + 0x228) = uVar6;
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar9 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  if (((*(unsigned int *)(param_1 + 0xcc) & 4) == 0) && (uVar9 = 0, *(int *)(param_1 + 0xc) != 0)) {
    iVar8 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar9;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar8);
      *(unsigned int **)(param_1 + 0x104) = puVar2;
      uVar1 = *puVar2;
      uVar4 = uVar1 & 0xfff00000;
      if (((uVar4 == 0x10300000) || (uVar4 == 0x10500000)) ||
         ((uVar4 == 0x10600000 || (uVar4 == 0x10700000)))) {
LAB_829934dc:
        uVar7 = fn_8294D3A8(param_1);
LAB_829934e8:
        if ((int)uVar7 < 0) {
          return uVar7;
        }
      }
      else {
        if (uVar4 == 0x50000000) {
          if (2 < (uVar1 & 0xfffff)) goto LAB_829934dc;
          goto LAB_829934e8;
        }
        uVar7 = 1;
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar9 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar9 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    do {
      iVar3 = *(int *)(iVar8 + *(int *)(param_1 + 0x14));
      if ((((*(int *)(iVar3 + 0x54) == -1) &&
           ((*(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) !=
            0)) && (*(unsigned int *)(param_1 + 0x228) != uVar9)) && (*(unsigned int *)(param_1 + 0x224) != uVar9))
      {
        *(unsigned int *)(iVar3 + 4) = *(unsigned int *)(param_1 + 0x74);
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar9 < *(unsigned int *)(param_1 + 8));
  }
  return 0;
}

