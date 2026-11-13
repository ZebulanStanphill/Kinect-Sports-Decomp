extern int fn_82F63108();


void fn_82393C18(int param_1,unsigned __int64 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(int (***)())(**(int **)(param_1 + 0x20) + 4))
            ((double)*(float *)(param_1 + 0x60),*(int **)(param_1 + 0x20),param_2,
             *(unsigned int *)(param_1 + 0x70),*(unsigned char *)(param_1 + 0x80));
  return;
}

