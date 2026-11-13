extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern int fn_82967E78();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_130;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


unsigned __int64
fn_82979498(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  unsigned char auStack_150 [32];
  int iStack_130;
  unsigned char auStack_120 [288];
  
  uStack00000014 = (unsigned int)param_1;
  uStack0000001c = (unsigned int)param_2;
  if (param_3 != 0) {
    if (4 < param_3) {
      return 0;
    }
    uVar2 = 1;
    uStack00000024 = param_3;
    uStack0000002c = param_4;
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    uStack00000044 = param_7;
    uStack0000004c = param_8;
    if (1 < param_3) {
      do {
        iVar1 = fn_82967E78(param_1);
        if (iVar1 == 0) break;
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (unsigned __int64)param_3);
    }
    if ((uVar2 & 0xffffffff) != (unsigned __int64)param_3) {
      iVar1 = param_3 << 2;
      iStack_130 = iVar1;
      fn_82F68CC0(auStack_150,param_2,iVar1);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_120,0,iVar1);
    }
  }
  return 1;
}

