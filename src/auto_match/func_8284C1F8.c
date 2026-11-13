extern unsigned int *auStack_20;
extern int fn_8284C020();
extern int fn_82BA02A8();
extern unsigned int iStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_8284C1F8(int param_1)

{
  unsigned int uVar1;
  int iStack00000014;
  struct { unsigned int first; unsigned int second; } stack_pair_2c;

  unsigned int uStack_24;
  unsigned char auStack_20 [4];
  unsigned int uStack_1c;
  unsigned int *puStack_18;
  unsigned int uStack_14;
  
  stack_pair_2c.first = *(unsigned int *)(param_1 + 4);
  iStack00000014 = param_1;
  uStack_1c = stack_pair_2c.first;
  fn_82BA02A8(&stack_pair_2c.first,param_1);
  uVar1 = stack_pair_2c.first;
  puStack_18 = *(unsigned int **)(iStack00000014 + 4);
  uStack_24 = *puStack_18;
  uStack_14 = uStack_24;
  fn_82BA02A8(&uStack_24,iStack00000014);
  stack_pair_2c.second = uStack_24;
  fn_8284C020(auStack_20,iStack00000014,uStack_24,uVar1);
  return;
}

