extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8295D318();


void fn_82993EA8(int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int auStack_60 [4];
  unsigned int auStack_50 [20];
  
  puVar1 = (unsigned int *)param_1[0x41];
  iVar8 = param_1[5];
  piVar2 = (int *)puVar1[2];
  piVar3 = (int *)puVar1[4];
  uVar11 = (unsigned __int64)puVar1[3];
  uVar6 = *puVar1 & 0xfffff;
  uVar7 = *puVar1 & 0xfffff;
  piVar10 = piVar2 + uVar7;
  iVar4 = *(int *)(*piVar2 * 4 + iVar8);
  iVar5 = *(int *)(*piVar3 * 4 + iVar8);
  iVar8 = *(int *)(piVar2[uVar7] * 4 + iVar8);
  if (((*(int *)(iVar5 + 4) == *(int *)(iVar4 + 4)) &&
      (*(int *)(iVar5 + 0xc) == *(int *)(iVar4 + 0xc))) ||
     ((*(int *)(iVar5 + 4) == *(int *)(iVar8 + 4) &&
      (*(int *)(iVar5 + 0xc) == *(int *)(iVar8 + 0xc))))) {
    iVar8 = (**(int (***)())(*param_1 + 0x154))(param_1,param_1[0x40],auStack_50,4,0,0);
    if (-1 < iVar8) {
      if (uVar11 != 0) {
        iVar8 = param_1[5];
        puVar9 = auStack_60;
        uVar12 = uVar11;
        do {
          *puVar9 = auStack_50
                    [*(int *)(*(int *)(*(int *)(((int)piVar3 - (int)auStack_60) + (int)puVar9) * 4 +
                                      iVar8) + 0x10)];
          puVar9 = puVar9 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      fn_8295D318(param_1,2,auStack_60,uVar11,piVar2,piVar10,0,uVar6);
      fn_8295D318(param_1,0x58,piVar3,uVar11,auStack_60,piVar10,piVar2,uVar6);
    }
  }
  else {
    fn_8295D318(param_1,10,piVar3,uVar11,piVar2,piVar10,0,uVar6);
  }
  return;
}

