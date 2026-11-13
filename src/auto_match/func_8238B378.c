extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_82365BD8();
extern int fn_823748D0();
extern int fn_824C97F0();
extern int fn_824D2AE8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int ltcg_pool_0_0f;


void fn_8238B378(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piVar4;
  struct { int first; int second; } stack_pair_40;

  unsigned char auStack_38 [8];
  
  *(unsigned int *)(param_1 + 0x14) = 0;
  fn_824D2AE8(&stack_pair_40.first,(unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x1b0);
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(stack_pair_40.first + 0x174) = 1;
  *(unsigned int *)(param_1 + 0x18) = uVar1;
  *(unsigned int *)(param_1 + 0x20) = 0;
  piVar4 = (int *)(*(unsigned int **)(param_1 + 0x1c))[1];
  for (piVar3 = (int *)**(unsigned int **)(param_1 + 0x1c); piVar3 != piVar4; piVar3 = piVar3 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar3 + 0x28),0xffffffff821b45a8);
  }
  piVar3 = (int *)(*(unsigned int **)(param_1 + 0x1c))[1];
  for (piVar4 = (int *)**(unsigned int **)(param_1 + 0x1c); piVar4 != piVar3; piVar4 = piVar4 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar4 + 0x28),0xffffffff821add8c);
  }
  fn_8228E658(param_1 + 0xc,&stack_pair_40.first);
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar2 = fn_82365BD8(auStack_38,&stack_pair_40.first);
  fn_823748D0(uVar1,uVar2);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  return;
}

