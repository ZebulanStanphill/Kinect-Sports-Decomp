extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82B81860(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  __int64 lStack00000048;
  
  lStack00000048 = 0;
  uVar1 = *(unsigned int *)(param_1 + 0x30) & 0xffff0000;
  if (uVar1 != 0xffff0000) {
    puVar2 = (unsigned int *)param_3;
    param_7 = (unsigned __int64)*puVar2 & 0x1f;
    if (param_7 == 0x11) {
      lStack00000048 = 0xde6;
    }
    else if (param_7 == 0x12) {
      lStack00000048 = 0xde7;
    }
    if (uVar1 != 0xffff0000) {
      if ((puVar2[1] & 0x10000000) != 0) {
        uVar1 = puVar2[2];
        param_7 = (unsigned __int64)uVar1 & 1;
        if ((uVar1 & 1) == 0) {
          if ((*(unsigned int *)(param_2 + 0x14) & 1) == 0) {
            lStack00000048 = ((unsigned __int64)(uVar1 >> 0xe) & 3) + 0xe2e;
          }
          else {
            lStack00000048 = 0xde5;
          }
        }
      }
      *puVar2 = *puVar2 | 0x80000;
    }
  }
  if (((int)lStack00000048 != 0) && ((param_4 & 0xff) != 0)) {
    uStack00000038 = 0xffffffffffff0000;
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(param_1,lStack00000048,&stack0x00000020);
  }
  return lStack00000048;
}

