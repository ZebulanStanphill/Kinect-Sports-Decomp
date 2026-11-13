void fn_82D55CE8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 0xc);
  iVar1 = *(int *)(param_3 + 0x10) * 0xc + iVar2;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    if (*(int **)(iVar2 + 8) != (int *)0x0) {
      (**(int (***)())(**(int **)(iVar2 + 8) + 0x28))(param_1,param_2);
    }
  }
  return;
}

