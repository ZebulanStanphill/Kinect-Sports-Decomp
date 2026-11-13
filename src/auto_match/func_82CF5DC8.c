extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CF1790();
extern int fn_82CF3C90();
extern int fn_82CF52E0();
extern unsigned int iStack_58;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_60;


void fn_82CF5DC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned char uStack_60;
  struct { int first; unsigned int second; } stack_pair_58;

  unsigned int uStack_50;
  
  stack_pair_58.first = 0;
  stack_pair_58.second = 0;
  uStack_50 = 0x80000000;
  lVar6 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      uVar2 = fn_82CF3C90(param_1,lVar6,uStack_60);
      iVar3 = fn_82CE5410();
      if (stack_pair_58.second == (uStack_50 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),&stack_pair_58.first,4);
      }
      lVar6 = lVar6 + 1;
      *(unsigned int *)(stack_pair_58.second * 4 + stack_pair_58.first) = uVar2;
      stack_pair_58.second = stack_pair_58.second + 1;
    } while ((int)lVar6 < *(int *)(param_1 + 4));
  }
  fn_82CF52E0(param_2,&stack_pair_58.first,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),
                param_3,*(unsigned int *)(param_1 + 0x20),1);
  iVar3 = 0;
  if (0 < (int)stack_pair_58.second) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + stack_pair_58.first);
      if (iVar1 != 0) {
        fn_82CF1790(iVar1);
        iVar4 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),iVar1,0x58);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < (int)stack_pair_58.second);
  }
  iVar3 = fn_82CE5410();
  stack_pair_58.second = 0;
  if ((uStack_50 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),stack_pair_58.first,uStack_50 & 0x3fffffff,4);
  }
  return;
}

