void fn_82D01B18(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  puVar1 = *(unsigned int **)(param_1 + 0x10);
  if (puVar1 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x10) = *puVar1;
    *(unsigned int *)(param_1 + 0x20) = puVar1[2];
    *(int *)(param_1 + 0x24) = puVar1[3] * *(int *)(param_1 + 4) + puVar1[2];
    *puVar1 = *(unsigned int *)(param_1 + 0xc);
    *(unsigned int **)(param_1 + 0xc) = puVar1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 4);
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x14);
  if (uVar2 == 0) {
    uVar2 = *(unsigned int *)(param_1 + 4);
    uVar7 = 0x100 / (unsigned __int64)uVar2;
    iVar8 = (int)uVar7;
    trapWord(6,(unsigned __int64)uVar2,0);
    if (uVar7 == 0) {
      iVar8 = 1;
    }
    if (*(unsigned int *)(param_1 + 0x18) < 0x11) {
      iVar8 = uVar2 * iVar8 + 0x10;
    }
    else {
      iVar8 = *(unsigned int *)(param_1 + 0x18) + uVar2 * iVar8;
    }
  }
  else {
    if (*(unsigned int *)(param_1 + 0x1c) <= uVar2) goto LAB_82d01c28;
    uVar3 = *(unsigned int *)(param_1 + 4);
    uVar7 = (unsigned __int64)uVar2 / (unsigned __int64)uVar3;
    trapWord(6,(unsigned __int64)uVar3,0);
    if (uVar7 < 8) {
      iVar8 = 8;
    }
    else {
      uVar2 = (unsigned int)uVar7;
      iVar8 = (uVar2 >> 1) + uVar2;
    }
    if (*(unsigned int *)(param_1 + 0x18) < 0x11) {
      iVar8 = uVar3 * iVar8 + 0x10;
    }
    else {
      iVar8 = uVar3 * iVar8 + *(unsigned int *)(param_1 + 0x18);
    }
  }
  *(int *)(param_1 + 0x14) = iVar8;
LAB_82d01c28:
  uVar7 = (**(int (***)())(**(int **)(param_1 + 0x30) + 4))
                    (*(int **)(param_1 + 0x30),*(unsigned int *)(param_1 + 0x14));
  if ((uVar7 & 0xffffffff) != 0) {
    lVar4 = (**(int (***)())(**(int **)(param_1 + 0x30) + 0x10))
                      (*(int **)(param_1 + 0x30),uVar7,*(unsigned int *)(param_1 + 0x14));
    puVar1 = (unsigned int *)uVar7;
    puVar1[1] = (int)lVar4;
    uVar5 = *(unsigned int *)(param_1 + 0x18) + uVar7 + 0xf & ~((unsigned __int64)*(unsigned int *)(param_1 + 0x18) - 1);
    uVar6 = (unsigned int)uVar5;
    puVar1[2] = uVar6;
    trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 4),0);
    puVar1[3] = (int)(((lVar4 - uVar5) + uVar7 & 0xffffffff) / (unsigned __int64)*(unsigned int *)(param_1 + 4));
    *(unsigned int *)(param_1 + 0x20) = uVar6;
    *(int *)(param_1 + 0x24) = puVar1[3] * *(int *)(param_1 + 4) + puVar1[2];
    *puVar1 = *(unsigned int *)(param_1 + 0xc);
    *(unsigned int **)(param_1 + 0xc) = puVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + puVar1[3];
    iVar8 = puVar1[3];
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 4);
    *(int *)(param_1 + 0x28) = iVar8 + *(int *)(param_1 + 0x28) + -1;
  }
  return;
}

