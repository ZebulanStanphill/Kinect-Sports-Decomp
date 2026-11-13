extern int fn_825B0BD0();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_8284E5C0();


void fn_825B05A0(int *param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 0x30;
  lVar2 = ((unsigned __int64)*(unsigned int *)(*param_1 + 300) & 0x3fffffff) << 2;
  if (0x3fffffff < *(unsigned int *)(*param_1 + 300)) {
    lVar2 = -1;
  }
  iVar4 = fn_8265CA60(lVar2);
  iVar8 = *param_1;
  lVar2 = 0;
  uVar7 = 0;
  if (*(int *)(iVar8 + 300) != 0) {
    iVar9 = 0;
    puVar5 = (unsigned int *)(iVar4 + -4);
    do {
      iVar1 = *(int *)(iVar9 + *(int *)(iVar8 + 0x128) + 4);
      if (iVar1 != 0) {
        lVar2 = lVar2 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *(unsigned int *)(iVar1 + 0x30);
      }
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 0x20;
    } while (uVar7 < *(unsigned int *)(iVar8 + 300));
  }
  if (*(int *)(*param_1 + 0x110) != 0) {
    uVar3 = fn_8284E5C0(*(int *)(*param_1 + 0x110),iVar4,lVar2);
    lVar2 = uVar3 + ((__int64)((int)uVar3 >> 4) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 0xf) != 0)
                    & 0xfffffff) * -0x10;
    if (lVar2 < 1) {
      if ((int)lVar2 < 0) {
        uVar3 = uVar3 - lVar2;
      }
    }
    else {
      uVar3 = (uVar3 - lVar2) + 0x10;
    }
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + (int)uVar3;
  }
  fn_8265CAA0(iVar4);
  fn_825B0BD0(*param_1,param_2);
  iVar8 = 0;
  uVar6 = 0;
  uVar7 = *(unsigned int *)(*param_1 + 300);
  if (uVar7 != 0) {
    iVar4 = 0;
    do {
      iVar9 = *(int *)(iVar4 + *(int *)(*param_1 + 0x128) + 4);
      if (iVar9 != 0) {
        iVar8 = *(int *)(iVar9 + 0x2c) + iVar8;
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar6 < uVar7);
  }
  *(int *)(param_2 + 0x20) = iVar8 * 0x20 + *(int *)(param_2 + 0x20);
  return;
}

