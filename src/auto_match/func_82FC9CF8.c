extern void *memset(void *, int, unsigned int);


void fn_82FC9CF8(int param_1)

{
  if (*(unsigned int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(*(unsigned int *)(param_1 + 8),0,*(unsigned int *)(param_1 + 0xc));
  }
  if (*(unsigned int *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(*(unsigned int *)(param_1 + 0xe0),0,*(unsigned int *)(param_1 + 0xe4));
  }
  return;
}

