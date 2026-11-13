extern int fn_826824B0();
extern int fn_82696BC8();
extern int fn_826B32D0();
extern int fn_827451A8();


unsigned char * fn_8271D8E0(unsigned char *param_1,int param_2,float *param_3)

{
  unsigned __int64 uVar1;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  *param_1 = 0;
  uVar1 = fn_826B32D0(param_2,*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x28c),
                            *(int *)(param_2 + 0x78) + 0x44,0,0xffffffffffffffff);
  dStack_38 = (double)param_3[3];
  dStack_40 = (double)param_3[2];
  dStack_48 = (double)param_3[1];
  dStack_50 = (double)*param_3;
  fn_827451A8(uVar1,param_2,&dStack_50);
  fn_82696BC8(param_1,uVar1);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_826824B0(uVar1);
  }
  return param_1;
}

