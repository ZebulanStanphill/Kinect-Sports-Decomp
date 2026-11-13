extern int fn_82CE4118();


void fn_82DF4648(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = 0;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      if ((*(unsigned char *)(*(int *)(iVar4 + *(int *)(param_1 + 0x2c)) + 0xc) & 1) != 0) {
        fn_82CE4118();
        iVar1 = *(int *)(param_1 + 0x30) + -1;
        *(int *)(param_1 + 0x30) = iVar1;
        if (iVar1 != iVar3) {
          *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x2c)) =
               *(unsigned int *)(iVar1 * 4 + *(int *)(param_1 + 0x2c));
        }
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + -4;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < iVar2);
  }
  return;
}

