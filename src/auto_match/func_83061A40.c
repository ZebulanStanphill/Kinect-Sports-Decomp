extern int fn_83062D28();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_83061A40(int param_1,int param_2,unsigned int param_3)

{
  struct { int first; unsigned int second; } stack_pair_30;

  
  stack_pair_30.first = param_2;
  stack_pair_30.second = param_3;
  fn_83062D28(param_1 + 4,&stack_pair_30.first);
  *(unsigned char *)(param_1 + 0x14) = 0;
  stack_pair_30.first = param_1;
  fn_83062D28(param_2 + 4,&stack_pair_30.first);
  *(unsigned char *)(param_2 + 0x14) = 0;
  return;
}

