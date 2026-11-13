extern unsigned int *auStack_2c;
extern int fn_82359200();
extern int fn_82359108();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_30;


void fn_823981A0(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uStack_30;
  unsigned int auStack_2c;

  if ((param_1[0x28] == 0) || (*(int *)(param_1[0x28] + 0x40) != 1)) {
    auStack_2c = 0;
    uStack_30 = 0;
    iVar1 = (**(int (***)())(*param_1 + 0x70))(param_1,&auStack_2c,&uStack_30);
    if (0 < iVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82359108((double)ltcg_pool_0_0f,param_1,uStack_30);
    }
  }
  else {
    fn_82359200((double)ltcg_pool_0_0f,param_1,param_2,param_2);
  }
  return;
}
