void fn_83035078(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    do {
      piVar1 = *(int **)(iVar2 + 8);
      if ((piVar1 != (int *)0x0) && (*(short *)(piVar1 + 6) != 0)) {
        (*(int (**)())(*piVar1 + 0x34))(piVar1,param_2);
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(param_1 + 0x14));
  }
  return;
}

