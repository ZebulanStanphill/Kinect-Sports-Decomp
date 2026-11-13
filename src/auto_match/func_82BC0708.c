unsigned int fn_82BC0708(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)((int)&param_2 + iVar1) == '\0') {
      (*(int (**)())(**(int **)(param_1 + 0x30) + 0x54))(*(int **)(param_1 + 0x30),0,iVar1,0);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return *(unsigned int *)(param_1 + 0x34);
}

