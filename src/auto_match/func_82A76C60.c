extern int fn_82A3FF60();
extern int fn_82A4F4E0();


unsigned __int64 fn_82A76C60(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  uVar3 = *(unsigned int *)(param_1 + 0x58);
  iVar5 = 0;
  lVar6 = ((unsigned __int64)uVar2 & 0x1fffffff) << 3;
  if (0x1fffffff < uVar2) {
    lVar6 = -1;
  }
  iVar4 = fn_82A3FF60(0xffffffff83219d50,lVar6,0x20970006,0);
  if (iVar4 == 0) {
    uVar11 = 0xffffffff8007000e;
  }
  else {
    lVar6 = ((unsigned __int64)uVar3 & 0x1fffffff) << 3;
    if (0x1fffffff < uVar3) {
      lVar6 = -1;
    }
    iVar5 = fn_82A3FF60(0xffffffff83219d50,lVar6,0x20970006,0);
    uVar11 = -(unsigned __int64)(iVar5 == 0) & 0xffffffff8007000e;
  }
  piVar7 = *(int **)(param_1 + 0x28);
  uVar9 = 0;
  iVar12 = (int)uVar11;
  if (uVar2 != 0) {
    puVar8 = (unsigned int *)(iVar4 + -4);
    do {
      if (iVar12 < 0) break;
      if (piVar7 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar7;
        piVar7 = (int *)piVar7[1];
      }
      uVar9 = uVar9 + 1;
      puVar8[1] = *(unsigned int *)(iVar10 + 0x2c);
      uVar1 = *(unsigned short *)(*(int *)(iVar10 + 0x2c) + 0xc);
      trapWord(6,(unsigned __int64)uVar1,0);
      puVar8 = puVar8 + 2;
      *puVar8 = *(unsigned int *)(iVar10 + 0x34) / (unsigned int)uVar1;
    } while (uVar9 < uVar2);
  }
  piVar7 = *(int **)(param_1 + 0x50);
  uVar9 = 0;
  if (uVar3 != 0) {
    puVar8 = (unsigned int *)(iVar5 + -4);
    do {
      if (iVar12 < 0) goto LAB_82a76dfc;
      if (piVar7 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar7;
        piVar7 = (int *)piVar7[1];
      }
      uVar9 = uVar9 + 1;
      puVar8[1] = *(unsigned int *)(iVar10 + 0x2c);
      uVar1 = *(unsigned short *)(*(int *)(iVar10 + 0x2c) + 0xc);
      trapWord(6,(unsigned __int64)uVar1,0);
      puVar8 = puVar8 + 2;
      *puVar8 = *(unsigned int *)(iVar10 + 0x34) / (unsigned int)uVar1;
    } while (uVar9 < uVar3);
  }
  if (-1 < iVar12) {
    uVar11 = (**(int (***)())(**(int **)(param_1 + 8) + 0x20))
                       (*(int **)(param_1 + 8),uVar2,iVar4,uVar3,iVar5);
  }
LAB_82a76dfc:
  if (iVar4 != 0) {
    fn_82A4F4E0(iVar4);
  }
  if (iVar5 != 0) {
    fn_82A4F4E0(iVar5);
  }
  return uVar11;
}

