typedef unsigned char bool;
extern int fn_823AA970();
extern int fn_825089A0();
extern int fn_8288CDC8();
extern int fn_8288DDF8();
extern int fn_8288E040();
extern int fn_8288FA78();
extern int fn_82890F00();
extern int fn_828910B8();
extern int fn_828920B0();
extern int fn_828922B0();
extern int fn_828977F0();
extern int fn_82897BD0();
extern int fn_828A12E8();
extern int fn_828CAF50();
extern int fn_828CB310();
extern unsigned int iStack_40;


void fn_82893DB8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  char cVar7;
  struct { int first; int second; } stack_pair_40;

  
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x38);
  if ((*(int *)(param_1 + 0x34) == 0) || (iVar1 == 0)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = *(char *)(iVar1 + 0x26);
  }
  bVar2 = *(char *)(param_2 + 0x26) == '\0';
  fn_828922B0(param_1 + 0x3c,*(unsigned int *)(param_1 + 0x4c),0);
  if (bVar2) {
    uVar3 = fn_828A12E8(*(unsigned int *)(param_1 + 0x10));
    fn_8288FA78(uVar3,param_1);
  }
  stack_pair_40.first = param_1;
  iVar4 = fn_828A12E8(*(unsigned int *)(param_1 + 0x10));
  fn_8288E040(&stack_pair_40.second,iVar4 + 0x5c,&stack_pair_40.first);
  if (stack_pair_40.second != *(int *)(iVar4 + 0x60)) {
    fn_8288CDC8(&stack_pair_40.second,iVar4 + 0x5c);
  }
  iVar4 = *(int *)(param_1 + 0x34);
  *(int *)(iVar4 + 0x38) = param_2;
  uVar5 = fn_82897BD0(param_2);
  *(unsigned int *)(iVar4 + 0x3c) = uVar5;
  uVar5 = fn_823AA970(param_2);
  *(unsigned int *)(iVar4 + 0x40) = uVar5;
  fn_828977F0(*(int *)(param_1 + 0x34),*(unsigned int *)(*(int *)(param_1 + 0x34) + 0x38),0);
  if (cVar7 == '\0') {
    if (!bVar2) {
      uVar3 = fn_828A12E8(*(unsigned int *)(param_1 + 0x10));
      fn_828920B0(uVar3,param_1);
      fn_82890F00(uVar3,param_1);
    }
  }
  else if (bVar2) {
    uVar3 = fn_828A12E8(*(unsigned int *)(param_1 + 0x10));
    fn_828910B8(uVar3,param_1);
    fn_8288DDF8(uVar3,param_1);
  }
  uVar3 = fn_828CB310();
  fn_828CAF50(uVar3,param_1,iVar1);
  piVar6 = (int *)fn_825089A0();
  uVar3 = (**(int (***)())(*piVar6 + 0xc))();
  *(unsigned __int64 *)(param_1 + 0x60) = uVar3;
  return;
}

