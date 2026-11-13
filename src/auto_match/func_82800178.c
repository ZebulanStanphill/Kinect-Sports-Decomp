void fn_82800178(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int (**pcVar1)();
  unsigned int in_stack_0000005c;
  
  if ((*(int *)(param_3 + 0x18) != 0) &&
     (pcVar1 = *(int (***)())((unsigned int)*(unsigned short *)(param_3 + 0x16) * 0x24 + -0x7cea94f8),
     pcVar1 != (int (**)())0x0)) {
    (*pcVar1)(param_1,in_stack_0000005c,*(int *)(param_3 + 0x18));
  }
  return;
}

