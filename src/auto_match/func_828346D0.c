extern int fn_82834388();


void fn_828346D0(unsigned int *param_1,int param_2,unsigned param_3)

{
  struct { unsigned int first; unsigned int second; unsigned int third; } stack_pair_30;


  
  stack_pair_30.first = *(unsigned int *)(param_2 + -0xc);
  stack_pair_30.second = *(unsigned int *)(param_2 + -8);
  stack_pair_30.third = *(unsigned int *)(param_2 + -4);
  *(unsigned int *)(param_2 + -0xc) = *param_1;
  *(unsigned int *)(param_2 + -8) = param_1[1];
  *(unsigned int *)(param_2 + -4) = param_1[2];
  fn_82834388(param_1,0,((param_2 - (int)param_1) + -0xc) / 0xc,&stack_pair_30.first,param_3);
  return;
}
