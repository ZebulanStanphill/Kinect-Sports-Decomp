extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AE5DE8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  __int64 lStack00000040;
  unsigned __int64 uStack00000048;
  
  uStack00000020 = (param_2 & 0xffffffff) >> 4;
  uVar2 = uStack00000020 & 0x3f;
  lStack00000040 = (((param_2 & 0xffffffff) >> 10) + 1) * 8;
  iVar1 = (int)lStack00000040;
  uStack00000030 = *(unsigned __int64 *)(iVar1 + (int)param_1);
  uStack00000048 = param_2 & 0xf;
  uStack00000038 = ((2L << uVar2) - 1U & -1L << uVar2 & uStack00000030) >> uVar2 & uStack00000048;
  if (uStack00000038 != 0) {
    uStack00000028 = param_4;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(*param_1,0xdc6,&stack0x00000020);
  }
  *(unsigned __int64 *)(iVar1 + (int)param_1) =
       uStack00000048 << uVar2 | *(unsigned __int64 *)(iVar1 + (int)param_1);
  return;
}

