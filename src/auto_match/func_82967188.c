void fn_82967188(int param_1,int param_2,int *param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  if (*(unsigned int *)(param_2 + 0x38) != param_4) {
    *(int *)(param_2 + 0x38) = (int)param_4;
    uVar2 = 0;
    *param_3 = *param_3 + 1;
    if (*(unsigned int *)(param_2 + 0x14) > 0) {
      iVar1 = 0;
      do {
        fn_82967188(param_1,*(unsigned int *)
                               (*(int *)(*(int *)(param_2 + 0x18) + iVar1) * 4 +
                               *(int *)(param_1 + 0x18)),param_3,param_4);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (uVar2 < *(unsigned int *)(param_2 + 0x14));
    }
  }
  return;
}

