extern int fn_82F64988();


void fn_8227B8D0(double param_1,double param_2,int param_3,int param_4,int param_5,
                  unsigned __int64 param_6,unsigned int param_7,unsigned int param_8,unsigned __int64 param_9,
                  unsigned int param_10)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int in_stack_00000054;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  
  iVar1 = param_4 * 0xdc + param_3;
  puVar2 = (unsigned int *)(iVar1 + 0xa9c);
  if (param_5 != 0) {
    puVar2 = (unsigned int *)(iVar1 + 0xb00);
  }
  *(unsigned int *)(param_3 + 0xa78) = 1;
  fn_82F64988(puVar2 + 3,0x20,param_6);
  puVar2[0x13] = (float)param_1;
  puVar2[0x16] = (float)param_2;
  puVar2[1] = param_7;
  puVar2[2] = param_8;
  puVar2[0x14] = param_10;
  puVar2[0x15] = in_stack_00000054;
  puVar2[0x17] = in_stack_00000064;
  puVar2[0x18] = in_stack_0000006c;
  *puVar2 = 1;
  return;
}

