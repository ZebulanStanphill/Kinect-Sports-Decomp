extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_826824B0(unsigned int);
extern int fn_82682AF0();
extern int fn_82682D30();
extern int fn_82696330();
extern int fn_826964E0();
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


void fn_82683150(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar2;
  unsigned int uVar1;
  unsigned int uVar3;
  struct { unsigned int first; unsigned int second; unsigned char flags; } stack_pair_60;


  unsigned char auStack_50 [16];
  
  iVar2 = (*(int (**)())(**(int **)(param_1 + 0x68) + 0x5c))(*(int **)(param_1 + 0x68));
  auStack_50[0] = 0;
  uVar1 = fn_8267B890(*(unsigned int *)(*(int *)(iVar2 + 0x78) + 0x288),0x38,0);
  if (uVar1 != 0) {
    uVar3 = fn_82682AF0(uVar1,iVar2 + 0x78,param_3,param_4);
  } else { uVar3 = 0; }
  stack_pair_60.first = uVar3;
  stack_pair_60.flags = 0;
  if (uVar3 != 0) {
    *(unsigned int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
  }
  stack_pair_60.second = 0;
  fn_826964E0(auStack_50,&stack_pair_60.first);
  if (((stack_pair_60.flags & 2) == 0) && (stack_pair_60.first != 0)) {
    fn_826824B0(stack_pair_60.first);
  }
  stack_pair_60.first = 0;
  if (((stack_pair_60.flags & 1) == 0) && (stack_pair_60.second != 0)) {
    fn_826824B0(stack_pair_60.second);
  }
  stack_pair_60.second = 0;
  fn_82682D30(param_1,iVar2,auStack_50,param_2);
  if (uVar3 != 0) {
    fn_826824B0(uVar3);
  }
  fn_82696330(auStack_50);
  return;
}

