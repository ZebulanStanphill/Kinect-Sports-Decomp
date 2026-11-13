extern unsigned int fStack_20;
extern int fn_822315A0();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8251A108();
extern unsigned int iStack_1c;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83297810;


void fn_8224FD10(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  float fVar4;
  unsigned __int64 uVar5;
  struct { float first; int second; } stack_pair_20;

  
  fVar4 = lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar3 = lbl_83265A28 & 0x7fffff;
  *(unsigned int *)(param_1 + 0x4c) = ltcg_pool_0_0f;
  stack_pair_20.first = (float)(uVar3 | 0x3f800000);
  *(float *)(param_1 + 0x50) =
       (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x44)) * (stack_pair_20.first - fVar4) +
       *(float *)(param_1 + 0x44);
  **(unsigned int **)(param_1 + 0x28) = 2;
  *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x2c) = 8;
  uVar5 = (unsigned __int64)lbl_83297810;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x2c) + 8);
  if (uVar5 == 0) {
    uVar5 = fn_82511928();
  }
  fn_825138E0(&stack_pair_20.first,uVar5,uVar1);
  if (stack_pair_20.first != 0.0) {
    piVar2 = *(int **)((int)stack_pair_20.first + 0x18);
    uVar1 = *(unsigned int *)(param_1 + 0x28);
    (**(int (***)())(*piVar2 + 4))(piVar2);
    fn_8251A108(piVar2 + 4,uVar1);
  }
  if (stack_pair_20.second != 0) {
    fn_822315A0();
  }
  return;
}

