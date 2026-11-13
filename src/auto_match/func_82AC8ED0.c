extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AC8ED0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack00000020;
  __int64 lStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  __int64 lStack00000040;
  unsigned __int64 uStack00000048;
  
  uVar1 = (param_2 & 0xffffffff) >> 2;
  lStack00000028 = (((param_2 & 0xffffffff) >> 8) + 1) * 8;
  uVar3 = uVar1 & 0x3c;
  uStack00000048 =
       param_2 & ~(((2L << ((uVar1 & 0x3ffffffc) + 3 & 0x3f)) - 1U &
                    *(unsigned __int64 *)((int)lStack00000028 + (int)param_1) & -1L << uVar3) >> uVar3 &
                  0xffffffff) & 0xf;
  if (uStack00000048 == 0) {
    return;
  }
  param_2 = param_2 & 0xfffffff0;
  uVar1 = param_2 >> 2 & 0x3c;
  lStack00000040 = ((param_2 >> 8) + 1) * 8;
  iVar2 = (int)lStack00000040;
  uStack00000030 = *(unsigned __int64 *)(iVar2 + (int)param_1);
  uStack00000020 = param_2 >> 4;
  uStack00000038 =
       ((2L << ((param_2 >> 2) + 3 & 0x3f)) - 1U & -1L << uVar1 & uStack00000030) >> uVar1 &
       uStack00000048;
  if (uStack00000038 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(*param_1,0xdc6,&stack0x00000020);
  }
  *(unsigned __int64 *)(iVar2 + (int)param_1) =
       uStack00000048 << uVar1 | *(unsigned __int64 *)(iVar2 + (int)param_1);
  return;
}

