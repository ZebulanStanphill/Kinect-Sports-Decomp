extern unsigned int *auStack_162e;
extern int fn_82F691F0();
extern unsigned int lbl_832659CD;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228CF80(int param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_162e [5678];
  
  if ((unsigned int *)(param_1 + 0x180) != (unsigned int *)0x0) {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x180);
    if ((uVar1 != (uVar1 - 1) + (unsigned __int64)(uVar1 == 0)) && (lbl_832659CD != '\0')) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_162e,0,0x1fe);
    }
  }
  return;
}

