extern int fn_82CE5410();
extern int fn_82DE7A20();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82DE7CC8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  int iStack_44;
  
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0x80000000;
  piVar1 = (int *)fn_82CE5410();
  uStack_48 = (unsigned int)param_3 | 0x80000000;
  stack_pair_50.first = *piVar1;
  *piVar1 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + stack_pair_50.first;
  if (0 < (int)(unsigned int)param_3) {
    puVar3 = (unsigned int *)(param_2 + -4);
    do {
      puVar3 = puVar3 + 1;
      *(unsigned int *)(stack_pair_50.second * 4 + stack_pair_50.first) = *puVar3;
      stack_pair_50.second = stack_pair_50.second + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  iStack_44 = stack_pair_50.first;
  fn_82DE7A20(param_1,&stack_pair_50.first,param_4);
  iVar2 = iStack_44;
  stack_pair_50.second = -(unsigned int)(stack_pair_50.first != iStack_44) & stack_pair_50.second;
  piVar1 = (int *)fn_82CE5410();
  *piVar1 = iVar2;
  iVar2 = fn_82CE5410();
  stack_pair_50.second = 0;
  if ((uStack_48 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff,4);
  }
  return;
}

