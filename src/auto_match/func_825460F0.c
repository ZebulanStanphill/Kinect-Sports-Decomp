#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_b0;
extern float fRam8326c224;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82560218();
extern int fn_8259EF60();
extern int fn_8259F0E8();
extern int fn_8259F600();
extern int fn_825B1A20();
extern int fn_825B1E50();
extern int fn_825B2010();
extern int fn_825B2080();
extern int fn_82F6A520();
extern int fn_82F6A56C();
extern int iRam8326b46c;
extern unsigned int ltcg_pool_0_0f;


void fn_825460F0(void)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  unsigned char auStack_b0 [176];
  
  iVar1 = fn_82F6A520();
  dVar9 = (double)ltcg_pool_0_0f;
  if (iRam8326b46c != 0) {
    puVar3 = *(unsigned int **)(iVar1 + 0x1ac);
    uVar6 = ZEXT48(puVar3);
    iVar7 = puVar3[0xf];
    dVar22 = (double)(float)puVar3[3];
    uVar4 = *puVar3;
    dVar21 = (double)(float)puVar3[4];
    dVar20 = (double)(float)puVar3[1];
    dVar19 = (double)(float)puVar3[2];
    dVar18 = (double)(float)puVar3[5];
    dVar17 = (double)(float)puVar3[0xc];
    dVar16 = (double)(float)puVar3[0xd];
    uVar2 = fn_825B2010(uVar6);
    iVar5 = (int)uVar6;
    dVar15 = (double)*(float *)(iVar5 + 0x60);
    dVar14 = (double)*(float *)(iVar5 + 100);
    dVar13 = (double)*(float *)(iVar5 + 0x68);
    dVar12 = (double)*(float *)(iVar5 + 0x6c);
    dVar11 = (double)*(float *)(iVar5 + 0x70);
    dVar10 = (double)*(float *)(iVar5 + 0x74);
    fn_825B1E50(uVar6);
    puVar3 = (unsigned int *)fn_825B1A20();
    if (puVar3 != (unsigned int *)0x0) {
      *(unsigned int **)(iVar1 + 0x1ac) = puVar3;
      if (iVar7 != 0) {
        puVar3[0xf] = 1;
        puVar3[1] = (float)dVar9;
        puVar3[2] = (float)dVar9;
        puVar3[3] = (float)dVar9;
        puVar3[4] = (float)dVar9;
        puVar3[0xc] = (float)dVar9;
        puVar3[0xd] = (float)dVar9;
      }
      *puVar3 = uVar4;
      puVar3[3] = (float)dVar22;
      puVar3[4] = (float)dVar21;
      puVar3[1] = (float)dVar20;
      puVar3[2] = (float)dVar19;
      puVar3[5] = (float)dVar18;
      puVar3[0xc] = (float)dVar17;
      puVar3[0xd] = (float)dVar16;
      puVar3[0xe] = 0;
      puVar3[0x17] = uVar2;
      puVar3[0x18] = (float)dVar15;
      puVar3[0x19] = (float)dVar14;
      puVar3[0x1a] = (float)dVar13;
      puVar3[0x1b] = (float)dVar12;
      puVar3[0x1c] = (float)dVar11;
      puVar3[0x1d] = (float)dVar10;
      fn_82520158(0xffffffff821c8314,auStack_b0,0);
      if (puVar3[0x16] != 0) {
        fn_8251FA58(puVar3[0x16]);
      }
      uVar4 = fn_8251F720(auStack_b0,0);
      puVar3[0x16] = uVar4;
    }
  }
  lVar8 = 0;
  iVar7 = 0x3f4;
  do {
    iVar5 = fn_82560218(iVar1,lVar8);
    if (iVar5 != 0) {
      iVar5 = fn_8259F600(lVar8);
      if ((iVar5 == 0) || (*(int *)(*(int *)(iVar1 + 0x1a8) + iVar7) != 0)) {
        fn_825B2080(iVar1,lVar8,0xffffffff8326af58,0xffffffff8326afc0);
      }
      else if ((double)fRam8326c224 <= dVar9) {
        fn_8259EF60(iVar1,lVar8,0xffffffff8326af58,0xffffffff8326afc0);
      }
      else {
        fn_8259F0E8();
      }
    }
    iVar7 = iVar7 + 4;
    lVar8 = lVar8 + 1;
  } while (iVar7 < 0x3fc);
  fn_82F6A56C();
  return;
}

