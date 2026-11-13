extern int fn_82CE5410();
extern int fn_830885D0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_34;
extern unsigned int iStack_40;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82D912B0(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iStack0000001c;
  struct { int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  int iStack_34;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    iStack0000001c = param_2;
    (**(int (***)())(**(int **)(param_1 + 8) + 0x20))
              (*(int **)(param_1 + 8),&stack0x0000001c,1,param_1,1);
    stack_pair_40.first = 0;
    stack_pair_40.second = 0;
    uStack_38 = 0x80000000;
    uVar1 = *(unsigned int *)(param_1 + 0x338);
    piVar2 = (int *)fn_82CE5410();
    uStack_38 = uVar1 | 0x80000000;
    stack_pair_40.first = *piVar2;
    *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + stack_pair_40.first;
    iStack_34 = stack_pair_40.first;
    (**(int (***)())(**(int **)(param_1 + 0x58) + 0x1c))
              (*(int **)(param_1 + 0x58),param_2 + 0x24,&stack_pair_40.first);
    if (0 < (int)stack_pair_40.second) {
      fn_830885D0(*(unsigned int *)(param_1 + 100),stack_pair_40.first);
    }
    iVar3 = iStack_34;
    stack_pair_40.second = -(unsigned int)(stack_pair_40.first != iStack_34) & stack_pair_40.second;
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar3;
    iVar3 = fn_82CE5410();
    stack_pair_40.second = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),stack_pair_40.first,uStack_38 & 0x3fffffff,8);
    }
  }
  return;
}

