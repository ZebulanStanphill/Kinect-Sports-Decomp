extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8259B7D8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8259B778(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  fn_82517978(&stack_pair_30.first,*param_1,param_1[1],0);
  fn_8259B7D8(param_4,&stack_pair_30.first,param_2);
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  return;
}

