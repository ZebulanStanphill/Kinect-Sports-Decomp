extern int fn_8251F720();
extern int fn_82588380();
extern int fn_82A1E230();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821961F0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B850;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B86C;
extern unsigned int lbl_8326B874;
extern unsigned int lbl_8326B878;
extern unsigned int lbl_8326B87C;
extern unsigned int lbl_8326B8D8;
extern unsigned int lbl_8326B8DC;
extern unsigned int lbl_8326B8E0;
extern unsigned int lbl_8326B8E4;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_8326B8F8;
extern unsigned int uRam8326b854;
extern unsigned int uRam8326b858;
extern unsigned int uRam8326b864;
extern unsigned int uRam8326b868;
extern unsigned int uRam8326b870;


void fn_82587D90(void)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  
  iVar4 = fn_82A1E230();
  if (iVar4 == 2) {
    uVar9 = 1;
  }
  else if (iVar4 == 7) {
    uVar9 = 2;
  }
  else if (iVar4 == 8) {
    uVar9 = 4;
  }
  else {
    if (iVar4 != 10) {
      uVar9 = 0;
      lbl_8326B8F8 = 0;
      goto LAB_82587dc8;
    }
    uVar9 = 3;
  }
  lbl_8326B8F8 = 1;
LAB_82587dc8:
  iVar4 = 0;
  do {
    iVar8 = lbl_8326B8E0;
    if ((((uVar9 != 1) && (iVar8 = lbl_8326B8E4, uVar9 != 2)) && (iVar8 = lbl_8326B8D8, 2 < uVar9))
       && (uVar9 < 5)) {
      iVar8 = lbl_8326B8DC;
    }
    uVar5 = fn_8251F720(iVar4 + iVar8,0);
    *(unsigned int *)((int)&lbl_8326B8E8 + iVar4) = uVar5;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 8);
  fn_82588380();
  uRam8326b864 = 0;
  uRam8326b854 = 0;
  puVar7 = (unsigned int *)0x831e7820;
  lbl_8326B85C = lbl_821CA460;
  lbl_8326B860 = lbl_821CA460;
  lbl_8326B850 = 0;
  puVar6 = (unsigned int *)0x832700d8;
  uRam8326b858 = lbl_821961F0;
  lbl_8326B874 = *(float *)(lbl_8326B8E8 + 0x10) * lbl_8218E8E8;
  lbl_8326B878 = *(float *)(lbl_8326B8E8 + 0x10) * lbl_8218E8E8;
  uRam8326b868 = ltcg_pool_0_0f;
  uRam8326b870 = lbl_821916FC;
  lbl_8326B87C = ltcg_pool_0_0f;
  lbl_8326B86C = ltcg_pool_0_0f;
  do {
    psVar3 = (short *)*puVar7;
    iVar4 = 0;
    sVar2 = *psVar3;
    psVar1 = psVar3;
    while (sVar2 != 0) {
      psVar1 = psVar1 + 6;
      iVar4 = iVar4 + 1;
      sVar2 = *psVar1;
    }
    puVar6[1] = iVar4;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 2;
    *puVar6 = psVar3;
  } while ((int)puVar7 < -0x7ce187d8);
  return;
}

