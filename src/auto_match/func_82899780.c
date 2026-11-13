extern int fn_82899030();
extern unsigned int lbl_82023A4C;


unsigned int *
fn_82899780(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned int uVar1;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = &lbl_82023A4C;
  fn_82899030(param_1 + 3,param_4,param_5);
  uVar1 = *(unsigned int *)(param_3 + 0x18);
  param_1[8] = 0xffffffff;
  param_1[7] = uVar1;
  return param_1;
}

