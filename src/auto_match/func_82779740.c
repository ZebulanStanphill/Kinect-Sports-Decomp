extern int fn_827792C0();
extern unsigned int lbl_82005CCC;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82779740(int param_1)

{
  float fVar1;
  unsigned char uVar2;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_20;
  
  fn_827792C0();
  fVar1 = (float)uStack_20;
  uStack_20 = ((((unsigned __int64)(uStack_20)) & (~(((unsigned __int64)0xFF) << 56))) | ((((unsigned __int64)((unsigned char)(__int64)((float)uStack_30 * lbl_82005CCC))) & ((unsigned __int64)0xFF)) << 56));
  uVar2 = (unsigned char)uStack_20;
  uStack_28 = ((((unsigned __int64)(uStack_28)) & (~(((unsigned __int64)0xFF) << 56))) | ((((unsigned __int64)((unsigned char)(__int64)((float)uStack_28 * lbl_82005CCC))) & ((unsigned __int64)0xFF)) << 56));
  uStack_20 = ((((unsigned __int64)(uStack_20)) & (~(((unsigned __int64)0xFF) << 56))) | ((((unsigned __int64)((unsigned char)(__int64)(fVar1 * lbl_82005CCC))) & ((unsigned __int64)0xFF)) << 56));
  *(unsigned char *)(param_1 + 1) = uVar2;
  *(unsigned char *)(param_1 + 2) = (unsigned char)uStack_28;
  *(unsigned char *)(param_1 + 3) = (unsigned char)uStack_20;
  return;
}

