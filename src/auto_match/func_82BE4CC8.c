#define CONCAT24(h,l) ((unsigned __int64)((((unsigned short)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT26(h,l) ((unsigned __int64)((((unsigned short)(h)) << 48) | ((unsigned __int64)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_38 ((*(unsigned __int64*)&uStack_38))
extern int fn_82BE4690();
extern int fn_82BE5050();
extern int fn_82BE9140();
extern int fn_82BE9168();
extern unsigned int uStack_20;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82BE4CC8(int param_1)

{
  unsigned short uVar1;
  unsigned __int64 uStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned __int64 uStack_30;
  __int64 lStack_28;
  unsigned int uStack_20;
  
  fn_82BE4690();
  if (*(int *)(param_1 + 0xd0) != 0) {
    uStack_20 = 0;
    lStack_28 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd8) << 0x20;
    uStack_30 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
    uStack_40 = 0;
    _uStack_38 = CONCAT44(1,*(unsigned int *)(param_1 + 0xd4));
    uVar1 = fn_82BE9168();
    uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFFFFFF) << 16))) | ((((unsigned __int64)(CONCAT24(uVar1,(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF)))) & ((unsigned __int64)0xFFFFFFFFFFFF)) << 16));
    uVar1 = fn_82BE9140();
    uStack_30 = CONCAT26(uVar1,(((unsigned __int64)(uStack_30) >> 16) & 0xFFFFFFFFFFFF));
    fn_82BE5050(param_1,&uStack_40);
  }
  return;
}

