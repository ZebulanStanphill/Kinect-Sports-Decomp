extern int fn_825FBB80();
extern int fn_82602708();
extern int fn_82602D20();
extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;


void fn_82599958(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int *piVar5;
  int iVar6;
  __int64 lVar7;
  double dVar8;
  double dVar9;
  
  lVar4 = 6;
  dVar9 = (double)ltcg_pool_0_0f;
  piVar5 = param_1;
  do {
    piVar1 = (int *)*piVar5;
    lVar7 = 0;
    iVar2 = param_1[7];
    if (0 < *piVar1) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar6 + piVar1[1]);
        if ((iVar3 != 0) && (fn_82602D20(iVar2,iVar3), *(int *)(iVar3 + 0x254) == 7)) {
          dVar8 = dVar9;
          if ((double)*(float *)(iVar2 + 0x838) <= dVar9) {
            dVar8 = (double)(*(float *)(iVar2 + 0x820) * lbl_8327F894);
          }
          iVar3 = fn_82602708(dVar8,iVar2,iVar3);
          if (iVar3 == 0) {
            fn_825FBB80(piVar1,lVar7);
          }
        }
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 4;
      } while ((int)lVar7 < *piVar1);
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 1;
  } while (lVar4 != 0);
  return;
}

