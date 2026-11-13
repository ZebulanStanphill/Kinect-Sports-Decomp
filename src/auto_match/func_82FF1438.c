extern int fn_82FF0BA8();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82FF1438(int param_1,unsigned char param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_10;

  
  stack_pair_10.first = 0;
  stack_pair_10.second = 4;
  *(unsigned char *)(param_1 + 0xda) = (param_2 & 1) << 4 | 0x20 | *(unsigned char *)(param_1 + 0xda) & 0xef;
  fn_82FF0BA8(param_1,&stack_pair_10.first);
  return;
}

