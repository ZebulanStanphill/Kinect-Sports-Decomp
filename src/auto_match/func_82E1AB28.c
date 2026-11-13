extern int fn_82D001D8();


unsigned __int64 fn_82E1AB28(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = fn_82D001D8();
  if (iVar1 <= *(int *)(param_1 + 0x34)) {
    param_2 = (unsigned __int64)
              *(unsigned int *)(((*(int *)(param_1 + 0x34) + 1) * 2 + iVar1) * 4 + *(int *)(param_1 + 0x2c))
    ;
  }
  return param_2;
}

