extern unsigned int *auStack_20;
extern int fn_82C53960();
extern int fn_82CAB258();
extern int memset();


unsigned __int64 fn_82CABE30(void)

{
  unsigned __int64 uVar1;
  unsigned int auStack_20 [4];
  
  uVar1 = fn_82C53960(0x38,0);
  auStack_20[0] = (unsigned int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(uVar1,0,0x38);
  }
  fn_82CAB258(auStack_20);
  return 0;
}

