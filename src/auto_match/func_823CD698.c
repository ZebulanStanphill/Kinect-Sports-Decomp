extern int fn_82369668();
extern int fn_8236A360();
extern int fn_8236A6E8();
extern int fn_823C4C00();
extern int fn_823CDF08();
extern int fn_823D7F10();
extern int fn_824FE498();
extern unsigned int ltcg_pool_0_0f;


void fn_823CD698(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  ,unsigned __int64 param_6,int param_7)

{
  int iVar1;
  
  fn_824FE498(*(unsigned int *)(param_1 + 0xe10));
  fn_823CDF08(param_1,*param_2,param_2[1],param_5,param_4,param_3,param_6,0);
  fn_823D7F10(param_1,param_2);
  if (param_7 == 0) {
    iVar1 = param_2[1] * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
    iVar1 = param_2[1] * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
    fn_8236A6E8(param_1,8);
    fn_8236A360(param_1,8);
    iVar1 = *param_2;
    if (((*(int *)(param_1 + 0x41c) != 5) || (param_2[1] != *(int *)(param_1 + 0x420))) ||
       (iVar1 != *(int *)(param_1 + 0x420))) {
      *(int *)(param_1 + 0x420) = param_2[1];
      *(int *)(param_1 + 0x424) = iVar1;
      *(unsigned int *)(param_1 + 0x41c) = 5;
      *(unsigned int *)(param_1 + 0x428) = ltcg_pool_0_0f;
    }
    fn_823C4C00(param_1,param_2[1]);
    return;
  }
  if (param_7 != 2) {
    return;
  }
  fn_8236A6E8(param_1,8);
  fn_8236A360(param_1,8);
  fn_82369668(param_1,param_2[1],*param_2);
  return;
}

