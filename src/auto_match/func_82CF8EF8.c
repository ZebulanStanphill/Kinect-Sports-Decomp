extern int fn_82D015D8();


void fn_82CF8EF8(int param_1,int param_2)

{
  fn_82D015D8(param_2);
  if ((param_2 + 0x34U & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x20c)) {
    *(unsigned int *)(param_1 + 0x20c) = *(unsigned int *)(param_1 + 0x20c) - 0x34;
  }
  return;
}

