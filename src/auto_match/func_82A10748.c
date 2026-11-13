extern int fn_8265C940();
extern int fn_82A93C88();
extern int fn_82A93F70();


unsigned __int64
fn_82A10748(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *in_stack_00000054;
  unsigned int in_stack_0000005c;
  
  uVar1 = fn_82A93C88(param_2,param_3,param_4,param_5,param_6,0,1,0);
  uVar2 = fn_8265C940(uVar1,(~param_5 & 4) << 0x1a | (unsigned __int64)in_stack_0000005c | 0xac9c0000
                           );
  *(int *)(param_8 + 0x34) = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff8007000e;
    *in_stack_00000054 = 0;
  }
  else {
    fn_82A93F70(param_8,uVar2);
    uVar3 = 0;
    *in_stack_00000054 = (int)uVar1;
  }
  return uVar3;
}

