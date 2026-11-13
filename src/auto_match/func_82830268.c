extern int fn_82822F60();
extern void fn_8282AF50(void);
extern int fn_828252E8();


void fn_82830268(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int aiStack_30;
  
  aiStack_30 = fn_828252E8(param_1,0x24);
  *(unsigned int *)(aiStack_30 + 0x14) = param_3;
  *(unsigned int *)(aiStack_30 + 0x18) = param_4;
  *(unsigned int *)(aiStack_30 + 0x1c) = param_2;
  fn_82822F60(param_1 + 0x344,aiStack_30,fn_8282AF50,&aiStack_30);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

