extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_8246E850();
extern int fn_824714C8();
extern int fn_8265C9E0();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_8246EB78(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int aiStack_50 [2];
  unsigned int auStack_48 [2];
  unsigned int uStack_40;
  int iStack_3c;
  struct { int first; int second; } stack_pair_38;

  
  stack_pair_38.first = param_1 + 0x400;
  auStack_48[0] = 1;
  uStack_40 = 1;
  aiStack_50[0] = param_1;
  uVar1 = fn_8265C9E0(0x150);
  if ((uVar1 & 0xffffffff) == 0) {
    stack_pair_38.second = 0;
  }
  else {
    stack_pair_38.second = fn_824714C8(uVar1,param_2,&stack_pair_38.first,&uStack_40,auStack_48,aiStack_50);
  }
  stack_pair_38.first = stack_pair_38.second + 0x10;
  puVar3 = (unsigned int *)fn_82365BD8(&uStack_40,&stack_pair_38.first);
  fn_82469C10(*puVar3,**(unsigned int **)(param_1 + 0x90));
  fn_82469CD8(*puVar3,*(unsigned int *)(*(int *)(param_1 + 0x90) + 0x14));
  uVar2 = fn_82365BD8(auStack_48,puVar3);
  fn_8246E850(param_1,uVar2,param_3,param_4,0,3);
  if (puVar3[1] != 0) {
    fn_822315A0();
  }
  fn_82356F98(&uStack_40);
  fn_823F2E20(&stack_pair_38.first,&uStack_40);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  if (stack_pair_38.second != 0) {
    fn_822315A0();
  }
  return;
}

