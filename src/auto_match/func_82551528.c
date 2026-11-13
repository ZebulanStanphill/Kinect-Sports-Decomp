typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82551D80();
extern int memcpy();


unsigned int * fn_82551528(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  bool bVar15;
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [16];
  
  iVar12 = param_3 - 0x18;
  uVar14 = (int)(param_3 - param_2) / 0x18;
  iVar7 = (int)(iVar12 - param_2) / 0x18;
  uVar14 = (((int)uVar14 >> 1) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 1) != 0)) * 0x18 + param_2;
  uVar6 = param_2;
  if (0x28 < iVar7) {
    uVar6 = iVar7 + 1;
    iVar7 = ((int)uVar6 >> 3) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    uVar6 = iVar7 * 0x18 + param_2;
    fn_82551D80(param_2,uVar6,iVar7 * 0x30 + param_2);
    fn_82551D80(uVar14 + iVar7 * -0x18,uVar14,iVar7 * 0x18 + uVar14);
    iVar11 = iVar12 + iVar7 * -0x18;
    fn_82551D80(iVar12 + iVar7 * -0x30,iVar11,iVar12);
    iVar12 = iVar11;
  }
  fn_82551D80(uVar6,uVar14,iVar12);
  uVar6 = uVar14 + 0x18;
  if (param_2 < uVar14) {
    puVar3 = (unsigned int *)(uVar14 - 8);
    do {
      uVar10 = *puVar3;
      uVar5 = (unsigned __int64)uVar10;
      uVar9 = puVar3[6];
      uVar4 = (unsigned __int64)uVar9;
      if (uVar10 == uVar9) {
        bVar15 = puVar3[7] <= puVar3[1];
        uVar13 = puVar3[7] ^ puVar3[1];
      }
      else {
        bVar15 = uVar4 <= uVar5;
        uVar13 = uVar9 ^ uVar10;
      }
      if ((((~(unsigned __int64)uVar13 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar15 & 1) != 0) break;
      if (uVar9 == uVar10) {
        uVar5 = (unsigned __int64)puVar3[1];
        uVar4 = (unsigned __int64)puVar3[7];
      }
      if ((((~(uVar5 ^ uVar4) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar5 <= uVar4) & 1) != 0) break;
      uVar14 = uVar14 - 0x18;
      puVar3 = puVar3 + -6;
    } while (param_2 < uVar14);
  }
  uVar10 = uVar14;
  uVar9 = uVar6;
  if (uVar6 < param_3) {
    uVar13 = *(unsigned int *)(uVar14 + 0x10);
    while( true ) {
      uVar8 = *(unsigned int *)(uVar6 + 0x10);
      if (uVar8 == uVar13) {
        bVar15 = *(unsigned int *)(uVar14 + 0x14) <= *(unsigned int *)(uVar6 + 0x14);
        uVar1 = *(unsigned int *)(uVar14 + 0x14) ^ *(unsigned int *)(uVar6 + 0x14);
      }
      else {
        bVar15 = uVar13 <= uVar8;
        uVar1 = uVar13 ^ uVar8;
      }
      uVar9 = uVar6;
      if ((((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar15 & 1) != 0) break;
      if (uVar13 == uVar8) {
        bVar15 = *(unsigned int *)(uVar6 + 0x14) <= *(unsigned int *)(uVar14 + 0x14);
        uVar8 = *(unsigned int *)(uVar6 + 0x14) ^ *(unsigned int *)(uVar14 + 0x14);
      }
      else {
        bVar15 = uVar8 <= uVar13;
        uVar8 = uVar8 ^ uVar13;
      }
      if (((((~(unsigned __int64)uVar8 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar15 & 1) != 0) ||
         (uVar6 = uVar6 + 0x18, uVar9 = uVar6, param_3 <= uVar6)) break;
    }
  }
LAB_825517c4:
  do {
    if (param_3 <= uVar6) {
LAB_825517cc:
      uVar13 = uVar14;
      if (param_2 < uVar10) {
        puVar3 = (unsigned int *)(uVar10 - 8);
        do {
          uVar14 = *puVar3;
          uVar8 = *(unsigned int *)(uVar13 + 0x10);
          if (uVar14 == uVar8) {
            bVar15 = *(unsigned int *)(uVar13 + 0x14) <= puVar3[1];
            uVar1 = *(unsigned int *)(uVar13 + 0x14) ^ puVar3[1];
          }
          else {
            bVar15 = uVar8 <= uVar14;
            uVar1 = uVar8 ^ uVar14;
          }
          if ((((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar15 & 1) == 0) {
            if (uVar8 == uVar14) {
              bVar15 = puVar3[1] <= *(unsigned int *)(uVar13 + 0x14);
              uVar14 = puVar3[1] ^ *(unsigned int *)(uVar13 + 0x14);
            }
            else {
              bVar15 = uVar14 <= uVar8;
              uVar14 = uVar14 ^ uVar8;
            }
            if ((((~(unsigned __int64)uVar14 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar15 & 1) != 0) break;
            uVar13 = uVar13 - 0x18;
            memcpy(auStack_90,uVar13,0x18);
            memcpy(uVar13,puVar3 + -4,0x18);
            memcpy(puVar3 + -4,auStack_90,0x18);
          }
          uVar10 = uVar10 - 0x18;
          puVar3 = puVar3 + -6;
        } while (param_2 < uVar10);
      }
      if (uVar10 == param_2) {
        if (uVar6 == param_3) {
          *param_1 = uVar13;
          param_1[1] = uVar9;
          return param_1;
        }
        if (uVar9 != uVar6) {
          memcpy(auStack_d0,uVar13,0x18);
          memcpy(uVar13,uVar9,0x18);
          memcpy(uVar9,auStack_d0,0x18);
        }
        uVar14 = uVar13 + 0x18;
        memcpy(auStack_130,uVar13,0x18);
        memcpy(uVar13,uVar6,0x18);
        puVar2 = auStack_130;
        uVar13 = uVar6;
        uVar9 = uVar9 + 0x18;
        uVar6 = uVar6 + 0x18;
      }
      else {
        if (uVar6 != param_3) {
          uVar10 = uVar10 - 0x18;
          memcpy(auStack_70,uVar6,0x18);
          memcpy(uVar6,uVar10,0x18);
          puVar2 = auStack_70;
          uVar14 = uVar13;
          uVar13 = uVar10;
          uVar8 = uVar9;
          goto LAB_825517b8;
        }
        uVar10 = uVar10 - 0x18;
        uVar14 = uVar13 - 0x18;
        if (uVar10 != uVar14) {
          memcpy(auStack_f0,uVar10,0x18);
          memcpy(uVar10,uVar14,0x18);
          memcpy(uVar14,auStack_f0,0x18);
        }
        uVar13 = uVar9 - 0x18;
        memcpy(auStack_b0,uVar14,0x18);
        memcpy(uVar14,uVar13,0x18);
        puVar2 = auStack_b0;
        uVar9 = uVar13;
      }
      memcpy(uVar13,puVar2,0x18);
      goto LAB_825517c4;
    }
    uVar13 = *(unsigned int *)(uVar14 + 0x10);
    uVar8 = *(unsigned int *)(uVar6 + 0x10);
    if (uVar13 == uVar8) {
      bVar15 = *(unsigned int *)(uVar6 + 0x14) <= *(unsigned int *)(uVar14 + 0x14);
      uVar1 = *(unsigned int *)(uVar6 + 0x14) ^ *(unsigned int *)(uVar14 + 0x14);
    }
    else {
      bVar15 = uVar8 <= uVar13;
      uVar1 = uVar8 ^ uVar13;
    }
    if ((((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar15 & 1) == 0) {
      if (uVar8 == uVar13) {
        bVar15 = *(unsigned int *)(uVar14 + 0x14) <= *(unsigned int *)(uVar6 + 0x14);
        uVar13 = *(unsigned int *)(uVar14 + 0x14) ^ *(unsigned int *)(uVar6 + 0x14);
      }
      else {
        bVar15 = uVar13 <= uVar8;
        uVar13 = uVar13 ^ uVar8;
      }
      if ((((~(unsigned __int64)uVar13 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar15 & 1) != 0)
      goto LAB_825517cc;
      uVar8 = uVar9 + 0x18;
      memcpy(auStack_110,uVar9,0x18);
      memcpy(uVar9,uVar6,0x18);
      puVar2 = auStack_110;
      uVar13 = uVar6;
LAB_825517b8:
      memcpy(uVar13,puVar2,0x18);
      uVar9 = uVar8;
    }
    uVar6 = uVar6 + 0x18;
  } while( true );
}

