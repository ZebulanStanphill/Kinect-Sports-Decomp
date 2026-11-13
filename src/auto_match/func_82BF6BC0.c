extern int fn_82BE8D50();


unsigned __int64 fn_82BF6BC0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      if (param_2 == iVar2) {
        if ((iVar1 == param_2) || (*(int *)(param_1 + 0xc) == param_2)) {
          if (iVar1 == param_2) {
            iVar1 = *(int *)(iVar1 + 8);
            *(int *)(param_1 + 8) = iVar1;
            if (iVar1 != 0) {
              *(unsigned int *)(iVar1 + 0xc) = 0;
            }
          }
          if (*(int *)(param_1 + 0xc) == param_2) {
            iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
            if (iVar1 != 0) {
              *(unsigned int *)(iVar1 + 8) = 0;
            }
            *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0xc);
          }
        }
        else {
          iVar1 = *(int *)(param_2 + 0xc);
          iVar2 = *(int *)(param_2 + 8);
          *(int *)(iVar1 + 8) = iVar2;
          *(int *)(iVar2 + 0xc) = iVar1;
        }
        fn_82BE8D50(param_2);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        return 1;
      }
    }
  }
  return 0;
}

