extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82E182B0(int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  uVar3 = (**(int (***)())(*param_1 + 0x20))();
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0x80000000;
  puVar4 = (unsigned int *)fn_82CE5410();
  uVar1 = (unsigned int)param_2;
  stack_pair_40.first = *puVar4;
  uStack_38 = uVar1 | 0x80000000;
  *puVar4 = (uVar1 + 0x7f & 0xffffff80) + stack_pair_40.first;
  uStack_34 = stack_pair_40.first;
  iVar5 = fn_82CE5410();
  if ((int)(uStack_38 & 0x3fffffff) < (int)uVar1) {
    lVar6 = ((unsigned __int64)uStack_38 & 0x3fffffff) << 1;
    if ((int)lVar6 <= (int)uVar1) {
      lVar6 = param_2;
    }
    fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),&stack_pair_40.first,lVar6);
  }
  uVar7 = param_2 - (unsigned __int64)stack_pair_40.second;
  if (0 < (__int64)uVar7) {
    lVar6 = (unsigned __int64)stack_pair_40.first + (unsigned __int64)stack_pair_40.second + -1;
    uVar2 = uVar7 & 0xffffffff;
    while (uVar2 != 0) {
      lVar6 = lVar6 + 1;
      *(unsigned char *)lVar6 = 0;
      uVar7 = uVar7 - 1;
      uVar2 = uVar7;
    }
  }
  uVar3 = param_2 - 1U & uVar3;
  stack_pair_40.second = uVar1;
  if ((int)uVar3 != 0) {
    (**(int (***)())(*param_1 + 0x10))(param_1,stack_pair_40.first,param_2 - uVar3);
  }
  uVar1 = uStack_34;
  stack_pair_40.second = -(unsigned int)(stack_pair_40.first != uStack_34) & stack_pair_40.second;
  puVar4 = (unsigned int *)fn_82CE5410();
  *puVar4 = uVar1;
  iVar5 = fn_82CE5410();
  stack_pair_40.second = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),stack_pair_40.first,uStack_38 & 0x3fffffff,1);
  }
  return;
}

