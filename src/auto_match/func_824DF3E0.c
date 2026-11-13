extern int fn_82F63108();
extern unsigned int uStack_30;


void fn_824DF3E0(unsigned int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  unsigned __int64 uStack_30;
  
  fVar1 = (float)param_1[5];
  fVar2 = (float)param_1[7];
  fVar3 = (float)param_1[4];
  pfVar4 = (float *)*param_1;
  while ((pfVar4 != (float *)param_1[1] && ((float)param_1[4] <= (float)param_1[7] - *pfVar4))) {
    pfVar11 = (float *)param_1[1];
    pfVar10 = pfVar4 + 2;
    if (pfVar4 + 2 != pfVar11) {
      pfVar8 = pfVar4 + -2;
      do {
        pfVar8[2] = *pfVar10;
        pfVar6 = pfVar10 + 1;
        pfVar10 = pfVar10 + 2;
        pfVar8[3] = *pfVar6;
        pfVar8 = pfVar8 + 2;
      } while (pfVar10 != pfVar11);
    }
    iVar9 = param_1[1] + -8;
    for (iVar7 = iVar9; iVar7 != param_1[1]; iVar7 = iVar7 + 8) {
    }
    param_1[1] = iVar9;
  }
  if ((fVar3 <= fVar2 - fVar1) && (pfVar4 != (float *)param_1[1])) {
    uStack_30 = *(unsigned __int64 *)pfVar4;
    pfVar11 = pfVar4 + 2;
    if (pfVar4 + 2 != (float *)param_1[1]) {
      do {
        piVar5 = (int *)param_1[0xc];
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        iVar7 = (**(int (***)())(*piVar5 + 4))(piVar5,(int)&uStack_30 + 4,pfVar11 + 1);
        if (iVar7 != 0) {
          uStack_30 = *(unsigned __int64 *)pfVar11;
        }
        pfVar11 = pfVar11 + 2;
      } while (pfVar11 != (float *)param_1[1]);
    }
    *(unsigned __int64 *)(param_1 + 5) = uStack_30;
  }
  return;
}

