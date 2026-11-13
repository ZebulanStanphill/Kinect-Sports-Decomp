extern unsigned int *auStack_230;
extern unsigned int *auStack_238;
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82f3ce84) */

__int64 fn_82F3CCA8(int param_1)

{
  __int64 lVar1;
  unsigned int auStack_238 [2];
  unsigned char auStack_230 [560];
  
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0xc))
                    (*(int **)(param_1 + 0x54),0xffffffff82154b18,auStack_238);
  if (-1 < lVar1) {
    if (auStack_238[0] < 0x80) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_230,0,0x200);
    }
    lVar1 = -0x3ff2c174;
  }
  return lVar1;
}

