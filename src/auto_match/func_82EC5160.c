#define true 1
extern int fn_82EC3ED8();


void fn_82EC5160(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_000000ac;
  int *in_stack_000000ec;
  int *in_stack_000000f4;
  unsigned int *in_stack_000000fc;
  
  iVar3 = (param_8 + in_stack_0000005c) * 4;
  iVar4 = (in_stack_00000054 + in_stack_00000064) * 4;
  iVar2 = 0xffffff;
  iVar1 = 0xffffff;
  while( true ) {
    if ((iVar2 == iVar3) && (iVar1 == iVar4)) break;
    fn_82EC3ED8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_0000006c);
    fn_82EC3ED8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_0000006c);
    iVar2 = iVar3;
    iVar1 = iVar4;
  }
  *in_stack_000000ec = iVar3;
  *in_stack_000000f4 = iVar4;
  *in_stack_000000fc = in_stack_000000ac;
  return;
}

