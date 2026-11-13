extern unsigned int *auStack_160;
extern unsigned int *auStack_1b0;
extern int fn_82E79690();
extern int memset();


unsigned __int64 fn_82E7B110(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned int *in_r7;
  unsigned char auStack_1b0 [80];
  unsigned char auStack_160 [320];
  
  if (in_r7 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *in_r7 = 0;
    uVar1 = fn_82E79690(param_1,auStack_1b0);
    if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      memset(auStack_160,0,0x125);
    }
  }
  return uVar1;
}

