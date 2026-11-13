extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82436FE8(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  double dStack_68;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  double dStack_58;

  iVar5 = *(int *)(param_2 + 0x40);
  fVar1 = (float)((double)*(float *)(iVar5 + 0x220) + param_1);
  *(float *)(iVar5 + 0x220) = fVar1;
  if (*(float *)(iVar5 + 0x21c) < fVar1) {
    iVar5 = 1;
    iVar6 = 0x224;
    lVar4 = 2;
    *(unsigned int *)(*(int *)(param_2 + 0x40) + 0x220) = ltcg_pool_0_0f;
    do {
      piVar2 = *(int **)(param_2 + 0x40);
      if ((*(int *)(iVar6 + (int)piVar2) == 0) || (*(int *)((int)piVar2 + iVar6 + 8) == 0)) {
        puVar3 = *(unsigned int **)(*(int *)(*piVar2 + 0xd4) + 0xc);
        stack_pair_60.first = 0;
        stack_pair_60.second = 0;
        fn_82273CD8(&stack_pair_60.first,3);
        dStack_58 = (double)(__int64)iVar5;
        fn_82672C20(*puVar3,0xffffffff821abaa0,&stack_pair_60.first,1);
        puVar3 = &stack_pair_60.first;
      }
      else {
        puVar3 = *(unsigned int **)(*(int *)(*piVar2 + 0xd4) + 0xc);
        stack_pair_70.first = 0;
        stack_pair_70.second = 0;
        fn_82273CD8(&stack_pair_70.first,3);
        dStack_68 = (double)(__int64)iVar5;
        fn_82672C20(*puVar3,0xffffffff821abac8,&stack_pair_70.first,1);
        puVar3 = &stack_pair_70.first;
      }
      fn_82273C88(puVar3);
      lVar4 = lVar4 + -1;
      iVar5 = iVar5 + 1;
      *(unsigned int *)(iVar6 + *(int *)(param_2 + 0x40)) =
           (unsigned int)LZCOUNT(*(unsigned int *)(iVar6 + *(int *)(param_2 + 0x40))) >> 5;
      iVar6 = iVar6 + 4;
    } while (lVar4 != 0);
  }
  return;
}
