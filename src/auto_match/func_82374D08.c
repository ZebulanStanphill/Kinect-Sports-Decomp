extern int fn_8229F758();
extern int fn_822A02D8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_18;


void fn_82374D08(double param_1,int param_2)

{
  int iVar1;
  int iStack_20;
  int iStack_1c;
  unsigned __int64 uStack_18;
  
  iVar1 = *(int *)(param_2 + 0xd4);
  uStack_18 = (unsigned __int64)(((unsigned __int64)(uStack_18) >> 32) & 0xFFFFFFFF);
  iStack_1c = 0;
  iStack_20 = 0;
  if ((double)ltcg_pool_0_0f < param_1) {
    fn_822A02D8(param_2,&uStack_18,&iStack_1c,&iStack_20);
  }
  uStack_18 = (unsigned __int64)(((unsigned __int64)(uStack_18) >> 0) & 0xFFFFFFFF);
  fn_8229F758((double)(__int64)uStack_18,(double)(__int64)iStack_1c,
                    (double)(__int64)iStack_20,*(unsigned int *)(iVar1 + 0xc));
  return;
}

