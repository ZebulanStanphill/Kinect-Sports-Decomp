extern int fn_8258F748();


void fn_8258F7F0(unsigned __int64 param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *in_r8;
  int *in_r9;
  unsigned __int64 in_r10;
  unsigned int in_stack_00000054;
  
  uVar1 = (**(int (***)())(*in_r8 + 0x10))(in_r8,in_r10);
  uVar2 = (**(int (***)())(*in_r9 + 0x10))(in_r9,in_stack_00000054);
  fn_8258F748(param_1,param_2 + -0xc,uVar1,uVar2);
  return;
}

