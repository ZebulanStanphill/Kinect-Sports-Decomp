typedef unsigned char bool;
extern int fn_82CE09D0();
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;


bool fn_82BF2A50(int param_1)

{
  __int64 lVar1;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  struct { unsigned int first; unsigned int second; } stack_pair_110;

  
  stack_pair_110.second = *(unsigned int *)(param_1 + 0x14);
  uStack_120 = 0;
  uStack_11c = 0;
  stack_pair_110.first = 1;
  lVar1 = fn_82CE09D0(0,0,&stack_pair_110.first,0,&uStack_120);
  return (int)lVar1 != -1 && lVar1 != 0;
}

