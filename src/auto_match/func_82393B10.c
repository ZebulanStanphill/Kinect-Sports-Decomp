extern int fn_82F63108();


void fn_82393B10(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(int (***)())(**(int **)(param_1 + 0x20) + 4))
            ((double)*(float *)(param_1 + 0x60),(double)*(float *)(param_1 + 0xa0),
             *(int **)(param_1 + 0x20),0x20,*(unsigned int *)(param_1 + 0x70),
             *(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x90));
  return;
}

