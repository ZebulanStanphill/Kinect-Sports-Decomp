extern int fn_827B6420();
extern int fn_827B6880();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_827B74F8(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  stack_pair_60.first = param_4;
  stack_pair_60.second = param_5;
  uStack_58 = param_6;
  uStack_54 = param_7;
  uStack_50 = param_8;
  fn_827B6420(&stack_pair_60.first,param_4,param_3 + 0x2e0,param_3 + 0x2d4);
  stack_pair_60.first = param_4;
  stack_pair_60.second = param_5;
  uStack_58 = param_6;
  uStack_54 = param_7;
  uStack_50 = param_8;
  fn_827B6880(param_2,&stack_pair_60.first);
  return;
}

