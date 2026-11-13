extern int fn_8229F758();
extern int fn_8229F858();
extern int fn_8229FF28();
extern float lbl_82005748;
extern unsigned int ltcg_pool_0_0f;


void fn_8236B950(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(**(int **)(param_2 + 0x4b0) + 0xd4);
  fn_8229FF28(*(unsigned int *)(iVar1 + 0xc));
  fn_8229F758((double)ltcg_pool_0_0f,(double)(__int64)(int)param_1,
                    (double)(__int64)
                            (int)((float)(param_1 - (double)(__int64)(int)param_1) * lbl_82005748),
                    *(unsigned int *)(iVar1 + 0xc));
  fn_8229F858(*(unsigned int *)(iVar1 + 0xc),param_5);
  return;
}

