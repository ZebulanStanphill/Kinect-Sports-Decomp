extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8295D318();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;


unsigned __int64 fn_829A0BE0(int param_1)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int aiStack_80 [4];
  unsigned int auStack_70 [4];
  unsigned int auStack_60 [24];
  
  iVar3 = *(int *)(param_1 + 0x104);
  iVar4 = 0;
  piVar1 = *(int **)(iVar3 + 0x10);
  lVar7 = 4;
  uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 0xc);
  do {
    *(unsigned int *)((int)auStack_60 + iVar4) = *(unsigned int *)(*(int *)(iVar3 + 8) + 0xc);
    *(unsigned int *)((int)auStack_70 + iVar4) = *(unsigned int *)(*(int *)(iVar3 + 8) + 0x1c);
    iVar4 = iVar4 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar3 = *(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14));
  if (*(int *)(iVar3 + 4) == *(int *)(param_1 + 0x84)) {
    if (*(int *)(iVar3 + 0x6c) != 1) {
      fn_82975B00(param_1,*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c),0x12cd,
                    0xffffffff82051870);
      return 0xffffffff80004005;
    }
    uVar8 = uVar5;
    if (uVar5 == 0) goto LAB_829a0d3c;
    do {
      *(unsigned int *)(*(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14)) + 0xc) = 0;
      *(unsigned int *)(*(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14)) + 4) =
           *(unsigned int *)(param_1 + 0x88);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar5 != 0) {
    uVar8 = uVar5;
    uVar2 = lbl_82005710;
    piVar6 = piVar1;
    do {
      iVar3 = fn_82964628(uVar2,param_1,0,0,0);
      *(int *)(((int)aiStack_80 - (int)piVar1) + (int)piVar6) = iVar3;
      iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
      fn_82F68CC0(iVar3,*(unsigned int *)(*piVar6 * 4 + *(int *)(param_1 + 0x14)),0x80);
      uVar8 = uVar8 - 1;
      *(unsigned int *)(iVar3 + 0x3c) = 0;
      piVar6 = piVar6 + 1;
    } while (uVar8 != 0);
  }
LAB_829a0d3c:
  uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x104) + 8);
  uVar2 = fn_8295D318(param_1,8,aiStack_80,uVar5,uVar8,uVar8 + 0x10,0,2);
  if (-1 < (int)uVar2) {
    uVar2 = fn_8295D318(param_1,4,piVar1,uVar5,auStack_60,auStack_70,aiStack_80,uVar5);
  }
  return uVar2;
}

