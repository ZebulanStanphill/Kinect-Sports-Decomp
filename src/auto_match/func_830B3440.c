extern int fn_82A1E658();


unsigned __int64 fn_830B3440(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar1 = fn_82A1E658();
    *(unsigned int *)(param_1 + 0xec) = 0;
    if (iVar1 == 0) {
      return 0xffffffff80004005;
    }
  }
  return 0;
}

