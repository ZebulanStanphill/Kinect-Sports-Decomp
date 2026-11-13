extern int fn_8252DCF8();
extern int fn_82637B30();
extern int fn_8263FB38();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;


void fn_82272A28(int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = lbl_8320A898;
  if (*(int *)(param_1 + 0x160) != 0) {
    *(unsigned int *)(lbl_8320A898 + 0x2f14) = 0;
    *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
    iVar1 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
    iVar1 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x29c0) = *(unsigned int *)(lbl_8320A898 + 0x29c0) | 1;
    *(unsigned __int64 *)(iVar1 + 0x20) = *(unsigned __int64 *)(iVar1 + 0x20) | 0x800000000;
    fn_82637B30(lbl_8320A898,0);
    iVar1 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    dVar2 = (double)ltcg_pool_0_0f;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
    iVar1 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
    fn_8263FB38(dVar2,lbl_8320A898);
    fn_8252DCF8((double)*(float *)(param_1 + 300),(double)*(float *)(param_1 + 0x130),
                      (double)*(float *)(param_1 + 0x134),(double)*(float *)(param_1 + 0x138),
                      (double)*(float *)(param_1 + 0x13c),(double)*(float *)(param_1 + 0x140),
                      lbl_8320A898,0xffffffff8326b0c4,*(unsigned int *)(param_1 + 0x128));
  }
  return;
}

