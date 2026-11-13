extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F655D8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820A6D70;
extern unsigned int lbl_820E8890;
extern unsigned int lbl_83175050;
extern unsigned int lbl_8329EB60;
extern unsigned int lbl_8329EB80;
extern unsigned int lbl_8329EC80;
extern unsigned int uRam8329eec0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BE0810(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  __int64 lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  unsigned __int64 uVar9;
  double dVar10;
  
  fn_82F6A548();
  uRam8329eec0 = lbl_82005718;
  lbl_8329EC80 = 0x14;
  iVar2 = 0;
  iVar3 = 0;
  dVar8 = lbl_82005758;
  uVar9 = lbl_82015618;
  dVar10 = lbl_820E8890;
  do {
    dVar6 = (double)fn_82F655D8(uVar9,(double)(__int64)(iVar2 + -0x18) * dVar10);
    *(float *)(iVar3 + -0x7cd61120) = (float)dVar6;
    iVar2 = iVar2 + 1;
    fVar1 = SQRT((float)dVar6);
    *(float *)(iVar3 + -0x7cd61240) = fVar1;
    *(float *)(&lbl_8329EB80 + iVar3) = (float)(dVar8 / (double)fVar1);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x100);
  iVar2 = 0;
  pfVar4 = (float *)0x8329ecc0;
  dVar6 = lbl_82005730;
  do {
    dVar7 = (double)fn_82F655D8(uVar9,((double)(__int64)(iVar2 + -0x18) + dVar6) * dVar10);
    *pfVar4 = (float)dVar7;
    dVar7 = lbl_820A6D70;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar4 < -0x7cd61244);
  iVar2 = 0;
  lVar5 = 8;
  do {
    *(int *)(iVar2 + -0x7cd61360) =
         (int)(dVar7 / ((double)(__int64)*(int *)(&lbl_83175050 + iVar2) + dVar8) + dVar8);
    iVar2 = iVar2 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar2 = 0;
  lVar5 = 8;
  do {
    *(float *)(&lbl_8329EB60 + iVar2) = (float)(dVar8 / (double)*(float *)(iVar2 + -0x7ce8afd0));
    iVar2 = iVar2 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82F6A594();
  return;
}

