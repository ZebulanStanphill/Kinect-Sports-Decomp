extern int fn_823CC7A0();


void fn_823E6E98(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  *param_3 = param_2;
  param_3[1] = 1;
  piVar1 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x20));
  if (piVar1[1] - *piVar1 >> 2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_823CC7A0();
  }
                    /* WARNING: Subroutine does not return */
  fn_823CC7A0();
}

