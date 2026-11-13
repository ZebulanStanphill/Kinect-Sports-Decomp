#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_90;
extern unsigned int *auStack_d8;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c8;
extern int fn_824AA7E8();
extern int fn_8255A868();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_e0;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;


void fn_824AA530(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  float fVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iStack_e0;
  unsigned int uStack_dc;
  unsigned int auStack_d8 [2];
  unsigned __int64 uStack_d0;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  unsigned char auStack_90 [144];
  
  pfVar2 = (float *)fn_82F6A53C();
  piVar4 = (int *)param_2;
  (**(int (***)())*piVar4)(param_2,auStack_d8,&uStack_dc);
  fVar1 = lbl_821CA1A8;
  fVar6 = lbl_821CA1A0;
  uVar5 = (unsigned __int64)uStack_dc - 5;
  uVar8 = (unsigned __int64)auStack_d8[0];
  if ((int)auStack_d8[0] < (int)uVar5) {
    uVar8 = uVar5;
  }
  if ((uVar8 & 0xffffffff) == (unsigned __int64)uStack_dc) {
    pfVar2[1] = lbl_821CA1A4;
    pfVar2[2] = fVar1;
  }
  else {
    uVar7 = 0;
    fStack_c0 = lbl_821CA1A0;
    fStack_bc = lbl_821CA1A4;
    fStack_b8 = lbl_821CA1A8;
    (**(int (***)())(*piVar4 + 4))(param_2,uVar8,&iStack_e0);
    pfVar3 = (float *)fn_824AA7E8(&fStack_a0,iStack_e0,param_3,param_4);
    uVar8 = uVar8 + 1;
    fStack_ac = pfVar3[1];
    fStack_a8 = pfVar3[2];
    fStack_b0 = *pfVar3;
    uStack_d0 = (unsigned __int64)*(unsigned int *)(iStack_e0 + 0x48);
    dVar10 = (double)lbl_82193CC0;
    if ((uVar8 & 0xffffffff) <= (unsigned __int64)uStack_dc) {
      dVar13 = (double)fStack_b8;
      dVar14 = (double)fStack_bc;
      dVar15 = (double)fStack_c0;
      dVar11 = (double)ltcg_pool_0_0f;
      dVar12 = (double)lbl_821CA460;
      dVar9 = (double)(float)((double)uStack_d0 * dVar10);
      do {
        (**(int (***)())(*piVar4 + 4))(param_2,uVar8,&iStack_e0);
        pfVar3 = (float *)fn_824AA7E8(auStack_90,iStack_e0,param_3,param_4);
        fStack_c0 = *pfVar3;
        fStack_bc = pfVar3[1];
        fStack_b8 = pfVar3[2];
        fn_8255A868(&fStack_a0,&fStack_c0,&fStack_b0);
        uStack_d0 = (unsigned __int64)*(unsigned int *)(iStack_e0 + 0x48);
        dVar9 = (double)(float)((double)(float)((double)uStack_d0 * dVar10) - dVar9);
        if (dVar11 < dVar9) {
          fVar6 = (float)(dVar12 / dVar9);
          uVar7 = uVar7 + 1;
          dVar15 = (double)(float)(dVar15 + (double)(fStack_a0 * fVar6));
          dVar14 = (double)(float)(dVar14 + (double)(fStack_9c * fVar6));
          dVar13 = (double)(float)(dVar13 + (double)(fStack_98 * fVar6));
        }
        uVar8 = uVar8 + 1;
        fStack_b0 = fStack_c0;
        fStack_ac = fStack_bc;
        fStack_a8 = fStack_b8;
        dVar9 = (double)(float)((double)uStack_d0 * dVar10);
      } while ((uVar8 & 0xffffffff) <= (unsigned __int64)uStack_dc);
      if (uVar7 != 0) {
        dVar10 = (double)(float)(dVar12 / (double)uVar7);
        fStack_c8 = (float)(dVar13 * dVar10);
        uStack_d0 = CONCAT44((float)(dVar15 * dVar10),(float)(dVar14 * dVar10));
        pfVar2[2] = fStack_c8;
        pfVar2[1] = (float)(dVar14 * dVar10);
        *pfVar2 = (float)(dVar15 * dVar10);
        goto LAB_824aa7d4;
      }
    }
    fVar1 = lbl_821CA1A8;
    fVar6 = lbl_821CA1A0;
    pfVar2[1] = lbl_821CA1A4;
    pfVar2[2] = fVar1;
  }
  *pfVar2 = fVar6;
LAB_824aa7d4:
  fn_82F6A588(pfVar2);
  return;
}

