int fn_82EF45C0(int *param_1,unsigned int param_2)

{
  int uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
                    /* WARNING: Could not recover jumptable at 0x82ef45e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(int (**)())(*param_1 + 0x40))();
  return uVar1;
}

