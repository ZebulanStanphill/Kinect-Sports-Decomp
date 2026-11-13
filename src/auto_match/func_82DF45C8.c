extern int fn_82CE4118();


void fn_82DF45C8(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
  if (0 < (int)*(unsigned int *)(param_1 + 0x30)) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(iVar3 + *(int *)(param_1 + 0x2c));
      if ((*(unsigned char *)(piVar1 + 3) & 1) == 0) {
        (**(int (***)())(*piVar1 + 0xc))(piVar1);
        *(unsigned char *)(piVar1 + 3) = *(unsigned char *)(piVar1 + 3) | 1;
      }
      fn_82CE4118(piVar1);
      uVar2 = uVar2 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 != 0);
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  return;
}

