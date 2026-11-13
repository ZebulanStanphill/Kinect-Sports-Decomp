void fn_82717A20(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa8);
  *(unsigned int *)(param_1 + 0x8c) =
       (unsigned int)((param_2 & 0xff) << 0x10) & 0x30000 | *(unsigned int *)(param_1 + 0x8c) & 0xfffcffff;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(iVar3 + *(int *)(param_1 + 0xa4));
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0xa4))(piVar1,param_2);
      }
      uVar2 = uVar2 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 != 0);
  }
  return;
}

