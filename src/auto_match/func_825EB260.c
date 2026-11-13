extern int fn_8254A870();
extern int fn_82553008();
extern unsigned int ltcg_pool_0_0f;


void fn_825EB260(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  float *pfVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  
  uVar2 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar5 = (unsigned __int64)uVar2;
  if (0 < (int)uVar2) {
    iVar6 = 0;
    dVar8 = (double)ltcg_pool_0_0f;
    do {
      iVar3 = *(int *)(param_1 + 0x10) + 3;
      piVar7 = (int *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 8)) + iVar6);
      if ((((piVar7[2] != 0) || (piVar7[3] != 0)) || (piVar7[4] != 0)) || (piVar7[5] != 0)) {
        fn_82553008((unsigned __int64)*(unsigned int *)*piVar7 + 0x20,(unsigned int *)*piVar7 + iVar3 * 4);
        piVar1 = (int *)*piVar7;
        if ((piVar1[*(int *)(param_1 + 0x10) + 0x1e] & 0x1000U) != 0) {
          iVar3 = *piVar1;
          pfVar4 = (float *)(piVar1 + (*(int *)(param_1 + 0x10) + 5) * 4);
          *(unsigned __int64 *)(iVar3 + 0x40) = *(unsigned __int64 *)pfVar4;
          *(unsigned __int64 *)(iVar3 + 0x48) = *(unsigned __int64 *)(pfVar4 + 2);
          fn_8254A870((double)*pfVar4,(double)pfVar4[1],(double)pfVar4[2]);
        }
        (**(int (***)())(**(int **)(*(int *)*piVar7 + 0x1a8) + 0xc))
                  (*(int **)(*(int *)*piVar7 + 0x1a8),*(unsigned int *)(param_1 + 0x10));
        piVar7 = (int *)*piVar7;
        (**(int (***)())(**(int **)(*piVar7 + 0x1a8) + 4))
                  ((double)*(float *)(*(int *)(param_1 + 4) + 0xae0),
                   (double)*(float *)(param_1 + 0x38),dVar8,*(int **)(*piVar7 + 0x1a8),
                   *(int *)(param_1 + 0x10),
                   *(int *)(param_1 + 0x10) * 0x200 + *(int *)(param_1 + 4) + 0x50,piVar7[2],
                   piVar7[*(int *)(param_1 + 0x10) + 0x1e],0,
                   -(unsigned __int64)((piVar7[*(int *)(param_1 + 0x10) + 0x1e] & 0x100U) == 0));
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + 0x18;
    } while (uVar5 != 0);
  }
  return;
}

