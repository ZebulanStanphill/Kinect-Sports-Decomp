extern int fn_8265C940();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82e255a4) */
/* WARNING: Removing unreachable block (ram,0x82e255b8) */
/* WARNING: Removing unreachable block (ram,0x82e255d0) */
/* WARNING: Removing unreachable block (ram,0x82e25614) */
/* WARNING: Removing unreachable block (ram,0x82e255f4) */

unsigned __int64 fn_82E254F8(int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  if ((((*param_1 == 0) && ((param_1[1] == 0 || (param_1[2] == 0)))) ||
      (param_4 == (unsigned int *)0x0)) || (param_2 == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_4 = 0;
    lVar1 = fn_8265C940(0x120,0x208c804d);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar1,0,0x120);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

