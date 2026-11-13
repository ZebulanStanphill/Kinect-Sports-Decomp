typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8279A8D8();
extern int fn_8279A9F8();
extern int fn_8279AA48();
extern int fn_8279ADE8();
extern int fn_8279AE60();
extern unsigned int lbl_820885C8;


void fn_8279B2C8(int param_1,float *param_2,int param_3)

{
  unsigned char bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  char cVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  
  fVar2 = *param_2;
  fVar3 = *(float *)(param_1 + 0xf0);
  if ((((fVar2 != fVar3) || (param_2[2] != *(float *)(param_1 + 0xf8))) ||
      (param_2[1] != *(float *)(param_1 + 0xf4))) ||
     (bVar9 = false, param_2[3] != *(float *)(param_1 + 0xfc))) {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  fVar4 = *(float *)(param_1 + 0xf8);
  fVar5 = *(float *)(param_1 + 0xfc);
  fVar6 = *(float *)(param_1 + 0xf4);
  fVar7 = param_2[3];
  fVar8 = param_2[2];
  *(float *)(param_1 + 0xf4) = param_2[1];
  *(float *)(param_1 + 0xf0) = fVar2;
  fVar10 = lbl_820885C8;
  *(float *)(param_1 + 0xf8) = fVar8;
  *(float *)(param_1 + 0xfc) = fVar7;
  uVar16 = (unsigned __int64)(fVar5 - fVar6);
  uVar14 = (__int64)(fVar4 - fVar3) & 0xffffffff;
  *(float *)(param_1 + 0x3c) = fVar2 + fVar10;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0xf4) + fVar10;
  *(float *)(param_1 + 0x44) = fVar8 - fVar10;
  *(float *)(param_1 + 0x48) = fVar7 - fVar10;
  if (param_3 != 1) {
    return;
  }
  bVar1 = *(unsigned char *)(param_1 + 0x13c);
  uVar13 = (unsigned __int64)bVar1;
  uVar15 = (unsigned __int64)(*(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0xf0));
  uVar12 = (__int64)(*(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0xf4)) & 0xffffffff;
  if (((bVar1 & 0x30) == 0) &&
     (((uVar14 == (uVar15 & 0xffffffff) ||
       (((((*(unsigned char *)(param_1 + 0x13d) & 8) == 0 &&
          ((uVar14 <= (uVar15 & 0xffffffff) || ((*(unsigned char *)(param_1 + 0x98) & 0x20) == 0)))) &&
         ((bVar1 & 3) == 0)) && (cVar11 = fn_8279A8D8(param_1), cVar11 == '\0')))) &&
      (((uVar16 & 0xffffffff) == (uVar12 & 0xffffffff) ||
       (((uVar14 = (uVar13 & 0xffffffff) >> 2 & 3, uVar14 == 0 || (uVar14 == 1)) &&
        (((uVar16 & 0xffffffff) <= (uVar12 & 0xffffffff) ||
         ((*(unsigned char *)(param_1 + 0x98) & 0x20) == 0)))))))))) {
    *(short *)(param_1 + 0x138) = *(short *)(param_1 + 0x138) + 1;
    uVar14 = fn_8279A9F8(param_1);
    if ((uVar14 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x4c)) {
      fn_8279ADE8(param_1,uVar14);
    }
    uVar14 = fn_8279AA48(param_1);
    if ((uVar14 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x38)) {
      fn_8279AE60(param_1,uVar14);
    }
    *(unsigned char *)(param_1 + 0x98) = *(unsigned char *)(param_1 + 0x98) | 1;
    return;
  }
  *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) | 2;
  return;
}

