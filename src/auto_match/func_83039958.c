extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200D89C;
extern unsigned int lbl_8200D8A0;
extern unsigned int lbl_8201DF6C;
extern unsigned int lbl_8201DFEC;
extern unsigned int uStack_a;


void fn_83039958(unsigned int *param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned short *puVar7;
  unsigned int *puVar8;
  float *pfVar9;
  unsigned int uVar10;
  unsigned char uVar11;
  unsigned short uStack_a;
  
  fVar6 = lbl_8201DFEC;
  fVar2 = lbl_8201DF6C;
  fVar5 = lbl_8200D8A0;
  fVar4 = lbl_8200D89C;
  fVar3 = lbl_82005CCC;
  cVar1 = *(char *)(param_1 + 0x13);
  if ((((cVar1 == '\x04') || (cVar1 == '\x05')) || (cVar1 == '\x06')) || (cVar1 == '\a')) {
    uVar10 = 0;
    pfVar9 = param_2;
    if (*(char *)((int)param_1 + 0x4d) != '\0') {
      do {
        fVar4 = *pfVar9 * fVar2 + fVar6;
        if (fVar3 < fVar4) {
          fVar4 = fVar3;
        }
        uStack_a = ((((unsigned __int64)(uStack_a)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)(__int64)fVar4)) & ((unsigned __int64)0xFF)) << 8));
        *(unsigned char *)(uVar10 + (int)param_1) = (unsigned char)uStack_a;
        uVar10 = uVar10 + 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar10 < *(unsigned char *)((int)param_1 + 0x4d));
    }
  }
  else if (((cVar1 == '\0') || (cVar1 == '\x01')) || ((cVar1 == '\x02' || (cVar1 == '\x03')))) {
    uVar10 = 0;
    if (*(char *)((int)param_1 + 0x4d) != '\0') {
      puVar7 = (unsigned short *)((int)param_1 + -2);
      pfVar9 = param_2;
      do {
        fVar3 = *pfVar9 * fVar5;
        if (((fVar5 <= fVar3) || (fVar2 = fVar4, fVar4 < fVar3)) && (fVar2 = fVar3, fVar5 <= fVar3))
        {
          fVar2 = fVar5;
        }
        uStack_a = (unsigned short)(int)fVar2;
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = uStack_a;
        pfVar9 = pfVar9 + 1;
      } while (uVar10 < *(unsigned char *)((int)param_1 + 0x4d));
    }
  }
  else if (((((cVar1 == '\b') || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\v')) &&
          (uVar10 = 0, *(char *)((int)param_1 + 0x4d) != '\0')) {
    puVar8 = param_1;
    do {
      uVar10 = uVar10 + 1;
      *puVar8 = *(unsigned int *)(((int)param_2 - (int)param_1) + (int)puVar8);
      puVar8 = puVar8 + 1;
    } while (uVar10 < *(unsigned char *)((int)param_1 + 0x4d));
  }
  param_1[8] = param_2[6];
  uVar11 = 1;
  param_1[9] = param_2[7];
  param_1[10] = param_2[8];
  param_1[0xb] = param_2[9];
  param_1[0x12] = param_2[10];
  if ((float)param_1[0x11] == param_2[0xb]) {
    uVar11 = *(unsigned char *)(param_2 + 0xc);
  }
  *(unsigned char *)((int)param_1 + 0x4f) = uVar11;
  return;
}

