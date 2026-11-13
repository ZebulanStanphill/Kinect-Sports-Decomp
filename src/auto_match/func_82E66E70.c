extern int fn_82C2B580();
extern int memset();


unsigned __int64 fn_82E66E70(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if ((param_1 == 0) || (param_2 == (unsigned int *)0x0)) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    uVar1 = fn_82C2B580(param_2[10]);
    *param_2 = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(uVar1,0,param_2[10]);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

