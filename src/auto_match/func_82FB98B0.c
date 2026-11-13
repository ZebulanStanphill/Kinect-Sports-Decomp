extern int memset();


unsigned __int64 fn_82FB98B0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(*(int *)(param_1 + 0x4c),0,
                 ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) +
                  ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) & 0x7fffffff) * 2 & 0xfffffff) << 4);
  }
  return 1;
}

