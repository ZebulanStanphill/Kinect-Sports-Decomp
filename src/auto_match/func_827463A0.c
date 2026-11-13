typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_82745028();
extern int fn_827459D8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005710;


void fn_827463A0(void)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar5;
  char cVar6;
  unsigned __int64 uVar3;
  __int64 lVar4;
  double *pdVar7;
  unsigned char uVar8;
  __int64 lVar9;
  unsigned char *puVar10;
  __int64 lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [1];
  
  iVar5 = fn_82F6A548();
  cVar6 = fn_82695468(iVar5,0x11);
  if (cVar6 == '\0') {
    fn_826954C0(iVar5,0xffffffff8200eef4,0,0);
  }
  else {
    uVar8 = 0;
    lVar9 = (unsigned __int64)*(unsigned int *)(iVar5 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(iVar5 + 8) == 0) {
      lVar9 = 0;
    }
    if (0 < *(int *)(iVar5 + 0x1c)) {
      uVar1 = *(unsigned int *)(iVar5 + 0x18);
      uVar3 = fn_826957D0(iVar5,0);
      lVar4 = fn_82696958(uVar3,uVar1);
      dVar20 = lbl_82005710;
      if (lVar4 != 0) {
        pdVar7 = &dStack_a0;
        dStack_b0 = lbl_82005710;
        lVar11 = 4;
        dStack_a8 = lbl_82005710;
        dStack_a0 = lbl_82005710;
        dStack_98 = lbl_82005710;
        do {
          pdVar7 = pdVar7 + 2;
          *(unsigned char *)pdVar7 = 0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        fn_827459D8(lVar9,*(unsigned int *)(iVar5 + 0x18),&dStack_b0);
        fn_82745028(*(unsigned int *)(iVar5 + 0x18),lVar4,auStack_90);
        dVar13 = (double)fn_826972E0(auStack_60,*(unsigned int *)(iVar5 + 0x18));
        dVar14 = (double)fn_826972E0(auStack_70,*(unsigned int *)(iVar5 + 0x18));
        dVar15 = (double)fn_826972E0(auStack_80,*(unsigned int *)(iVar5 + 0x18));
        dVar16 = (double)fn_826972E0(auStack_90,*(unsigned int *)(iVar5 + 0x18));
        dVar13 = dVar15 + dVar13;
        dVar14 = dVar14 + dVar16;
        if ((((dStack_98 < dVar15) || (dVar13 < dStack_a8)) || (dVar14 < dStack_b0)) ||
           (bVar2 = true, dStack_a0 < dVar16)) {
          bVar2 = false;
        }
        dVar12 = dVar20;
        dVar17 = dVar20;
        dVar18 = dVar20;
        dVar19 = dVar20;
        if (bVar2) {
          if (dVar16 < dStack_b0) {
            dVar16 = dStack_b0;
          }
          dVar18 = dStack_a0;
          if (dVar14 < dStack_a0) {
            dVar18 = dVar14;
          }
          if (dVar15 < dStack_a8) {
            dVar15 = dStack_a8;
          }
          dVar12 = dStack_98;
          dVar17 = dVar16;
          dVar19 = dVar15;
          if (dVar13 < dStack_98) {
            dVar12 = dVar13;
          }
        }
        uVar8 = 1;
        if ((dVar18 - dVar17 == dVar20) || (dVar12 - dVar19 == dVar20)) {
          uVar8 = 0;
        }
        puVar10 = auStack_50;
        lVar9 = 3;
        do {
          puVar10 = puVar10 + -0x10;
          fn_82696330(puVar10);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
    puVar10 = *(unsigned char **)(iVar5 + 4);
    fn_826959C8(puVar10);
    puVar10[4] = uVar8;
    *puVar10 = 2;
  }
  fn_82F6A594();
  return;
}

