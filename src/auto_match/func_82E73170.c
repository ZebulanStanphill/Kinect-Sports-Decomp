extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82E73170(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  
  uVar2 = *(unsigned __int64 *)(param_2 + 6);
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),&uStack_30);
  if (-1 < iVar1) {
    if (((((unsigned __int64)(uStack_28) >> 16) & 0xFFFF) == 0) || (uVar2 < *(unsigned __int64 *)(param_1 + 0x1e0))) {
      *(unsigned __int64 *)(param_1 + 0x1e0) = uVar2;
    }
    (**(int (***)())(*param_2 + 4))(param_2,*(unsigned int *)(param_1 + 0x1d8));
  }
  return;
}

