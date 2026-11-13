void fn_82DF4360(double param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30);
  if (0 < (int)*(unsigned int *)(param_2 + 0x30)) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_2 + 0x2c) + iVar3);
      if ((param_1 < (double)(float)piVar1[5]) && ((*(unsigned char *)(piVar1 + 3) & 1) == 0)) {
        (**(int (***)())(*piVar1 + 0xc))();
        *(unsigned char *)(piVar1 + 3) = *(unsigned char *)(piVar1 + 3) | 1;
      }
      uVar2 = uVar2 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 != 0);
  }
  return;
}

