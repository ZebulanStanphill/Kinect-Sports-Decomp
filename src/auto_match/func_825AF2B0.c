typedef unsigned char bool;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_60;
extern int fn_8223C200();
extern int fn_8223C478();
extern int fn_8287C3E8();
extern int fn_828E9F18();
extern int fn_82F65018();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_82F6B030();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195528;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D4548;
extern unsigned int lbl_83297A30;
extern unsigned int lbl_832993C8;
extern unsigned int lbl_832993D0;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_825AF2B0(unsigned __int64 param_1,float *param_2)

{
  unsigned __int64 uVar1;
  char cVar2;
  unsigned __int64 *puVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  float fStack_60;
  
  uVar1 = fn_82F6A544();
  uVar5 = lbl_832993D0;
  if ((lbl_832993D0 & 1) == 0) {
    uVar5 = lbl_832993D0 | 1;
    lbl_832993D0 = uVar5;
    dVar8 = (double)fn_82F6B030(0x2000);
    lbl_83297A30 = (unsigned __int64)SQRT(dVar8);
    uStack_70 = lbl_83297A30;
  }
  if ((uVar5 & 2) == 0) {
    lbl_832993D0 = uVar5 | 2;
    lbl_832993C8 = lbl_83297A30 * lbl_83297A30;
  }
  uStack_68 = *(unsigned __int64 *)param_2;
  dVar10 = (double)param_2[1];
  dVar12 = (double)ltcg_pool_0_0f;
  fStack_60 = param_2[2];
  dVar9 = (double)param_2[2];
  dVar8 = (double)*param_2;
  bVar7 = dVar8 < dVar12;
  if (bVar7) {
    dVar8 = -dVar8;
  }
  dVar11 = dVar10;
  fn_8223C200(uVar1,bVar7,0,param_2[1],*param_2);
  if (dVar11 < dVar12) {
    dVar10 = -dVar11;
  }
  fn_8223C200(uVar1,dVar11 < dVar12,0);
  bVar7 = dVar9 < dVar12;
  if (bVar7) {
    dVar9 = -dVar9;
  }
  fn_8223C200(uVar1,bVar7,0);
  cVar2 = fn_8287C3E8(dVar9);
  if ((cVar2 == '\0') || (cVar2 = fn_8287C3E8(dVar8), dVar12 = lbl_82195518, cVar2 == '\0')) {
    dVar12 = (double)fn_82F65018(dVar9,dVar8);
  }
  dVar8 = (double)fn_82F65018(dVar10,SQRT(dVar9 * dVar9 + dVar8 * dVar8));
  uVar4 = lbl_83297A30;
  dVar9 = (double)lbl_831D4548;
  dVar12 = dVar12 / dVar9;
  dVar10 = (double)fn_82F6B030(lbl_83297A30);
  uStack_68 = uVar4 - 1;
  uStack_70 = (unsigned __int64)((lbl_82195528 - dVar8 / dVar9) * dVar10);
  puVar3 = &uStack_68;
  if (uStack_70 <= uVar4 - 1) {
    puVar3 = &uStack_70;
  }
  uVar6 = *puVar3;
  uVar4 = uVar6 * 2;
  dVar8 = (double)fn_82F6B030(uVar4 + 1);
  uStack_70 = uVar4;
  uStack_68 = (__int64)(dVar8 * dVar12);
  puVar3 = &uStack_70;
  if ((unsigned __int64)(__int64)(dVar8 * dVar12) <= uVar4) {
    puVar3 = &uStack_68;
  }
  uVar4 = *puVar3;
  fn_8223C478(uVar1,0xd,0);
  fn_828E9F18(uVar1,uVar6 * uVar6 + uVar4,0xd);
  fn_82F6A590();
  return;
}

