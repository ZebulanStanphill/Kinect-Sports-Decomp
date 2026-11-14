extern int fn_82A1E658();
extern int XMemSet();


void fn_8261C118(int param_1)

{
  if (*(int *)(param_1 + 0x248) != 0) {
    fn_82A1E658();
  }
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 0x23c,0,0x1c);
}

