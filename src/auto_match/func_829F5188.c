extern int fn_829F8170();
extern int iRam83218c38;


unsigned __int64
fn_829F5188(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  int in_stack_0000008c;
  
  if ((in_stack_0000008c == 0) || (iRam83218c38 == 0)) {
    uVar1 = 0x57;
  }
  else {
    uVar1 = fn_829F8170(iRam83218c38,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar1;
}

