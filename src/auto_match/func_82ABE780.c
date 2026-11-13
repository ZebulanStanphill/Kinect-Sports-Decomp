extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int fn_82ABE780(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  uStack00000048 = (unsigned __int64)uVar1 & 1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 != 0) &&
       (uStack00000048 = (unsigned __int64)*(unsigned int *)(uVar1 + 8) & 0x3f80, uStack00000048 == 0x3f00)) {
      uVar2 = *(unsigned int *)(uVar1 + 0x14) >> 0x10;
      uStack00000048 = (unsigned __int64)uVar2 & 1;
      if ((uVar2 & 1) != 0) {
        return *(unsigned int *)(uVar1 + 0x14) & 0xfff;
      }
    }
  }
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
  fn_82AA64F8(*(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x12c0,&stack0x00000020);
}

