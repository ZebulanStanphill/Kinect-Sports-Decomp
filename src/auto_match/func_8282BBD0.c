extern int fn_82822F60();
extern int fn_828252E8();
extern void fn_8282B948(void);


void fn_8282BBD0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  int aiStack_50;
  
  aiStack_50 = fn_828252E8(param_1,0x28);
  *(unsigned int *)(aiStack_50 + 0x18) = param_2;
  *(unsigned int *)(aiStack_50 + 0x20) = param_5;
  *(unsigned int *)(aiStack_50 + 0x10) = param_4;
  *(unsigned int *)(aiStack_50 + 0x14) = param_3;
  *(unsigned int *)(aiStack_50 + 0x1c) = param_6;
  *(unsigned int *)(aiStack_50 + 0x24) = param_7;
  fn_82822F60(param_1 + 0x318,aiStack_50,fn_8282B948,&aiStack_50);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}

