extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int uStack_34;


void fn_82DFE328(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  struct { int first; int second; } stack_pair_3c;

  unsigned int uStack_34;
  
  uVar1 = *(unsigned int *)(param_2 + 0xbc);
  stack_pair_3c.first = 0;
  stack_pair_3c.second = 0;
  uStack_34 = 0x80000000;
  iVar3 = *(int *)(param_2 + 0xc4);
  iVar2 = fn_82CE5410();
  if ((int)(uStack_34 & 0x3fffffff) < iVar3) {
    iVar4 = (uStack_34 & 0x3fffffff) << 1;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),&stack_pair_3c.first,iVar4,4);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xc4)) {
    iVar4 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(unsigned int *)(iVar4 + stack_pair_3c.first) = *(unsigned int *)(*(int *)(param_2 + 0xc0) + iVar4);
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_2 + 0xc4));
  }
  stack_pair_3c.second = iVar3;
  (**(int (***)())(**(int **)(param_2 + 0x24) + 0xc))(param_1);
  *(unsigned int *)(param_2 + 0xbc) = uVar1;
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0xc4)) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(unsigned int *)(*(int *)(param_2 + 0xc0) + iVar2) = *(unsigned int *)(iVar2 + stack_pair_3c.first);
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_2 + 0xc4));
  }
  iVar3 = fn_82CE5410();
  stack_pair_3c.second = 0;
  if ((uStack_34 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),stack_pair_3c.first,uStack_34 & 0x3fffffff,4);
  }
  return;
}

