void fn_826C8620(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xac);
  *(unsigned int *)(param_1 + 0x8c) =
       (unsigned int)((param_2 & 0xff) << 0x10) & 0x30000 | *(unsigned int *)(param_1 + 0x8c) & 0xfffcffff;
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(iVar2 + *(int *)(param_1 + 0xa8));
      (**(int (***)())(*piVar1 + 0xa4))(piVar1,param_2);
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 != 0);
  }
  return;
}

