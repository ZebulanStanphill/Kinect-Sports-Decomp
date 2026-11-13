extern int fn_824BF8A8();
extern int fn_8250E4D0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern int fn_82670C10();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned int *
fn_8234E590(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
             int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piStack_50;
  int *piStack_4c;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0;
  if (0xf < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  fn_8255FD70(&piStack_50,*(unsigned int *)(param_5 + 0x24),param_2);
  piVar2 = piStack_4c;
  piVar1 = piStack_50;
  for (piVar3 = piStack_50; piVar3 != piVar2; piVar3 = piVar3 + 1) {
    piStack_50 = *(int **)(*piVar3 + 0x40);
    piStack_4c = *(int **)(*piVar3 + 0x44);
    fn_824BF8A8(&stack_pair_40.first,&piStack_50);
  }
  if (piVar1 != (int *)0x0) {
    fn_8265CA20(piVar1);
  }
  fn_8250E4D0(param_1 + 3,&stack_pair_40.first,0xffffffff82511558,param_5 + 0x14);
  fn_82670C10(&stack_pair_40.first);
  return param_1;
}

