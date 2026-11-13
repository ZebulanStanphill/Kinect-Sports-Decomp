extern int fn_8267BE38();
extern int fn_826CD200();
extern int fn_82F691F0();
extern unsigned int iStack_a4;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;


void fn_826E20C0(int param_1)

{
  int iVar1;
  struct { unsigned int first; int second; } stack_pair_a8;

  unsigned int uStack_a0;
  
  if (*(int *)(param_1 + 8) == 1) {
    stack_pair_a8.first = 0;
    stack_pair_a8.second = 0;
    uStack_a0 = 0;
    iVar1 = (*(int *)(param_1 + 0xc) + 2) * 4;
    fn_826CD200(&stack_pair_a8.first,(__int64)(*(int *)(param_1 + 0x10) + 2) * (__int64)iVar1);
    if (stack_pair_a8.second != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(stack_pair_a8.first,0,iVar1);
    }
    fn_8267BE38(stack_pair_a8.first);
  }
  return;
}

