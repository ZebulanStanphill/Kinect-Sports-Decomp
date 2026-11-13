extern int fn_82512C30();
extern int fn_82512CC8();
extern int fn_82512E18();
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


int fn_825129C8(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  struct { int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  iVar2 = fn_82512C30();
  uStack_28 = 0;
  uVar1 = *(unsigned int *)(iVar2 + 0x10);
  lVar3 = (unsigned __int64)uVar1 + 1;
  stack_pair_30.first = (int)lVar3;
  *(int *)(iVar2 + 0x10) = stack_pair_30.first;
  if (lVar3 == 0) {
    stack_pair_30.first = uVar1 + 2;
    *(int *)(iVar2 + 0x10) = stack_pair_30.first;
  }
  stack_pair_30.second = param_1;
  fn_82512E18(iVar2 + 0x24,&stack_pair_30.first);
  fn_82512CC8(iVar2);
  return stack_pair_30.first;
}

