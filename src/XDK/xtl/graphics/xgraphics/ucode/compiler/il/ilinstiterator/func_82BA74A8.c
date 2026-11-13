extern int fn_82BC6928();
extern int fn_82BC69A8();
extern int fn_82BC6A18();


void fn_82BA74A8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  
  puVar1 = *(unsigned int **)(param_1 + 0x14);
  uVar4 = -(unsigned int)((*puVar1 & 0xffff) < 100) & *puVar1 & 0xffff;
  if (uVar4 == 0xf) {
    puVar3 = puVar1 + 1;
    if ((short)*puVar1 != 0xf) {
      puVar3 = (unsigned int *)0x0;
    }
    uVar4 = 0;
    puVar5 = puVar1 + 2;
    *(unsigned int **)(param_1 + 0x14) = puVar1 + 1;
    *(unsigned int **)(param_1 + 0x14) = puVar5;
    if ((short)*puVar3 != 0) {
      do {
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
        *(unsigned int **)(param_1 + 0x14) = puVar5;
      } while (uVar4 < (unsigned short)*puVar3);
    }
  }
  else if (uVar4 == 0x4f) {
    puVar3 = puVar1 + 1;
    if ((short)*puVar1 != 0x4f) {
      puVar3 = (unsigned int *)0x0;
    }
    uVar4 = 0;
    puVar5 = puVar1 + 2;
    *(unsigned int **)(param_1 + 0x14) = puVar1 + 1;
    *(unsigned int **)(param_1 + 0x14) = puVar5;
    if ((short)*puVar3 != 0) {
      do {
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
        *(unsigned int **)(param_1 + 0x14) = puVar5;
      } while (uVar4 < (unsigned short)*puVar3);
    }
  }
  else {
    *(unsigned int **)(param_1 + 0x14) = puVar1 + 1;
    iVar6 = 0;
    iVar2 = fn_82BC6928(uVar4);
    if (0 < iVar2) {
      do {
        puVar1 = *(unsigned int **)(param_1 + 0x14);
        *(unsigned int **)(param_1 + 0x14) = puVar1 + 1;
        if ((*puVar1 & 0x400000) != 0) {
          *(unsigned int **)(param_1 + 0x14) = puVar1 + 2;
        }
        if ((*puVar1 & 0x800000) != 0) {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        }
        iVar6 = iVar6 + 1;
        iVar2 = fn_82BC6928(uVar4);
      } while (iVar6 < iVar2);
    }
    iVar6 = 0;
    iVar2 = fn_82BC69A8(uVar4);
    if (0 < iVar2) {
      do {
        puVar1 = *(unsigned int **)(param_1 + 0x14);
        *(unsigned int **)(param_1 + 0x14) = puVar1 + 1;
        if ((*puVar1 & 0x400000) != 0) {
          *(unsigned int **)(param_1 + 0x14) = puVar1 + 2;
        }
        if ((*puVar1 & 0x800000) != 0) {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        }
        iVar6 = iVar6 + 1;
        iVar2 = fn_82BC69A8(uVar4);
      } while (iVar6 < iVar2);
    }
    iVar6 = 0;
    iVar2 = fn_82BC6A18(uVar4);
    if (0 < iVar2) {
      do {
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        iVar2 = fn_82BC6A18(uVar4);
      } while (iVar6 < iVar2);
    }
  }
  return;
}

