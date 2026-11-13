extern int fn_82640058();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_825D4E20(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  *(unsigned int *)(param_1 + 0x2f04) = 7;
  *(unsigned int *)(param_1 + 0x28dc) =
       *(unsigned int *)(param_1 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(param_1 + 0x3148) != 0) & 7;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x2000000000;
  uVar1 = lbl_821CA460;
  *(unsigned int *)(param_1 + 0x17d0) = uVar2;
  *(unsigned int *)(param_1 + 0x17d4) = uVar1;
  *(unsigned int *)(param_1 + 0x17d8) = uVar2;
  *(unsigned int *)(param_1 + 0x17dc) = uVar2;
  *(unsigned __int64 *)(param_1 + 8) = *(unsigned __int64 *)(param_1 + 8) | 0x4000000000000000;
  fn_82640058(param_1,0xd,4,param_2,0x1c);
  *(unsigned int *)(param_1 + 0x2f04) = 0xf;
  *(unsigned int *)(param_1 + 0x28dc) =
       *(unsigned int *)(param_1 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(param_1 + 0x3148) != 0) & 0xf;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x2000000000;
  return;
}

