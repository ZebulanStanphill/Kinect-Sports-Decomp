void fn_82FAF018(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != *(int *)(param_1 + 0x80)) {
    do {
      piVar1 = *(int **)(iVar2 + 4);
      if (*(short *)(piVar1 + 6) != 0) {
        (*(int (**)())(*piVar1 + 0x4c))(piVar1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x80));
  }
  return;
}

