extern int fn_825C8BC0();
extern int fn_825CCAE0();
extern int fn_82623298();
extern int fn_82623338();
extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;


void fn_825EDCF8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  double dVar8;
  
  puVar4 = *(unsigned int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 5) * 4 + param_1);
  uVar1 = *puVar4;
  if (*(int *)(param_1 + 8) == 0) {
    fn_82623298(puVar4,0,0);
    if (0 < *(int *)(*(int *)(**(int **)(param_1 + 4) + 0x8c4) + 8)) {
      uVar2 = *(unsigned int *)(**(int **)(param_1 + 4) + 0x8c4);
      uVar6 = (unsigned __int64)uVar2;
      iVar3 = *(int *)(uVar2 + 4);
      if ((*(int *)(iVar3 + 0x10) == 1) && (0 < *(int *)(uVar2 + 8))) {
        dVar8 = (double)ltcg_pool_0_0f;
        if ((double)*(float *)(iVar3 + 0x838) <= dVar8) {
          dVar8 = (double)(*(float *)(iVar3 + 0x820) * lbl_8327F894);
        }
        lVar5 = uVar6 + 0xc;
        lVar7 = 8;
        do {
          if (*(int *)lVar5 != 0) {
            dVar8 = (double)fn_825C8BC0(dVar8);
          }
          lVar7 = lVar7 + -1;
          lVar5 = lVar5 + 4;
        } while (lVar7 != 0);
        fn_825CCAE0(*(unsigned int *)((int)uVar6 + 0x3c),uVar1);
      }
    }
  }
  else {
    fn_82623298(puVar4,0,0);
  }
  fn_82623338(puVar4);
  return;
}

