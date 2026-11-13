#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_823DDB00();
extern int fn_8249ABC0();


void fn_823DD8A8(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  fn_823DDB00();
  lVar4 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 8);
  lVar7 = ZEXT48(piVar1) + 0x8db4;
  do {
    lVar6 = lVar7 + -4;
    uVar3 = 0;
    lVar7 = lVar7 + 0x1c;
    uVar5 = (unsigned __int64)*(unsigned int *)(*piVar1 + (int)lVar4);
    do {
      iVar2 = fn_822ABA88(*(unsigned int *)(((int *)uVar5)[4] * 4 + *(int *)uVar5));
      uVar3 = uVar3 + 1;
      *(unsigned int *)(iVar2 + 0x200) = 1;
      lVar6 = lVar6 + 4;
      *(unsigned int *)lVar6 = 0xffffffff;
    } while ((uVar3 & 0xffffffff) < 7);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 < 8);
  iVar2 = fn_8249ABC0();
  *(unsigned int *)(iVar2 + 0x114) = 0xffffffff;
  return;
}

