extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_82E73080(int param_1)

{
  int iVar1;
  unsigned __int64 uStack_20;
  unsigned __int64 uStack_18;
  
  iVar1 = (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x34))();
  if (-1 < iVar1) {
    uStack_20 = 0;
    uStack_18 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
    (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x14))(*(int **)(param_1 + 0x1d8),&uStack_20);
  }
  return;
}

