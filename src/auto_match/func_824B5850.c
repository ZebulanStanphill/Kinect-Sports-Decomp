extern int fn_824B58A8();
extern int iRam831c4624;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C4618;


double fn_824B5850(int param_1,unsigned __int64 param_2)

{
  double dVar1;
  
  dVar1 = (double)fn_824B58A8(param_1,param_2,iRam831c4624);
  *(float *)(param_1 + 0x48) = (float)dVar1;
  if (lbl_831C4618 != iRam831c4624) {
    dVar1 = (double)fn_824B58A8(param_1,param_2);
  }
  *(float *)(param_1 + 0x4c) = (float)dVar1;
  return (double)ltcg_pool_0_0f;
}

