void fn_82D55C78(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10) * 0xc + iVar3;
  for (; iVar3 != iVar2; iVar3 = iVar3 + 0xc) {
    piVar1 = *(int **)(iVar3 + 8);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0x24))(piVar1,param_2);
    }
  }
  return;
}

