extern unsigned int *auStack_24;
extern int fn_8265CA20();
extern int fn_8288F4A8();
extern int fn_82890328();
extern int fn_828958A0();
extern int fn_8289F2E0();
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_40;


unsigned __int64 fn_82896020(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned char uStack_40;
  struct { int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned char auStack_24 [12];
  
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  uStack_28 = 0;
  uVar2 = fn_8289F2E0(*(unsigned int *)(param_1 + 0x6c),*(unsigned int *)(param_1 + 0x18));
  if ((uVar2 & 0xffffffff) != 0) {
    fn_828958A0(param_1,&stack_pair_30.first);
    fn_8288F4A8(&stack_pair_30.first,uVar2);
    iVar1 = stack_pair_30.first;
    if (stack_pair_30.first != 0) {
      fn_82890328(stack_pair_30.first,stack_pair_30.second,auStack_24,uStack_40);
      fn_8265CA20(iVar1);
    }
  }
  return 1;
}

