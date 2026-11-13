extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82573F30();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82574110(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_82517978(&stack_pair_20.first,*param_1,param_1[1],0);
  fn_82573F30(&stack_pair_20.first,param_3);
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  return;
}

