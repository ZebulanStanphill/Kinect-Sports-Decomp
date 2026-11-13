extern int fn_822939A8();
extern int fn_82414F58();
extern int fn_82415090();
extern unsigned int ltcg_pool_0_0f;


void fn_8241D080(double param_1,int *param_2)

{
  int iVar1;
  char cVar3;
  short sVar2;
  __int64 lVar4;
  short *psVar5;
  int iVar6;
  unsigned int uVar7;
  short sVar8;
  int iVar9;
  unsigned int uVar10;
  double dVar11;
  short asStack_80 [8];
  
  dVar11 = (double)ltcg_pool_0_0f;
  if (((double)(float)param_2[0x8c] <= dVar11) &&
     (*(int *)(param_2[6] * 0x1ac + param_2[2] + 0x10) != 0)) {
    uVar7 = 1;
    iVar6 = 0;
    psVar5 = asStack_80;
    lVar4 = 10;
    do {
      iVar1 = *(int *)(param_2[6] * 0x1ac + param_2[2] + 8);
      cVar3 = fn_82414F58(*(unsigned int *)(iVar6 + *(int *)(iVar1 + 4)));
      if (cVar3 == '\0') {
        *psVar5 = -1;
      }
      else {
        sVar8 = 0;
        uVar10 = 0;
        if (uVar7 != 0) {
          iVar9 = 0;
          sVar8 = 0;
          do {
            sVar2 = fn_82415090(*(unsigned int *)(iVar9 + *(int *)(iVar1 + 4)));
            uVar10 = uVar10 + 1;
            sVar8 = sVar2 + sVar8;
            iVar9 = iVar9 + 4;
          } while (uVar10 < uVar7);
        }
        *psVar5 = sVar8;
      }
      lVar4 = lVar4 + -1;
      iVar6 = iVar6 + 4;
      uVar7 = uVar7 + 1;
      psVar5 = psVar5 + 1;
    } while (lVar4 != 0);
    iVar6 = *(int *)(param_2[6] * 0x1ac + param_2[2] + 0xc);
    if (-1 < iVar6) {
      fn_822939A8(*(unsigned int *)(*param_2 + 0xd4),iVar6,asStack_80);
    }
    *(unsigned int *)(param_2[6] * 0x1ac + param_2[2] + 0x10) = 0;
  }
  if (dVar11 < (double)(float)param_2[0x8c]) {
    param_2[0x8c] = (int)(float)((double)(float)param_2[0x8c] - param_1);
  }
  return;
}

