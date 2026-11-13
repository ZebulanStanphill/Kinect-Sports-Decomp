extern int fn_822315A0();
extern int fn_82522588();
extern int fn_8265CA20();
extern int fn_827D50B8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_825BE1A0(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  struct { int first; int second; } stack_pair_30;

  
  fn_82522588(&stack_pair_30.first,param_2 + 0x134);
  *(int *)(stack_pair_30.first + 0x1ec) = *(int *)(stack_pair_30.first + 0x1ec) + 1;
  iVar1 = fn_827D50B8(*param_1);
  if ((iVar1 != 0) && (uVar2 = fn_827D50B8(*param_1), *(int *)(stack_pair_30.first + 0x1f0) == 0)) {
    *(unsigned int *)(stack_pair_30.first + 0x1f0) = uVar2;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x138) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(param_2);
  }
  if (stack_pair_30.second != 0) {
    fn_822315A0();
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

