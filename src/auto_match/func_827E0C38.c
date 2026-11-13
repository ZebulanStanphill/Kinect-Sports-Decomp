extern unsigned int *auStack_20;
extern int fn_827E0BD0();


void fn_827E0C38(int param_1,int param_2)

{
  unsigned int auStack_20 [2];
  
  auStack_20[0] = *(unsigned int *)(param_1 + 4);
  fn_827E0BD0(param_1 + 0x44,param_2 << 1,auStack_20);
  *(int *)(param_1 + 0x70) = param_2;
  *(int *)(param_1 + 0x6c) = param_2 + -1;
  return;
}

