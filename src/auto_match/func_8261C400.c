extern int fn_82A1E658();
extern int fn_82A1EFC0();


void fn_8261C400(int param_1)

{
  if (*(int *)(param_1 + 0x31c) != 0) {
    fn_82A1E658();
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x30c,0,0x14);
}

