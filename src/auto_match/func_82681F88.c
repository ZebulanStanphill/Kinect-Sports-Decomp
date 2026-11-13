void fn_82681F88(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = param_1[2];
  if ((uVar1 & 0x70000000) != 0x10000000) {
    return;
  }
  if ((uVar1 & 0xfffffff) != 0) {
    param_1[2] = uVar1 & 0x8fffffff;
                    /* WARNING: Could not recover jumptable at 0x82681fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(int (**)())*param_1)(param_1,2);
    return;
  }
  param_1[2] = uVar1 & 0x8fffffff | 0x20000000;
                    /* WARNING: Could not recover jumptable at 0x82681fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*param_1)(param_1,4);
  return;
}

