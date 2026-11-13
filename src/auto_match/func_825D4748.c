extern int fn_8263FB88();
extern int fn_82645EA8();
extern int fn_8264C1F8();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;


unsigned __int64 fn_825D4748(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  uVar2 = ltcg_pool_0_0f;
  uVar1 = lbl_821CA460;
  *(unsigned int *)(param_1 + 0x17d0) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x17d4) = uVar1;
  *(unsigned int *)(param_1 + 0x17d8) = uVar2;
  *(unsigned int *)(param_1 + 0x17dc) = uVar2;
  *(unsigned __int64 *)(param_1 + 8) = *(unsigned __int64 *)(param_1 + 8) | 0x4000000000000000;
  lVar3 = fn_8263FB88(param_1,0xd,param_2,0x1c);
  *param_3 = (int)lVar3;
  if ((__int64)-(unsigned __int64)(lVar3 == 0) < 0) {
    if (param_1 == lbl_8320A898) {
      fn_82645EA8();
    }
    else {
      fn_8264C1F8(param_1,0,0);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

