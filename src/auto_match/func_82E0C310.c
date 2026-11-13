extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82D00450();
extern int fn_82E0AD10();
extern int fn_82E162A8();
extern int fn_82E16300();
extern int fn_82E16378();
extern int fn_82E17CD8();
extern int fn_82E17DD0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_58;
extern unsigned int uStack_68;


unsigned __int64 fn_82E0C310(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  struct { int first; int second; } stack_pair_70;

  unsigned int uStack_68;
  struct { int first; int second; } stack_pair_60;

  unsigned int uStack_58;

  iVar7 = param_2 * 4;
  uVar8 = (unsigned __int64)*(unsigned int *)(iVar7 + *(int *)(param_1 + 0x24));
  stack_pair_70.first = 0;
  stack_pair_70.second = 0;
  uStack_68 = 0x80000000;
  iVar9 = param_2 * 0x30 + *(int *)(param_1 + 0x20);
  fn_82E17DD0(iVar9,uVar8,&stack_pair_70.first);
  iVar2 = 0;
  if (0 < stack_pair_70.second) {
    iVar11 = 0;
    iVar3 = stack_pair_70.first;
    do {
      fn_82E16378(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(iVar3 + 4));
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 8;
      iVar3 = iVar11 + stack_pair_70.first;
    } while (iVar2 < stack_pair_70.second);
  }
  iVar2 = fn_82CE5410();
  stack_pair_70.second = 0;
  if ((uStack_68 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),stack_pair_70.first,uStack_68 & 0x3fffffff,8);
  }
  stack_pair_70.first = 0;
  uStack_68 = 0x80000000;
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0x80000000;
  fn_82E17CD8(iVar9,uVar8,&stack_pair_60.first);
  iVar2 = 0;
  if (0 < stack_pair_60.second) {
    iVar11 = 0;
    iVar3 = stack_pair_60.first;
    do {
      fn_82E16300(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(iVar3 + 4));
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 8;
      iVar3 = iVar11 + stack_pair_60.first;
    } while (iVar2 < stack_pair_60.second);
  }
  iVar2 = fn_82CE5410();
  stack_pair_60.second = 0;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,8);
  }
  stack_pair_60.first = 0;
  uStack_58 = 0x80000000;
  lVar4 = *(unsigned int *)(iVar9 + 0x20) + uVar8;
  uVar5 = (unsigned __int64)*(unsigned int *)(iVar9 + 0x24) - (unsigned __int64)*(unsigned int *)(iVar9 + 0x20);
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (__int64)(int)(((int)uVar5 >> 2) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 3) != 0));
    uVar5 = lVar6 / 3 + (lVar6 >> 0x3f);
    uVar5 = (uVar5 & 0xffffffff) + ((uVar5 & 0xffffffff) >> 0x1f);
    uVar5 = uVar5 + (uVar5 & 0x7fffffff) * 2;
    lVar6 = (uVar5 & 0x3fffffff) * 4 + lVar4;
    iVar9 = *(int *)lVar6;
    while (iVar9 < 0) {
      lVar6 = lVar6 + -0xc;
      uVar5 = uVar5 - 3;
      iVar9 = *(int *)lVar6;
    }
    lVar6 = uVar5 + 3;
  }
  if (0 < (int)lVar6) {
    lVar6 = (lVar6 - 1U & 0xffffffff) / 3 + 1;
    do {
      iVar9 = *(int *)(param_1 + 0x18);
      uVar10 = *(unsigned int *)lVar4 + uVar8;
      iVar2 = iVar9 + 0x10;
      uVar5 = fn_82CEA280(iVar2,uVar10,0);
      if ((uVar5 & 0xffffffff) != 0) {
        iVar3 = fn_82D00450(iVar9 + 0x1c,uVar5,0);
        if (*(int (***)())(iVar3 + 8) != (int (**)())0x0) {
          (**(int (***)())(iVar3 + 8))(uVar10);
        }
        if ((unsigned __int64)*(unsigned int *)(iVar9 + 8) == (uVar10 & 0xffffffff)) {
          *(unsigned int *)(iVar9 + 8) = 0;
        }
        uVar1 = fn_82CEA220(iVar2,uVar10);
        fn_82CEA358(iVar2,uVar1);
      }
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + 0xc;
    } while (lVar6 != 0);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    fn_82CE4118();
  }
  *(unsigned int *)(param_1 + 0x7c) = 0;
  fn_82E162A8(*(unsigned int *)(param_1 + 0x18),0);
  fn_82E0AD10(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(iVar7 + *(int *)(param_1 + 0x24)));
  *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x24)) = 0;
  return 0;
}
