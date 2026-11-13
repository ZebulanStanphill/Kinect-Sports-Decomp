extern unsigned int *auStack_20;
extern int fn_82405638();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int ltcg_pool_0_0f;


void fn_82405D70(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int auStack_20 [4];
  
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  *(unsigned int *)(param_1 + 0x44) = ltcg_pool_0_0f;
  auStack_20[0] = *(unsigned int *)(param_1 + 0x88);
  auStack_20[0] =
       fn_82535298(auStack_20,*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x84c),
                         0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(auStack_20);
  uVar1 = 7;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = 6;
  }
  fn_82405638(param_1,uVar1);
  return;
}

