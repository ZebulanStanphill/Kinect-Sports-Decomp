unsigned __int64 fn_82930430(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_1 != (unsigned int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82930444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(int (***)())*param_1)();
    return uVar1;
  }
  return (unsigned __int64)(param_2 == 0);
}

