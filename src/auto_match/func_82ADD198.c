#define true 1
extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82ADD198(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  __int64 lStack00000030;
  __int64 lStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2a8);
  lStack00000038 = (param_2 & 0x3fffffff) << 2;
  uVar2 = *(unsigned int *)(uVar1 + (int)lStack00000038);
  uStack00000040 = (unsigned __int64)uVar2;
  if ((uStack00000040 != 0) && (uStack00000040 < 0xffff)) {
    if (uStack00000040 != (param_2 & 0xffffffff)) {
      uVar2 = *(unsigned int *)(uVar2 * 4 + uVar1);
      while( true ) {
        uVar3 = (unsigned __int64)uVar2;
        uStack00000048 = (unsigned __int64)uVar1;
        if ((uVar3 == 0) || (0xfffe < uVar3)) break;
        if (uVar3 == uStack00000040) {
          uStack00000020 = param_3;
          uStack00000028 = param_4;
          lStack00000030 = param_5;
                    /* WARNING: Subroutine does not return */
          fn_82AA64F8(param_1,0x12c0,&stack0x00000020);
        }
        *(unsigned int *)(uVar1 + (int)lStack00000038) = uVar2;
        param_5 = ((unsigned __int64)uVar2 & 0x3fffffff) << 2;
        uVar1 = *(unsigned int *)(param_1 + 0x2a8);
        uVar2 = *(unsigned int *)((int)param_5 + uVar1);
        uStack00000040 = uVar3;
      }
    }
    return uStack00000040;
  }
  return param_2;
}

