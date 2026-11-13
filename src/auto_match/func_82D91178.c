extern unsigned int *auStack_50;
extern int fn_82CE5410();
extern int fn_82D9A040();
extern int fn_83088518();
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_82D91178(int param_1,int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  __int64 lVar4;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  int iStack_54;
  unsigned char auStack_50 [32];
  
  uVar1 = *(unsigned int *)(param_1 + 0x338);
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0x80000000;
  piVar2 = (int *)fn_82CE5410();
  uStack_58 = uVar1 | 0x80000000;
  stack_pair_60.first = *piVar2;
  *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + stack_pair_60.first;
  iStack_54 = stack_pair_60.first;
  (**(int (***)())(*param_2 + 0x18))(param_2,auStack_50);
  (**(int (***)())(**(int **)(param_1 + 0x58) + 0x10))
            (*(int **)(param_1 + 0x58),param_2 + 9,auStack_50,&stack_pair_60.first);
  fn_82D9A040(param_2,auStack_50);
  uVar1 = 0;
  if (stack_pair_60.second != 0) {
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7c) + 8;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x7c) == 0) {
      lVar4 = 0;
    }
    fn_83088518(*(unsigned int *)(param_1 + 100),stack_pair_60.first,stack_pair_60.second,lVar4);
    uVar1 = stack_pair_60.second;
  }
  iVar3 = iStack_54;
  stack_pair_60.second = -(unsigned int)(stack_pair_60.first != iStack_54) & uVar1;
  piVar2 = (int *)fn_82CE5410();
  *piVar2 = iVar3;
  iVar3 = fn_82CE5410();
  stack_pair_60.second = 0;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,8);
  }
  return;
}

