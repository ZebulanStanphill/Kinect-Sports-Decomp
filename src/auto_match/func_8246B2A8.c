extern int fn_8246AFB0();
extern int fn_8246B320();
extern unsigned int lbl_821917C0;
extern unsigned int ltcg_pool_0_0f;


void fn_8246B2A8(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x80) = *param_2;
  if (*(int *)(param_1 + 8) == 3) {
    fn_8246B320((double)*(float *)(param_1 + 0x8c),(double)*(float *)(param_1 + 0x90),param_1,
                      param_1 + 0x80,param_3,param_4,1);
    uVar1 = lbl_821917C0;
    *(unsigned int *)(param_1 + 0x8c) = ltcg_pool_0_0f;
    *(unsigned int *)(param_1 + 0x90) = uVar1;
  }
  else {
    fn_8246AFB0(param_1,3);
  }
  return;
}

