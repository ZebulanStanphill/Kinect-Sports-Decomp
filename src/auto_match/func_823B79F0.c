extern int fn_822315A0();
extern int fn_823B8608();
extern int fn_82517978();
extern unsigned int iStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_823B79F0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 *param_3,unsigned int *param_4)

{
  unsigned __int64 uStack_20;
  struct { unsigned int first; int second; } stack_pair_18;

  
  uStack_20 = *param_3;
  stack_pair_18.first = 0;
  stack_pair_18.second = 0;
  fn_82517978(&stack_pair_18.first,*param_4,param_4[1],0);
  fn_823B8608(param_1 + 0xac,&uStack_20);
  if (stack_pair_18.second != 0) {
    fn_822315A0();
  }
  return;
}

