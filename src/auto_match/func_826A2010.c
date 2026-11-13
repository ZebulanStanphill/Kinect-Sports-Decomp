extern int fn_82681838();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826A1E40();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_826A2010(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar5;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puStack_50;
  int aiStack_4c;
  struct { unsigned int first; unsigned int second; } stack_pair_40;


  cVar5 = fn_82695468(param_1,7);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      lVar7 = 0;
    }
    fn_8268AFB0(&stack_pair_40.first,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288));
    if (*(int *)(param_1 + 0x1c) == 0) {
      fn_826A1E40(lVar7,*(unsigned int *)(param_1 + 0x18),&stack_pair_40.first,0xffffffff82196fac);
    }
    else {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      fn_82696D38(&puStack_50,uVar3,uVar1,0xffffffffffffffff,0);
      fn_826A1E40(lVar7,*(unsigned int *)(param_1 + 0x18),&stack_pair_40.first,*puStack_50);
      uVar2 = puStack_50[2];
      puStack_50[2] = (int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826944C8(puStack_50);
      }
    }
    uVar6 = (unsigned __int64)stack_pair_40.first;
    if (uVar6 == 0) {
      uVar6 = 0xffffffff82196582;
    }
    iVar4 = fn_82694610((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar6,
                              stack_pair_40.second);
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    aiStack_4c = iVar4;
    fn_82681838(*(unsigned int *)(param_1 + 4),&aiStack_4c);
    lVar7 = (unsigned __int64)*(unsigned int *)(iVar4 + 8) - 1;
    *(int *)(iVar4 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(iVar4);
    }
    fn_8268AFD8(&stack_pair_40.first);
  }
  return;
}
