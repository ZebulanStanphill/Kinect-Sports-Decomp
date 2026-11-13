void fn_82CE3E48(unsigned int *param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 1) == 0) {
    return;
  }
  sVar1 = *(short *)((int)param_1 + 6) + -1;
  *(short *)((int)param_1 + 6) = sVar1;
  if (sVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82ce3e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*param_1)(param_1,1);
  return;
}

