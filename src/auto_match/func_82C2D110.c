extern int fn_82C2B580();
extern int memset();


void fn_82C2D110(void)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82C2B580(0x338);
  if ((uVar1 & 0xffffffff) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  memset(uVar1,0,0x338);
}

