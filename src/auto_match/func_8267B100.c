extern int fn_8267AE38();
extern int fn_8268E898();
extern unsigned int lbl_82005448;


unsigned int *
fn_8267B100(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int in_stack_00000054;
  
  uVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_82005448;
  param_1[1] = 0x1000;
  param_1[0x2c] = 0;
  if (param_1 + 4 != (unsigned int *)0x0) {
    uVar1 = fn_8268E898(param_1 + 4,0x1000);
  }
  param_1[3] = uVar1;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_2,param_3);
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_4,param_5);
  }
  if ((param_6 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_6,param_7);
  }
  if ((param_8 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_8,in_stack_00000054);
  }
  return param_1;
}

