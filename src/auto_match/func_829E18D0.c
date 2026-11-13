extern unsigned int *auStack_40;
extern int fn_829E0B08();
extern int fn_829E11B8();
extern int fn_829E1800();
extern int fn_82A2B2F0();
extern int fn_82A2B3B0();
extern int fn_82F691F0();
extern unsigned int uStack_38;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int fn_829E18D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;
  
  uStack_38 = 0;
  uVar1 = fn_829E0B08(*(unsigned __int64 *)(param_1 + 8));
  if (-1 < (int)uVar1) {
    if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_2,0,param_3);
    }
    uVar1 = fn_829E11B8(auStack_40);
    if (((-1 < (int)uVar1) && (uVar1 = fn_829E1800(param_1,auStack_40), -1 < (int)uVar1)) &&
       (uVar1 = fn_82A2B2F0(0xffffffff82057520,0), -1 < (int)uVar1)) {
      uVar1 = fn_82A2B3B0(0xffffffff82057520,*(unsigned __int64 *)(param_1 + 8),(int)param_2,
                                (((unsigned __int64)(uStack_38) >> 0) & 0xFFFFFFFF),0);
      uVar1 = (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return uVar1;
}

