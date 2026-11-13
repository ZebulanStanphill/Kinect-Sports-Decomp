extern unsigned int *auStack_a0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82526C10();
extern int fn_82526C70();
extern int fn_82528EE0();
extern int fn_82672C20();
extern int fn_82F63108();
extern unsigned int iStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82278EE8(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  int iStack_a8;
  unsigned char auStack_a0 [160];
  
  stack_pair_b0.first = 0;
  stack_pair_b0.second = 0;
  fn_82526C70(auStack_a0,0x80,param_1 + 0x18);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x270) == 0) {
      fn_82528EE0(param_1 + 0xa4,0x40,0xffffffff821a7c80,param_3);
    }
    else {
      if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(param_1 + 0x270) + 4))
                (*(int **)(param_1 + 0x270),0,param_3,param_1 + 0xa4,0x40);
    }
    iVar2 = param_1 + 0xa4;
    fn_82273CD8(&stack_pair_b0.first,5);
    uVar1 = 0xffffffff821a818c;
  }
  else if (param_2 == 1) {
    if (*(int *)(param_1 + 0x270) == 0) {
      fn_82528EE0(param_1 + 0x124,0x40,0xffffffff821a7c80,param_3);
    }
    else {
      if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(param_1 + 0x270) + 4))
                (*(int **)(param_1 + 0x270),0,param_3,param_1 + 0x124,0x40);
    }
    iVar2 = param_1 + 0x124;
    fn_82273CD8(&stack_pair_b0.first,5);
    uVar1 = 0xffffffff821a8198;
  }
  else {
    if (2 < param_2) goto LAB_822790bc;
    if (*(int *)(param_1 + 0x270) == 0) {
      fn_82528EE0(param_1 + 0x1a4,0x40,0xffffffff821a7c80,param_3);
    }
    else {
      if (*(int *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(param_1 + 0x270) + 4))
                (*(int **)(param_1 + 0x270),0,param_3,param_1 + 0x1a4,0x40);
    }
    iVar2 = param_1 + 0x1a4;
    fn_82273CD8(&stack_pair_b0.first,5);
    uVar1 = 0xffffffff821a81a8;
  }
  iStack_a8 = iVar2;
  fn_82526C10(auStack_a0,0x80,uVar1);
LAB_822790bc:
  fn_82672C20(*(unsigned int *)(param_1 + 8),auStack_a0,&stack_pair_b0.first,1);
  fn_82273C88(&stack_pair_b0.first);
  return;
}

