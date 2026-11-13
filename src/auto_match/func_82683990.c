extern unsigned int *auStack_a0;
extern int fn_82273C88();
extern int fn_8267BE38();
extern int fn_82681D00();
extern int fn_82682D30();
extern int fn_82683770();
extern int fn_82683928();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696CB8();
extern int fn_826A7398();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack_48;
extern unsigned int uStack_5c;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a8;


void fn_82683990(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  struct { int first; int second; } stack_pair_b0;

  unsigned int uStack_a8;
  unsigned char auStack_a0 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int *puStack_60;
  unsigned int uStack_5c;
  unsigned int *puStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  unsigned int uStack_48;

  stack_pair_b0.first = 0;
  stack_pair_b0.second = 0;
  uVar1 = *(unsigned int *)(param_2 + 0x18);
  uStack_a8 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  stack_pair_90.first = 0;
  stack_pair_90.second = 0;
  auStack_a0[0] = 0;
  if (*(int *)(param_2 + 8) == 0) {
    fn_826959C8(auStack_a0);
    auStack_a0[0] = 1;
  }
  else {
    fn_82696CB8();
  }
  uVar5 = fn_826A7398(uVar1);
  fn_82682D30(uVar5,uVar1,auStack_a0,&uStack_80);
  fn_82683928(&stack_pair_b0.first,&uStack_80);
  lVar7 = 0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    do {
      uStack_70 = 0;
      uStack_6c = 0;
      uVar5 = fn_826957D0(param_2,lVar7);
      uVar6 = fn_826A7398(uVar1);
      fn_82682D30(uVar6,uVar1,uVar5,&uStack_70);
      fn_82683928(&stack_pair_b0.first,&uStack_70);
      fn_82273C88(&uStack_70);
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(param_2 + 0x1c));
  }
  uStack_5c = fn_826A7398(uVar1);
  iVar4 = stack_pair_b0.second;
  iVar3 = stack_pair_b0.first;
  puStack_60 = &stack_pair_90.first;
  puStack_58 = &uStack_80;
  if (*(int *)(param_2 + 0x1c) < 1) {
    iStack_50 = 0;
  }
  else {
    iStack_50 = stack_pair_b0.first + 0x10;
  }
  uStack_48 = *(unsigned int *)(param_1 + 0x34);
  iStack_54 = stack_pair_b0.first;
  iStack_4c = stack_pair_b0.second + -1;
  (**(int (***)())(**(int **)(param_1 + 0x30) + 4))(*(int **)(param_1 + 0x30),&puStack_60);
  if ((stack_pair_90.second & 0x8f) != 0) {
    uVar2 = *(unsigned int *)(param_2 + 4);
    uVar5 = fn_826A7398(uVar1);
    fn_82681D00(uVar5,&stack_pair_90.first,uVar2);
  }
  fn_82696330(auStack_a0);
  fn_82273C88(&stack_pair_90.first);
  fn_82273C88(&uStack_80);
  fn_82683770(iVar3,iVar4);
  fn_8267BE38(iVar3);
  return;
}
