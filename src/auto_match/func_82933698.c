extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F1A0;


unsigned int * fn_82933698(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_82934160();
  puVar1 = (unsigned int *)fn_829301D0(*puVar1,0x40,0x10);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0xf;
    *puVar1 = &lbl_8202F1A0;
    *(unsigned __int64 *)(puVar1 + 4) = 0;
    *(unsigned __int64 *)(puVar1 + 6) = 0;
    *(unsigned __int64 *)(puVar1 + 8) = 0;
    *(unsigned __int64 *)(puVar1 + 10) = 0;
    *(unsigned __int64 *)(puVar1 + 0xc) = 0;
    *(unsigned __int64 *)(puVar1 + 0xe) = 0;
    puVar1[4] = 3;
  }
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *(unsigned __int64 *)(puVar1 + 4) = *(unsigned __int64 *)(param_1 + 0x10);
    *(unsigned __int64 *)(puVar1 + 6) = *(unsigned __int64 *)(param_1 + 0x18);
    *(unsigned __int64 *)(puVar1 + 8) = *(unsigned __int64 *)(param_1 + 0x20);
    *(unsigned __int64 *)(puVar1 + 10) = *(unsigned __int64 *)(param_1 + 0x28);
    *(unsigned __int64 *)(puVar1 + 0xc) = *(unsigned __int64 *)(param_1 + 0x30);
    *(unsigned __int64 *)(puVar1 + 0xe) = *(unsigned __int64 *)(param_1 + 0x38);
    if ((*(int *)(param_1 + 0x10) == 4) && (*(int **)(param_1 + 0x18) != (int *)0x0)) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x18) + 4))();
      *(int *)(param_1 + 0x18) = iVar2;
      if (iVar2 == 0) {
        return (unsigned int *)0x0;
      }
    }
  }
  return puVar1;
}

