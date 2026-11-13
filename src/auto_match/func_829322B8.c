extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F164;


unsigned int * fn_829322B8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_82934160();
  puVar1 = (unsigned int *)fn_829301D0(*puVar1,0x50,0x10);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[1] = 10;
    *puVar1 = &lbl_8202F164;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[4] = *(unsigned int *)(param_1 + 0x10);
    puVar1[5] = *(unsigned int *)(param_1 + 0x14);
    puVar1[6] = *(unsigned int *)(param_1 + 0x18);
    puVar1[7] = *(unsigned int *)(param_1 + 0x1c);
    puVar1[8] = *(unsigned int *)(param_1 + 0x20);
    puVar1[0x12] = *(unsigned int *)(param_1 + 0x48);
    puVar1[0x13] = *(unsigned int *)(param_1 + 0x4c);
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x24) + 4))();
      puVar1[9] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x28) + 4))();
      puVar1[10] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 4))();
      puVar1[0xb] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x30) + 4))();
      puVar1[0xc] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x34) + 4))();
      puVar1[0xd] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x38) + 4))();
      puVar1[0xe] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x3c) + 4))();
      puVar1[0xf] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x44) + 4))();
      puVar1[0x11] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x40) == (int *)0x0) {
      return puVar1;
    }
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x40) + 4))();
    puVar1[0x10] = iVar2;
    if (iVar2 != 0) {
      return puVar1;
    }
  }
  return (unsigned int *)0x0;
}

