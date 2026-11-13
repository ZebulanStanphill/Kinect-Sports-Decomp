extern int fn_82528FA8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_824FB0B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  
  if (*(int *)(param_1 + 0x1c0) != 0) {
    stack_pair_20.first = ltcg_pool_0_0f;
    stack_pair_20.second = ltcg_pool_0_0f;
    uStack_18 = ltcg_pool_0_0f;
    iVar1 = fn_82528FA8((double)lbl_821CA460,param_2,param_1 + 0x1c0,0xffffffff821962c0,
                              &stack_pair_20.first,param_5,0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b8) = iVar1;
      *(unsigned int *)(iVar1 + 0x2b0) = lbl_82005748;
      *(unsigned int *)(*(int *)(param_1 + 0x1b8) + 0xb70) = 2;
      *(unsigned char *)(*(int *)(param_1 + 0x1b8) + 0xba0) = 0;
      *(unsigned char *)(*(int *)(param_1 + 0x1b8) + 0xba1) = 0;
      *(int *)(param_1 + 0x20) = iVar1;
    }
  }
  return;
}

