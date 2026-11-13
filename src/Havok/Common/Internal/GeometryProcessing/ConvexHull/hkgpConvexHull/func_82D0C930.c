extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D1D478();
extern int fn_82D1D8F0();
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82D0C930(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int in_r0;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 100) == 0) {
    stack_pair_50.first = 0;
    stack_pair_50.second = 0;
    uStack_48 = 0x80000000;
    uVar2 = *(unsigned int *)(iVar1 + 0x28);
    iVar7 = fn_82CE5410();
    uVar6 = stack_pair_50.second;
    lVar8 = (unsigned __int64)uVar2 + (unsigned __int64)stack_pair_50.second;
    iVar9 = (int)lVar8;
    if ((int)(uStack_48 & 0x3fffffff) < iVar9) {
      lVar10 = ((unsigned __int64)uStack_48 & 0x3fffffff) << 1;
      if ((int)lVar10 <= iVar9) {
        lVar10 = lVar8;
      }
      fn_82CE6310(*(unsigned int *)(iVar7 + 0x10),&stack_pair_50.first,lVar10,0x10);
    }
    stack_pair_50.second = uVar2 + stack_pair_50.second;
    iVar7 = uVar6 * 0x10 + stack_pair_50.first;
    for (puVar3 = *(unsigned int **)(iVar1 + 0x24); puVar3 != (unsigned int *)0x0;
        puVar3 = (unsigned int *)*puVar3) {
      puVar4 = (unsigned int *)((unsigned int)(puVar3 + 4) & 0xfffffff0);
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar5 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar11;
      puVar5[2] = uVar12;
      puVar5[3] = uVar13;
      iVar7 = iVar7 + 0x10;
    }
    fn_82D1D8F0(&stack_pair_50.first,iVar1 + 0x60);
    iVar7 = fn_82CE5410();
    stack_pair_50.second = 0;
    if ((uStack_48 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar7 + 0x10) + 0x10))
                (*(int **)(iVar7 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff,0x10);
    }
    stack_pair_50.first = 0;
    uStack_48 = 0x80000000;
  }
  fn_82D1D478(iVar1 + 0x60,param_2,param_3);
  return;
}

