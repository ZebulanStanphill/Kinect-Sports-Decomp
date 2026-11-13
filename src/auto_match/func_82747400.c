typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_82745028();
extern int fn_827451A8();
extern int fn_827459D8();
extern int fn_82746C20();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82005710;


void fn_82747400(void)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar6;
  char cVar7;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  double *pdVar8;
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
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [32];
  
  iVar6 = fn_82F6A538();
  dStack_e0 = lbl_82005710;
  dStack_d8 = lbl_82005710;
  dStack_d0 = lbl_82005710;
  dStack_c8 = lbl_82005710;
  dVar16 = lbl_82005710;
  dVar17 = lbl_82005710;
  dVar18 = lbl_82005710;
  dVar19 = lbl_82005710;
  dVar20 = lbl_82005710;
  cVar7 = fn_82695468(iVar6,0x11);
  if (cVar7 == '\0') {
    fn_826954C0(iVar6,0xffffffff8200eef4,0,0);
  }
  else {
    lVar9 = (unsigned __int64)*(unsigned int *)(iVar6 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(iVar6 + 8) == 0) {
      lVar9 = 0;
    }
    if (0 < *(int *)(iVar6 + 0x1c)) {
      uVar1 = *(unsigned int *)(iVar6 + 0x18);
      uVar3 = fn_826957D0(iVar6,0);
      lVar4 = fn_82696958(uVar3,uVar1);
      if (lVar4 != 0) {
        pdVar8 = &dStack_b0;
        lVar11 = 4;
        do {
          pdVar8 = pdVar8 + 2;
          *(unsigned char *)pdVar8 = 0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        dStack_c0 = dVar20;
        dStack_b8 = dVar20;
        dStack_b0 = dVar20;
        dStack_a8 = dVar20;
        fn_827459D8(lVar9,*(unsigned int *)(iVar6 + 0x18),&dStack_c0);
        fn_82745028(*(unsigned int *)(iVar6 + 0x18),lVar4,auStack_a0);
        dVar12 = (double)fn_826972E0(auStack_70,*(unsigned int *)(iVar6 + 0x18));
        dVar13 = (double)fn_826972E0(auStack_80,*(unsigned int *)(iVar6 + 0x18));
        dVar14 = (double)fn_826972E0(auStack_90,*(unsigned int *)(iVar6 + 0x18));
        dVar15 = (double)fn_826972E0(auStack_a0,*(unsigned int *)(iVar6 + 0x18));
        dVar12 = dVar14 + dVar12;
        dVar13 = dVar13 + dVar15;
        if ((((dStack_a8 < dVar14) || (dVar12 < dStack_b8)) || (dVar13 < dStack_c0)) ||
           (bVar2 = true, dStack_b0 < dVar15)) {
          bVar2 = false;
        }
        if (bVar2) {
          if (dVar15 < dStack_c0) {
            dVar15 = dStack_c0;
          }
          dVar17 = dStack_b0;
          if (dVar13 < dStack_b0) {
            dVar17 = dVar13;
          }
          if (dVar14 < dStack_b8) {
            dVar14 = dStack_b8;
          }
          dVar16 = dVar15;
          dVar18 = dVar14;
          dVar19 = dStack_a8;
          dStack_e0 = dVar15;
          dStack_d8 = dVar14;
          dStack_d0 = dVar17;
          dStack_c8 = dStack_a8;
          if (dVar12 < dStack_a8) {
            dVar19 = dVar12;
            dStack_c8 = dVar12;
          }
        }
        if ((dVar17 - dVar16 == dVar20) || (dVar19 - dVar18 == dVar20)) {
          dStack_e0 = dVar20;
          dStack_d8 = dVar20;
          dStack_d0 = dVar20;
          dStack_c8 = dVar20;
        }
        puVar10 = auStack_60;
        lVar9 = 3;
        do {
          puVar10 = puVar10 + -0x10;
          fn_82696330(puVar10);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
    uVar5 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(iVar6 + 0x18) + 0x78) + 0x288),0x30,
                              0);
    if ((uVar5 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82746C20(uVar5,*(unsigned int *)(iVar6 + 0x18));
    }
    fn_827451A8(uVar5,*(unsigned int *)(iVar6 + 0x18),&dStack_e0);
    fn_82696BC8(*(unsigned int *)(iVar6 + 4),uVar5);
    if ((uVar5 & 0xffffffff) != 0) {
      fn_826824B0(uVar5);
    }
  }
  fn_82F6A584();
  return;
}

