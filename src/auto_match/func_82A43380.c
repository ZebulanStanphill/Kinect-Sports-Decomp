unsigned int * fn_82A43380(int param_1,unsigned __int64 param_2,int (**param_3)(),int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  
  if (param_4 == 0) {
    puVar2 = *(unsigned int **)(param_1 + 0xcc);
  }
  else {
    puVar2 = *(unsigned int **)(param_4 + 4);
  }
  if (param_3 == (int (**)())0x0) {
    for (; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[1]) {
      if ((unsigned __int64)*puVar2 == (param_2 & 0xffffffff)) {
        return puVar2;
      }
    }
  }
  else {
    for (; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[1]) {
      iVar1 = (*param_3)(*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
    }
  }
  return (unsigned int *)0x0;
}

