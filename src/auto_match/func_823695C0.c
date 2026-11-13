extern int fn_822CCA50();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64
fn_823695C0(unsigned __int64 param_1,double param_2,int param_3,int param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  char cVar2;
  
  if (((*(int *)(param_3 + 0x4c0) == 0) &&
      (iVar1 = (*(int *)(param_4 + 0x2c) * 8 + param_5 + 0x412) * 4,
      *(float *)(iVar1 + param_3) <= ltcg_pool_0_0f)) &&
     (cVar2 = fn_822CCA50(*(unsigned int *)(param_4 + 0x18),"cleanongoal" + param_5 * 0xc4,
                                param_5,param_8,0), cVar2 != '\0')) {
    *(float *)(iVar1 + param_3) = (float)param_2;
    return 1;
  }
  return 0;
}

