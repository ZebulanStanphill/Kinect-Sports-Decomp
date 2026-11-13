extern int fn_822A6F38();
extern unsigned int lbl_821917C0;
extern unsigned int ltcg_pool_0_0f;


void fn_822A6998(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  double dVar1;
  
  dVar1 = (double)ltcg_pool_0_0f;
  *(float *)(param_1 + 0x528) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x110) = *param_2;
  if (*(int *)(param_1 + 0x108) == 3) {
    fn_822A6F38(dVar1,(double)lbl_821917C0,param_1,param_1 + 0x110,param_3,param_4,1);
  }
  else {
    *(unsigned int *)(param_1 + 0x108) = 3;
    fn_822A6F38(dVar1,(double)lbl_821917C0,param_1,param_1 + 0x110,param_3,param_4,1);
    *(unsigned int *)(param_1 + 0x53c) = 1;
  }
  *(float *)(param_1 + 0x528) = (float)dVar1;
  return;
}

