extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_82517978();
extern int fn_8256C290();
extern int fn_8256D528();
extern int fn_827D96A0();
extern int fn_827D9C40();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


unsigned __int64
fn_8256BF70(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)(),unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  struct { int first; int second; } stack_pair_80;

  struct { unsigned int first; unsigned int second; } stack_pair_78;


  uVar1 = *(unsigned int *)(param_1 + 0x90);
  for (uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8c); (uVar7 & 0xffffffff) != (unsigned __int64)uVar1;
      uVar7 = uVar7 + 8) {
    puVar3 = (unsigned int *)fn_82365BD8(&stack_pair_78.first,uVar7);
    iVar4 = fn_827D96A0((unsigned __int64)*puVar3 + 0x1f8);
    iVar5 = fn_827D96A0(param_2);
    if (puVar3[1] != 0) {
      fn_822315A0();
    }
    if (iVar5 == iVar4) break;
  }
  uVar6 = 0;
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  if ((uVar7 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x90)) {
    stack_pair_78.first = 0;
    stack_pair_78.second = 0;
    fn_82517978(&stack_pair_78.first,*param_7,param_7[1],0);
    fn_8256C290(param_2,param_3,param_4,param_5,&stack_pair_80.first,&stack_pair_78.first,param_8);
    iVar4 = 0;
    if (stack_pair_80.first != 0) {
      fn_82376640(param_1 + 0x8c,&stack_pair_80.first);
      iVar4 = stack_pair_80.first;
    }
    uVar6 = 1;
  }
  else {
    fn_8256D528(&stack_pair_80.first,uVar7);
    iVar4 = stack_pair_80.first;
    if (param_4 != (int (**)())0x0) {
      uVar2 = fn_827D9C40(&stack_pair_78.first,stack_pair_80.first);
      (*param_4)(uVar2,param_5);
    }
  }
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x22c) = *(int *)(iVar4 + 0x22c) + 1;
  }
  if ((param_6 & 0xffffffff) != 0) {
    fn_8256D528(param_6,&stack_pair_80.first);
  }
  if (stack_pair_80.second != 0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return uVar6;
}
