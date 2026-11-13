extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82593FC8();
extern int fn_82594108();
extern int fn_825B6D50();
extern int fn_8260BA88();
extern int fn_82A1E850();
extern unsigned int lbl_8218EFD4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B4BC;
extern unsigned int lbl_8326B4C8;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82557FA8(void)

{
  unsigned int *puVar1;
  int iVar2;
  float *pfVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  int *piVar6;
  double dVar7;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  float afStack_58 [7];
  unsigned int uStack_3c;
  
  puVar5 = (unsigned int *)&lbl_8218EFD4;
  lbl_8326B4BC = 0;
  lVar4 = 0;
  do {
    iVar2 = fn_82A1E850(lVar4,auStack_70);
    if (iVar2 == 0) {
      lbl_8326B4BC = *puVar5 | lbl_8326B4BC;
    }
    puVar5 = puVar5 + 1;
    lVar4 = lVar4 + 1;
  } while ((int)puVar5 < -0x7de7101c);
  fn_82593FC8();
  piVar6 = &lbl_8326B4C8;
  dVar7 = (double)ltcg_pool_0_0f;
  do {
    puVar1 = (unsigned int *)*piVar6;
    iVar2 = fn_82A1E850(*puVar1,auStack_80);
    if (iVar2 == 0) {
      fn_825B6D50(puVar1,auStack_80);
    }
    else if (iVar2 == 0x48f) {
      afStack_58[1] = 0.0;
      uStack_60 = 0;
      pfVar3 = afStack_58;
      uStack_5c = 0;
      afStack_58[0] = 0.0;
      lVar4 = 2;
      do {
        pfVar3[3] = (float)dVar7;
        pfVar3 = pfVar3 + 2;
        *pfVar3 = (float)dVar7;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uStack_3c = 0;
      fn_8260BA88(puVar1 + 0xd,&uStack_60);
    }
    fn_82594108(*(unsigned int *)*piVar6);
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < -0x7cd94b28);
  return;
}

