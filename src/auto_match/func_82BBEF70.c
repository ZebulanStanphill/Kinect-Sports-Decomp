#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int lbl_82002AE0;
extern float lbl_82002C2C;
extern unsigned int lbl_82005328;
extern float lbl_82028884;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_4d;
extern unsigned int uStack_4e;


unsigned __int64 fn_82BBEF70(int param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  float *pfVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  __int64 lVar10;
  unsigned char bStack_50;
  unsigned char bStack_4f;
  unsigned char uStack_4e;
  unsigned char uStack_4d;
  unsigned char uStack_4c;
  unsigned char uStack_4b;
  float afStack_30 [6];
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  bStack_4f = (unsigned char)((unsigned short)*param_2 >> 8);
  bStack_50 = (unsigned char)*param_2;
  uVar9 = 1;
  pfVar7 = afStack_30 + 1;
  afStack_30[0] = (float)bStack_50 * lbl_82005328;
  afStack_30[1] = (float)bStack_4f * lbl_82005328;
  if (bStack_4f < bStack_50) {
    lVar10 = 6;
    do {
      uVar5 = 7 - uVar9;
      uVar8 = (unsigned __int64)uVar9;
      uVar9 = uVar9 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar7 = ((float)uVar5 * afStack_30[0] + (float)uVar8 * afStack_30[1]) * lbl_82028884;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    lVar10 = 4;
    do {
      uVar5 = 5 - uVar9;
      uVar8 = (unsigned __int64)uVar9;
      uVar9 = uVar9 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar7 = ((float)uVar5 * afStack_30[0] + (float)uVar8 * afStack_30[1]) * lbl_82002C2C;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uStack_18 = lbl_821AAD20;
    uStack_14 = lbl_82002AE0;
  }
  uStack_4d = (unsigned char)((unsigned short)uVar1 >> 8);
  uStack_4c = (unsigned char)uVar2;
  puVar6 = (unsigned int *)(param_1 + -4);
  uStack_4e = (unsigned char)uVar1;
  lVar10 = 8;
  uVar8 = (unsigned __int64)CONCAT21(CONCAT11(uStack_4c,uStack_4d),uStack_4e);
  do {
    lVar4 = uVar8 << 2;
    uVar8 = uVar8 >> 3;
    puVar6 = puVar6 + 4;
    *puVar6 = *(unsigned int *)((int)afStack_30 + ((unsigned int)lVar4 & 0x1c));
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar6 = (unsigned int *)(param_1 + 0x7c);
  uStack_4b = (unsigned char)((unsigned short)uVar2 >> 8);
  lVar10 = 8;
  uVar8 = (unsigned __int64)CONCAT21(uVar3,uStack_4b);
  do {
    lVar4 = uVar8 << 2;
    uVar8 = uVar8 >> 3;
    puVar6 = puVar6 + 4;
    *puVar6 = *(unsigned int *)((int)afStack_30 + ((unsigned int)lVar4 & 0x1c));
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return 0;
}

