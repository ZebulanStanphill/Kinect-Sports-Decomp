unsigned __int64 fn_825C2E68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != -1)) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x7c)) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + *(int *)(param_1 + 0x78)) == 0x200a) {
          return 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x10;
      } while (iVar1 < *(int *)(param_1 + 0x7c));
    }
  }
  return 0;
}

