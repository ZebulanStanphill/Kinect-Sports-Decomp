extern int fn_82359C18();
extern int fn_82F63108();


void fn_8238EEF0(int param_1)

{
  int iVar1;
  unsigned int uVar3;
  __int64 lVar2;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    uVar3 = *(unsigned int *)(param_1 + 0x88);
    iVar1 = 0;
    if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
      iVar1 = **(int **)(param_1 + 0x7c);
    }
    if (*(unsigned int *)(iVar1 + 8) <= uVar3) {
      uVar3 = uVar3 - *(unsigned int *)(iVar1 + 8);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + uVar3 * 4);
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))();
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_82359C18(*(unsigned int *)(*(int *)(param_1 + 0x88) * 4 + *(int *)(param_1 + 0x80)));
      uVar3 = *(int *)(param_1 + 0x88) + 1;
      *(unsigned int *)(param_1 + 0x88) = uVar3;
      if (*(unsigned int *)(param_1 + 0x84) <= uVar3) {
        *(unsigned int *)(param_1 + 0x88) = 0;
      }
      lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8c) - 1;
      *(int *)(param_1 + 0x8c) = (int)lVar2;
      if (lVar2 == 0) {
        *(unsigned int *)(param_1 + 0x88) = 0;
      }
    }
  }
  return;
}

