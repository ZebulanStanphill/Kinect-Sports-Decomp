extern int fn_82F6C420();


void png_read_data(int param_1)

{
  if (*(int (***)())(param_1 + 0x550) != (int (**)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x829b0f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(param_1 + 0x550))();
    return;
  }
  if (*(int (***)())(param_1 + 0x540) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x540))(param_1,0xffffffff820525ec);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F6C420(param_1,1);
}

