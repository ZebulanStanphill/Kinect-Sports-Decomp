unsigned __int64 fn_82CF8AA0(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (param_3 < 0x221) {
    if (param_3 == 0) {
      return 0;
    }
    iVar1 = *(int *)(((param_3 + 0xf >> 4) + 0x3c) * 4 + param_1);
    if (iVar1 != 0) {
      return (unsigned __int64)*(unsigned int *)(iVar1 + 4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x82cf8aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(int (***)())(*(int *)(param_1 + 0x2c) + 0x10))(param_1 + 0x2c);
  return uVar2;
}

