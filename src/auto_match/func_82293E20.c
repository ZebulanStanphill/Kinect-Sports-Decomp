extern int fn_82299AC8();
extern int fn_82299D40();
extern int fn_82299E90();
extern int fn_82F64988();
extern unsigned int ltcg_pool_0_0f;


void fn_82293E20(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  
  *(float *)(param_3 + 0x1830) = (float)param_2;
  iVar1 = param_3 + 0x2c;
  *(float *)(param_3 + 0x182c) = (float)param_1;
  fn_82F64988(iVar1,0x400);
  *(unsigned int *)(param_3 + 0x1834) = (unsigned int)(param_6 != 0);
  if ((param_6 & 0xffffffff) != 0) {
    fn_82F64988(param_3 + 0x82c,0x400,param_6);
  }
  *(unsigned int *)(param_3 + 0x1838) = (unsigned int)(param_7 != 0);
  if ((param_7 & 0xffffffff) != 0) {
    fn_82F64988(param_3 + 0x102c,0x400,param_7);
  }
  if (*(float *)(param_3 + 0x182c) == ltcg_pool_0_0f) {
    if (*(int *)(param_3 + 0x1834) == 0) {
      fn_82299AC8(*(unsigned int *)(param_3 + 0x1848),iVar1);
    }
    else if (*(int *)(param_3 + 0x1838) == 0) {
      fn_82299D40(*(unsigned int *)(param_3 + 0x184c),iVar1,param_3 + 0x82c);
    }
    else {
      fn_82299E90(*(unsigned int *)(param_3 + 0x184c),param_3 + 0x102c,iVar1,param_3 + 0x82c);
    }
  }
  return;
}

