#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
extern int fn_829B2110();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82028884;
extern unsigned int uStack_48;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_4d;
extern unsigned int uStack_4e;


unsigned __int64 fn_829B24E0(int param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  __int64 lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  float *pfVar13;
  unsigned int uVar15;
  unsigned __int64 uVar14;
  __int64 lVar16;
  unsigned char bStack_50;
  unsigned char bStack_4f;
  unsigned char uStack_4e;
  unsigned char uStack_4d;
  unsigned char uStack_4c;
  unsigned char uStack_4b;
  unsigned __int64 uStack_48;
  float afStack_40 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uStack_48 = *(unsigned __int64 *)(param_2 + 4);
  uVar10 = fn_829B2110(param_1,&uStack_48);
  fVar9 = lbl_82028884;
  fVar8 = lbl_82002C2C;
  if (-1 < (int)uVar10) {
    bStack_4f = (unsigned char)((unsigned short)uVar1 >> 8);
    bStack_50 = (unsigned char)uVar1;
    uVar15 = 1;
    pfVar13 = afStack_40 + 1;
    fVar6 = (float)bStack_50 * lbl_82005328;
    fVar7 = (float)bStack_4f * lbl_82005328;
    if (bStack_4f < bStack_50) {
      lVar16 = 6;
      do {
        uVar11 = 7 - uVar15;
        uVar14 = (unsigned __int64)uVar15;
        uVar15 = uVar15 + 1;
        pfVar13 = pfVar13 + 1;
        *pfVar13 = ((float)uVar11 * fVar6 + (float)uVar14 * fVar7) * fVar9;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    else {
      lVar16 = 4;
      do {
        pfVar13 = pfVar13 + 1;
        *pfVar13 = ((float)(5 - uVar15) * fVar6 + (float)uVar15 * fVar7) * fVar8;
        lVar16 = lVar16 + -1;
        uVar15 = uVar15 + 1;
      } while (lVar16 != 0);
    }
    uStack_4d = (unsigned char)((unsigned short)uVar2 >> 8);
    uStack_4c = (unsigned char)uVar3;
    puVar12 = (unsigned int *)(param_1 + -4);
    uStack_4e = (unsigned char)uVar2;
    lVar16 = 8;
    uVar14 = (unsigned __int64)CONCAT21(CONCAT11(uStack_4c,uStack_4d),uStack_4e);
    do {
      lVar5 = uVar14 << 2;
      uVar14 = uVar14 >> 3;
      puVar12 = puVar12 + 4;
      *puVar12 = *(unsigned int *)((int)afStack_40 + ((unsigned int)lVar5 & 0x1c));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    puVar12 = (unsigned int *)(param_1 + 0x7c);
    uStack_4b = (unsigned char)((unsigned short)uVar3 >> 8);
    lVar16 = 8;
    uVar14 = (unsigned __int64)CONCAT21(uVar4,uStack_4b);
    do {
      lVar5 = uVar14 << 2;
      uVar14 = uVar14 >> 3;
      puVar12 = puVar12 + 4;
      *puVar12 = *(unsigned int *)((int)afStack_40 + ((unsigned int)lVar5 & 0x1c));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar10 = 0;
  }
  return uVar10;
}

