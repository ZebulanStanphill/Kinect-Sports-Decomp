extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F11C;


unsigned int * fn_82931498(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_82934160();
  puVar1 = (unsigned int *)fn_829301D0(*puVar1,0x28,0x10);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[1] = 0x15;
    *puVar1 = &lbl_8202F11C;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[7] = *(unsigned int *)(param_1 + 0x1c);
    puVar1[6] = *(unsigned int *)(param_1 + 0x18);
    puVar1[8] = *(unsigned int *)(param_1 + 0x20);
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x10) + 4))();
      puVar1[4] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
      puVar1[5] = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
    if (*(int **)(param_1 + 0x24) == (int *)0x0) {
      return puVar1;
    }
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x24) + 4))();
    puVar1[9] = iVar2;
    if (iVar2 != 0) {
      return puVar1;
    }
  }
  return (unsigned int *)0x0;
}

