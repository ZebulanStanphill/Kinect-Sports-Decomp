extern int fn_83049930();


int fn_83049B60(int *param_1,int param_2,int param_3)

{
  int uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x83049b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(*param_1 + 0x20))();
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = fn_83049930(param_1,param_3);
    return uVar1;
  }
  return 1;
}

