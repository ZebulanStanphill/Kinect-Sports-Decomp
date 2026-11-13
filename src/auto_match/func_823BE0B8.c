#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_68;
extern int fn_8223C610();
extern int fn_823B4900();
extern int fn_82F64318();
extern int fn_82F643F8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6B030();
extern unsigned int lbl_82195520;
extern unsigned int lbl_82195528;
extern unsigned int lbl_831D2D78;
extern unsigned int lbl_832976B0;
extern unsigned int lbl_832976B8;
extern unsigned int lbl_832976C0;
extern unsigned int uStack_70;


void fn_823BE0B8(void)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int uVar7;
  __int64 lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned __int64 uStack_70;
  float fStack_68;
  
  uVar2 = fn_82F6A548();
  uVar7 = lbl_832976B0;
  if ((lbl_832976B0 & 1) == 0) {
    uVar7 = lbl_832976B0 | 1;
    lbl_832976B0 = uVar7;
    dVar9 = (double)fn_82F6B030(0x20000);
    lbl_832976B8 = (__int64)SQRT(dVar9);
    uStack_70 = lbl_832976B8;
  }
  if ((uVar7 & 2) == 0) {
    lbl_832976B0 = uVar7 | 2;
    lbl_832976C0 = lbl_832976B8 * lbl_832976B8;
  }
  lVar3 = fn_8223C610(uVar2,1,0,0);
  lVar4 = fn_8223C610(uVar2,1,0,0);
  lVar5 = fn_8223C610(uVar2,1,0,0);
  lVar6 = fn_823B4900(uVar2,0x11,0,0);
  dVar9 = (double)fn_82F6B030();
  lVar8 = (__int64)SQRT(dVar9);
  uStack_70 = lVar8;
  dVar10 = (double)fn_82F6B030(lVar6 - lVar8 * lVar8);
  dVar10 = dVar10 + lbl_82195520;
  dVar9 = lbl_82195520;
  dVar11 = (double)fn_82F6B030(lVar8 * 2 + 1);
  dVar13 = (double)lbl_831D2D78;
  dVar12 = (dVar10 / dVar11) * dVar13;
  dVar10 = (double)fn_82F6B030(lVar8);
  dVar10 = dVar10 + dVar9;
  dVar11 = (double)fn_82F6B030(lbl_832976B8);
  dVar9 = lbl_82195528;
  dVar10 = (double)fn_82F64318((double)(float)((lbl_82195528 - dVar10 / dVar11) * dVar13));
  dVar13 = (double)(float)dVar10;
  dVar11 = (double)(float)dVar12;
  dVar10 = SQRT(dVar9 - (double)(float)(dVar13 * dVar13));
  dVar9 = (double)fn_82F643F8(dVar11);
  dVar12 = (double)(float)((double)(float)dVar9 * dVar10);
  dVar9 = (double)fn_82F64318(dVar11);
  fStack_68 = (float)((double)(float)dVar9 * dVar10);
  if (lVar3 != 0) {
    dVar12 = -dVar12;
  }
  if (lVar4 != 0) {
    dVar13 = -dVar13;
  }
  if (lVar5 != 0) {
    fStack_68 = -fStack_68;
  }
  puVar1 = (unsigned int *)((int)&uStack_70 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uStack_70 = CONCAT44((float)dVar12,(float)dVar13);
  fn_82F6A594();
  return;
}

