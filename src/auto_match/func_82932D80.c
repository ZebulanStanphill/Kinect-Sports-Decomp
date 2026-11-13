extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F17C;


unsigned int * fn_82932D80(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_82934160();
  puVar1 = (unsigned int *)fn_829301D0(*puVar1,0x34,0x10);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[1] = 0xc;
    *puVar1 = &lbl_8202F17C;
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
  }
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[4] = *(unsigned int *)(param_1 + 0x10);
    puVar1[0xc] = *(unsigned int *)(param_1 + 0x30);
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
      puVar1[5] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x18) + 4))();
      puVar1[6] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 4))();
      puVar1[7] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
      puVar1[8] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
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
    if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
      return puVar1;
    }
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 4))();
    puVar1[0xb] = iVar2;
    if (iVar2 != 0) {
      return puVar1;
    }
  }
  return (unsigned int *)0x0;
}

