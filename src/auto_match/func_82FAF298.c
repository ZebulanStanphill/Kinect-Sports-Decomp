void fn_82FAF298(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != *(int *)(param_1 + 0x80)) {
    do {
      piVar1 = *(int **)(iVar2 + 4);
      if ((*(short *)(piVar1 + 6) != 0) && ((*(unsigned char *)((int)piVar1 + 0x3e) & 0x80) == 0)) {
        (*(int (**)())(*piVar1 + 0x5c))(piVar1,param_2);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x80));
  }
  return;
}

