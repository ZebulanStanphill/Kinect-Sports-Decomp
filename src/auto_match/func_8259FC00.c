extern unsigned int *auStack_60;
extern unsigned int fStack_70;
extern int fn_82637B30();
extern int fn_82639EA8();
extern int fn_8263B758();
extern int fn_8263CBB0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


void fn_8259FC00(int param_1,unsigned __int64 param_2)

{
  double dVar1;
  unsigned int uStack_8c;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  float fStack_70;
  unsigned int uStack_6c;
  unsigned char auStack_60 [24];
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  dVar1 = (double)ltcg_pool_0_0f;
  fn_8263B758(param_2,0,auStack_60);
  fStack_70 = (float)dVar1;
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  uStack_6c = lbl_821CA460;
  uStack_8c = (unsigned int)(__int64)((float)uStack_48 * lbl_8218E8E8);
  uStack_78 = uStack_8c;
  uStack_8c = (unsigned int)(__int64)((float)uStack_44 * lbl_8218E8E8);
  uStack_74 = uStack_8c;
  fn_82639EA8(param_1,&stack_pair_80.first);
  *(unsigned int *)(param_1 + 0x2f14) = 0;
  *(unsigned int *)(param_1 + 0x2934) = *(unsigned int *)(param_1 + 0x2934) & 0xfffffffd;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x20800;
  fn_82637B30(param_1,0);
  *(unsigned int *)(param_1 + 0x293c) = *(unsigned int *)(param_1 + 0x293c) & 0xfffffff7;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x40200;
  *(unsigned int *)(param_1 + 0x2948) = *(unsigned int *)(param_1 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x40;
  *(unsigned int *)(param_1 + 0x29c0) = *(unsigned int *)(param_1 + 0x29c0) & 0xfffffffe;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x800000000;
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0();
}

