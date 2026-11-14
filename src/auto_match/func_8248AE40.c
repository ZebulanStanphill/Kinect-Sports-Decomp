extern int XMemSet();


unsigned __int64 fn_8248AE40(int param_1)

{
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    XMemSet(*(int *)(param_1 + 0xc),0,*(unsigned int *)(param_1 + 0x10));
  }
  return 1;
}

