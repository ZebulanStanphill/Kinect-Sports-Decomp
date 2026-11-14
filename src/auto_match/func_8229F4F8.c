extern int fn_82273CD8();
extern int XMemSet();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8229F4F8(int param_1,int param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  double dStack_28;
  
  if (*(int *)(param_1 + 8) != param_2) {
    *(int *)(param_1 + 8) = param_2;
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82273CD8(&stack_pair_30.first,3);
    *(unsigned short *)(param_1 + 0x9c) = 0;
    dStack_28 = (double)(__int64)param_2;
                    /* WARNING: Subroutine does not return */
    XMemSet(param_1 + 0x14,0,0x20);
  }
  return;
}

