extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82e31fec) */
/* WARNING: Removing unreachable block (ram,0x82e31fac) */
/* WARNING: Removing unreachable block (ram,0x82e31fcc) */
/* WARNING: Removing unreachable block (ram,0x82e3200c) */

unsigned __int64 fn_82E31CC0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (unsigned int *)0x0) {
    uVar3 = 0xffffffff80004003;
  }
  else {
    *param_2 = 0;
    uVar1 = *(unsigned int *)(param_1 + 0xb0);
    lVar2 = ((unsigned __int64)uVar1 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar1) {
      lVar2 = -1;
    }
    lVar2 = fn_82E50BE8(lVar2,0,0,0,0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar2,0,uVar1 << 2);
    }
    uVar3 = 0xffffffff8007000e;
  }
  fn_82E50F10(param_1 + 8);
  return uVar3;
}

