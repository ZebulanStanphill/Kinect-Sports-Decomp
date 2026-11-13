extern unsigned int *auStack_21e;
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824744D8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_21e [518];
  
  if ((unsigned int *)(param_1 + 0x58) != (unsigned int *)0x0) {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x58);
    if (uVar1 != (uVar1 - 1) + (unsigned __int64)(uVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_21e,0,0x1fe);
    }
  }
  return;
}

