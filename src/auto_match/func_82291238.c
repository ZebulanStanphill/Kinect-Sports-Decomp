extern int fn_82279E08();
extern int fn_82F63108();


void fn_82291238(double param_1,int param_2)

{
  *(float *)(param_2 + 0x16c) = (float)(param_1 + (double)*(float *)(param_2 + 0x16c));
  fn_82279E08();
  if (*(int *)(param_2 + 0x160) != 0) {
    if (*(int *)(param_2 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_2 + 0x158) + 4))();
  }
  return;
}

