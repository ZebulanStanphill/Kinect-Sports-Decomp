extern int fn_82CE5410();
extern int fn_82E0FCA0();
extern int fn_82E132A0();
extern int fn_82E14238();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_48;


unsigned __int64
fn_82E108D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  struct { int first; int second; } stack_pair_50;

  unsigned int uStack_48;
  
  if ((param_5 & 0xffffffff) == 0) {
    param_5 = 0xffffffff82133624;
  }
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0x80000000;
  iVar3 = fn_82E132A0(param_3,param_4,param_5,&stack_pair_50.first);
  if (iVar3 == 0) {
    uVar4 = 0;
    iVar3 = 0;
    iVar5 = 0;
    do {
      iVar2 = stack_pair_50.first;
      if (stack_pair_50.second <= iVar3) break;
      iVar1 = *(int *)(iVar5 + stack_pair_50.first);
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar4 = fn_82E14238(param_3,*(unsigned int *)(iVar1 + 4));
        uVar4 = fn_82E0FCA0(param_1,param_2,*(unsigned int *)(*(int *)(iVar5 + iVar2) + 8),uVar4);
      }
      else {
        uVar4 = (**(int (***)())(iVar1 + 0xc))(param_1,param_2);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while ((int)uVar4 == 0);
    iVar3 = fn_82CE5410();
    stack_pair_50.second = 0;
    if ((uStack_48 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),stack_pair_50.first,uStack_48 & 0x3fffffff,4);
    }
  }
  else {
    iVar3 = fn_82CE5410();
    stack_pair_50.second = 0;
    if ((uStack_48 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),stack_pair_50.first,uStack_48 & 0x3fffffff,4);
    }
    uVar4 = 1;
  }
  return uVar4;
}

