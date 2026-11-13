extern int fn_82491F70();


unsigned int *
fn_824916D0(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  *(unsigned char *)((int)param_1 + 0x11) = *(unsigned char *)((int)param_2 + 0x11);
  *(unsigned char *)((int)param_1 + 0x12) = *(unsigned char *)((int)param_2 + 0x12);
  fn_82491F70(param_1,0,*param_2,param_2[1],param_5,param_6,param_2 + 4);
  return param_1;
}

