extern int fn_8224A980();
extern int fn_8289D8D0();


unsigned __int64 fn_82248C08(int param_1)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))();
  }
  if (iVar3 == 0) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
    }
    if (iVar3 == 0) {
      if (*(unsigned int *)(param_1 + 0x10) < 5) {
        puVar4 = (unsigned int *)(param_1 + 0xc);
      }
      else {
        puVar4 = *(unsigned int **)(param_1 + 0xc);
      }
      return (unsigned __int64)*puVar4;
    }
  }
  uVar1 = fn_8289D8D0(*(unsigned int *)(param_1 + 0x28));
  uVar2 = fn_8224A980(param_1,uVar1);
  return uVar2;
}

