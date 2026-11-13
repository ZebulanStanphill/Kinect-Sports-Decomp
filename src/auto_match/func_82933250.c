extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F194;


unsigned int * fn_82933250(int param_1)

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
    puVar1[1] = 0xe;
    *puVar1 = &lbl_8202F194;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 1;
    puVar1[0xb] = 0;
    *(unsigned __int64 *)(puVar1 + 0xc) = 0;
    *(unsigned __int64 *)(puVar1 + 0xe) = 0;
    *(unsigned __int64 *)(puVar1 + 0x10) = 0;
    *(unsigned __int64 *)(puVar1 + 0x12) = 0;
  }
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[5] = *(unsigned int *)(param_1 + 0x14);
    puVar1[6] = *(unsigned int *)(param_1 + 0x18);
    puVar1[7] = *(unsigned int *)(param_1 + 0x1c);
    puVar1[10] = *(unsigned int *)(param_1 + 0x28);
    *(unsigned __int64 *)(puVar1 + 0xc) = *(unsigned __int64 *)(param_1 + 0x30);
    *(unsigned __int64 *)(puVar1 + 0xe) = *(unsigned __int64 *)(param_1 + 0x38);
    *(unsigned __int64 *)(puVar1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x40);
    *(unsigned __int64 *)(puVar1 + 0x12) = *(unsigned __int64 *)(param_1 + 0x48);
    puVar1[0xb] = *(unsigned int *)(param_1 + 0x2c);
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x10) + 4))();
      puVar1[4] = iVar2;
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

