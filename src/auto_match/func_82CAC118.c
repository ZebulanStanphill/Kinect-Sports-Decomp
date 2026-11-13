extern int fn_82C562F0();
extern int memset();


unsigned __int64 fn_82CAC118(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82C562F0((unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8,0x34,0xffffffff82196582);
  if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(uVar1,0,0x34);
  }
  return 0;
}

