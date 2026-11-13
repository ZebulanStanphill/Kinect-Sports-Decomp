void fn_82DFFEF8(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  int *piVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  
  lVar2 = (**(int (***)())(*param_1 + 0x34))();
  iVar3 = 0;
  uVar6 = 0;
  if (3 < (int)lVar2) {
    lVar7 = param_3 + 0x80;
    lVar8 = ((lVar2 - 4U & 0xffffffff) >> 2) + 1;
    uVar6 = lVar8 * 4 & 0xfffffffc;
    do {
      piVar1 = (int *)lVar7;
      if ((piVar1[-0x12] != 0) &&
         ((iVar3 == 0 || (*(float *)(piVar1[-0x14] + 0x1c) < *(float *)(iVar3 + 0x1c))))) {
        iVar3 = piVar1[-0x14];
      }
      iVar4 = iVar3;
      if (((piVar1[2] != 0) && (iVar4 = *piVar1, iVar3 != 0)) &&
         (*(float *)(iVar3 + 0x1c) <= *(float *)(iVar4 + 0x1c))) {
        iVar4 = iVar3;
      }
      iVar5 = iVar4;
      if (((piVar1[0x16] != 0) && (iVar5 = piVar1[0x14], iVar4 != 0)) &&
         (*(float *)(iVar4 + 0x1c) <= *(float *)(iVar5 + 0x1c))) {
        iVar5 = iVar4;
      }
      iVar3 = iVar5;
      if (((piVar1[0x2a] != 0) && (iVar3 = piVar1[0x28], iVar5 != 0)) &&
         (*(float *)(iVar5 + 0x1c) <= *(float *)(iVar3 + 0x1c))) {
        iVar3 = iVar5;
      }
      lVar7 = lVar7 + 0x140;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((int)uVar6 < (int)lVar2) {
    lVar2 = lVar2 - uVar6;
    lVar7 = (uVar6 + (uVar6 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + param_3 + 0x30;
    do {
      iVar4 = iVar3;
      if (((((int *)lVar7)[2] != 0) && (iVar4 = *(int *)lVar7, iVar3 != 0)) &&
         (*(float *)(iVar3 + 0x1c) <= *(float *)(iVar4 + 0x1c))) {
        iVar4 = iVar3;
      }
      iVar3 = iVar4;
      lVar7 = lVar7 + 0x50;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

