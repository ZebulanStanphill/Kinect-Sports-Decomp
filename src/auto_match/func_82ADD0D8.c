extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int fn_82ADD0D8(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    do {
      param_8 = (unsigned __int64)*(unsigned int *)(uVar1 + 0x30) & 0x80000;
      if ((*(unsigned int *)(uVar1 + 0x30) & 0x80000) != 0) break;
      uVar1 = *(unsigned int *)(uVar1 + 0x34);
    } while (uVar1 != 0);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
  fn_82AA64F8(*(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x12c0,&stack0x00000020);
}

