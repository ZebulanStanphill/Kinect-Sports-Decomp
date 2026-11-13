void fn_8270ED30(int param_1,unsigned __int64 param_2,unsigned short param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (param_6 == 5) {
                    /* WARNING: Could not recover jumptable at 0x8270ed58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(*piVar1 + 4))(piVar1,param_2,param_3);
    return;
  }
  if (param_6 != 6) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8270ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),param_2,param_3);
  return;
}

