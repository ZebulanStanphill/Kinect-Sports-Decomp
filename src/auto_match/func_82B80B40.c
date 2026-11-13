extern unsigned int *auStack_80;
extern int fn_82AA66A8();
extern int fn_82B80788();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


unsigned __int64
fn_82B80B40(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned char auStack_80 [24];
  
  uVar1 = 0;
  if (*(unsigned int *)(param_1 + 0x218) != 0) {
    uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    puVar2 = (unsigned int *)(param_1 + 0x15c);
    do {
      if ((((unsigned __int64)*puVar2 & 0x1f) == (param_2 & 0x1f)) &&
         (((*puVar2 ^ (((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF)) & 0x1e0) == 0)) {
        if (param_4 == 0) {
          return 1;
        }
        uStack00000020 = param_2;
        uStack00000028 = param_3;
        fn_82B80788(param_1,auStack_80,100,*(unsigned int *)(param_4 + 8),
                      *(unsigned int *)(*(int *)(param_5 + 0x1c) + param_6 * 8) >> 0x1b & 0xf);
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdb9,auStack_80);
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 < *(unsigned int *)(param_1 + 0x218));
  }
  return 0;
}

