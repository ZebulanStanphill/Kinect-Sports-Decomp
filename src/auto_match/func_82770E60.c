extern int fn_8267BE38();
extern int fn_8270E320();
extern int fn_8276F9E8();
extern int fn_82770430();
extern int fn_82770B88();
extern int fn_827B6118();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82770E60(int param_1,int *param_2)

{
  int iVar3;
  __int64 lVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  
  iVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  if (param_2[1] != 0) {
    iVar4 = 0;
    do {
      if ((*(int *)(*(int *)(iVar4 + *param_2) + 0x10) == 0) &&
         ((*(int *)(*(int *)(param_1 + 8) + 0x20) == 0 ||
          (iVar3 = (**(int (***)())(**(int **)(*(int *)(iVar4 + *param_2) + 0xc) + 0x38))(),
          iVar3 <= *(int *)(*(int *)(param_1 + 8) + 0x20))))) {
        lVar1 = (**(int (***)())(**(int **)(*(int *)(iVar4 + *param_2) + 0xc) + 0x38))();
        uVar6 = lVar1 + uVar6;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < (unsigned int)param_2[1]);
  }
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0;
  if ((uVar6 & 0xffffffff) != 0) {
    fn_8270E320(&stack_pair_50.first,&stack_pair_50.first,uVar6);
  }
  fn_827B6118(param_1 + 0x148);
  uVar5 = 0;
  if (param_2[1] != 0) {
    do {
      if ((*(int *)(*(int *)(iVar7 + *param_2) + 0x10) == 0) &&
         ((*(int *)(*(int *)(param_1 + 8) + 0x20) == 0 ||
          (iVar4 = (**(int (***)())(**(int **)(*(int *)(iVar7 + *param_2) + 0xc) + 0x38))(),
          iVar4 <= *(int *)(*(int *)(param_1 + 8) + 0x20))))) {
        fn_82770B88(param_1,&stack_pair_50.first,*(unsigned int *)(iVar7 + *param_2));
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar5 < (unsigned int)param_2[1]);
  }
  uVar2 = fn_82770430(param_1,&stack_pair_50.first);
  fn_8276F9E8(param_1,&stack_pair_50.first,uVar2);
  fn_8267BE38(stack_pair_50.first);
  return;
}

