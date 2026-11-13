extern int memset();
extern unsigned int uStack00000014;


unsigned __int64 fn_82B68798(unsigned int param_1)

{
  unsigned __int64 in_r7;
  int in_r8;
  __int64 in_r9;
  unsigned int uStack00000014;

  if (0x10 < in_r8) {
    return 0xffffffffffffffff;
  }
  uStack00000014 = param_1;
                    /* WARNING: Subroutine does not return */
  memset(in_r7,0,(in_r9 + 6) * 3);
}
