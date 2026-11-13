extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


void fn_82382E88(int *param_1)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  struct { unsigned int first; int second; } stack_pair_50;

  unsigned char auStack_40 [16];
  unsigned char auStack_30 [24];
  
  iVar3 = *param_1;
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  iVar3 = (**(int (***)())(iVar3 + 0x4c))();
  iVar4 = fn_8265C9E0(0x28);
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822D7FE0();
  }
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  fn_822D79D8(&stack_pair_50.first,uVar2);
  (**(int (***)())(**(int **)(iVar3 + 0x428) + 0x10))(*(int **)(iVar3 + 0x428),stack_pair_50.first,auStack_40);
  if (*(int *)(iVar3 + 0x408) != 0) {
    fn_828E9D90(stack_pair_50.first);
    fn_828E9D40(stack_pair_50.first);
    (**(int (***)())(**(int **)(iVar3 + 0x428) + 0x14))(*(int **)(iVar3 + 0x428),stack_pair_50.first,auStack_30);
    if (*(int *)(iVar3 + 0x408) != 0) {
      (**(int (***)())(**(int **)(iVar3 + 0x408) + 4))();
    }
  }
  fn_828E2B28(iVar3 + 0x3c0,&stack_pair_50.first);
  if (stack_pair_50.second != 0) {
    fn_822315A0();
  }
  return;
}

