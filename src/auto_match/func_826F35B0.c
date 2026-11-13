extern int fn_826841C0();


void fn_826F35B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xc);
  if (piVar1 == (int *)0x0) {
    fn_826841C0(param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x826f35e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*piVar1 + 4))(piVar1,param_2);
  return;
}

