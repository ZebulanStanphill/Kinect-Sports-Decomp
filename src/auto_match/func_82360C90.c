extern int fn_82359108();
extern int fn_82359200();
extern int fn_82417F58();
extern unsigned int ltcg_pool_0_0f;


void fn_82360C90(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)((int)param_1 + 0xa0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
    uVar2 = fn_82417F58((double)ltcg_pool_0_0f,*(unsigned int *)((int)param_1 + 0x2b20));
    fn_82359108(param_1,uVar2,0);
  }
  else {
    fn_82359200((double)ltcg_pool_0_0f,param_1,param_2,param_2);
  }
  return;
}

