extern int fn_8265C940();
extern int fn_82A93E40();
extern int fn_82A93F70();


unsigned __int64
fn_82A10800(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  
  uVar1 = fn_82A93E40(param_2,param_3,param_4,param_5,param_6,param_7,0,1);
  uVar2 = fn_8265C940(uVar1,(~param_6 & 4) << 0x1a | 0xffffffffac9c0000);
  *(int *)(in_stack_00000054 + 0x34) = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff8007000e;
    *in_stack_0000005c = 0;
  }
  else {
    fn_82A93F70(in_stack_00000054,uVar2);
    uVar3 = 0;
    *in_stack_0000005c = (int)uVar1;
  }
  return uVar3;
}

