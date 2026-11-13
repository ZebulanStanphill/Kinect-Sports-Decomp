extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AE5CC8(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  __int64 lStack00000048;
  
  uVar2 = param_2 >> 4 & 0x1f;
  lStack00000048 = ((unsigned __int64)(param_2 >> 9) + 1) * 4;
  iVar1 = (int)lStack00000048;
  uStack00000030 = (unsigned __int64)*(unsigned int *)(iVar1 + (int)param_1);
  uStack00000040 = (unsigned __int64)param_2 & 0xf;
  uStack00000020 = (unsigned __int64)(param_2 >> 4);
  uStack00000038 =
       uStack00000040 & ((2 << uVar2) - 1U & -1 << uVar2 & *(unsigned int *)(iVar1 + (int)param_1)) >> uVar2
  ;
  if (uStack00000038 != 0) {
    uStack00000028 = param_4;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(*param_1,0xdc6,&stack0x00000020);
  }
  *(unsigned int *)(iVar1 + (int)param_1) = (int)uStack00000040 << uVar2 | *(unsigned int *)(iVar1 + (int)param_1);
  return;
}

