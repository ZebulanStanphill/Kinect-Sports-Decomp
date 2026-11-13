extern int fn_82A1EFC0();


unsigned __int64 fn_82BD7F98(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == param_1[1]) {
      param_1[1] = 0;
    }
    *param_1 = *(int *)(iVar1 + 4);
    *(unsigned int *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(iVar1,0,8);
  }
  return 0xffffffff8007007a;
}

