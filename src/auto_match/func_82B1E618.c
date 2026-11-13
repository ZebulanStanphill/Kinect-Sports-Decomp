#define true 1
extern int fn_82B841E8();
extern int fn_82B85910();
extern int fn_82B8AC10();
extern unsigned int uRam83223cbc;
extern unsigned int uRam83223cc0;
extern unsigned int uRam83223cc4;
extern unsigned int uRam83223cc8;


void fn_82B1E618(int param_1,unsigned __int64 param_2,unsigned int param_3,__int64 param_4,unsigned __int64 param_5,
                  unsigned int param_6)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char cVar8;
  unsigned int uVar7;
  __int64 lVar9;
  int *piVar10;
  int *piVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  
  uVar14 = *(unsigned int *)(param_3 + 8) >> 0xe;
  uVar15 = (unsigned __int64)uVar14 & 7;
  uVar6 = *(unsigned int *)(param_6 + 8) >> 0xe;
  uVar16 = (unsigned __int64)uVar6 & 7;
  cVar8 = fn_82B85910(param_3,param_6);
  uVar17 = param_3;
  if (cVar8 != '\0') {
    uVar17 = param_6;
  }
  uVar7 = fn_82B841E8(param_1,*(unsigned int *)(uVar17 + 0x1c),0,0x71,0,
                            uVar16 + uVar15 + param_4);
  uVar5 = uVar7 & 0xfffffffe;
  puVar13 = (unsigned int *)((uVar17 & 0xfffffffe) + 0x24);
  piVar10 = (int *)(param_3 + 4);
  *(unsigned int *)(uVar5 + 0x24) = *puVar13;
  *(unsigned int *)(*puVar13 & 0xfffffffe) = uVar5;
  *(unsigned int *)(uVar5 + 0x28) = uVar17 & 0xfffffffe;
  *puVar13 = uVar5 + 0x28;
  *(unsigned int *)(uVar7 + 8) = *(unsigned int *)(uVar7 + 8) | 0x800000;
  while( true ) {
    iVar1 = *piVar10;
    if (iVar1 == 0) break;
    if (*(int *)(iVar1 + 0x10) != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0xc) + 4);
      for (iVar2 = *piVar11; iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
        piVar11 = (int *)(iVar2 + 8);
      }
      *piVar11 = *(int *)(iVar1 + 8);
      *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(uVar7 + 4);
      *(int *)(uVar7 + 4) = iVar1;
      *(unsigned int *)(iVar1 + 0xc) = uVar7;
    }
    if (*piVar10 == iVar1) {
      piVar10 = (int *)(iVar1 + 8);
    }
  }
  if ((uRam83223cc8 & 1) == 0) {
    uRam83223cc8 = uRam83223cc8 | 1;
    uRam83223cbc = 0xf9;
    uRam83223cc0 = 0xfe;
    uRam83223cc4 = 0xff;
  }
  puVar13 = (unsigned int *)(param_6 + 4);
  while( true ) {
    puVar3 = (unsigned int *)*puVar13;
    if (puVar3 == (unsigned int *)0x0) break;
    if (puVar3[4] != 0) {
      puVar12 = (unsigned int *)(puVar3[3] + 4);
      for (puVar4 = (unsigned int *)*puVar12; puVar4 != puVar3; puVar4 = (unsigned int *)puVar4[2]) {
        puVar12 = puVar4 + 2;
      }
      *puVar12 = puVar3[2];
      puVar3[2] = *(unsigned int *)(uVar7 + 4);
      *(unsigned int **)(uVar7 + 4) = puVar3;
      uVar17 = *puVar3;
      puVar3[3] = uVar7;
      if ((uVar17 & 0xe000000) != 0) {
        uVar5 = *(unsigned int *)((int)((uVar15 + param_4 & 0xffffffff) << 2) + -0x7cddc348);
        *puVar3 = ((((uVar5 >> (uVar17 >> 10 & 6) & 3) << 2 | uVar5 >> (uVar17 >> 8 & 6) & 3) << 2 |
                   uVar5 >> (uVar17 >> 6 & 6) & 3) << 2 | uVar5 >> (uVar17 >> 4 & 6) & 3) << 5 |
                  uVar17 & 0xffffe01f;
      }
    }
    if ((unsigned int *)*puVar13 == puVar3) {
      puVar13 = puVar3 + 2;
    }
  }
  if ((uVar14 & 7) != 0) {
    uVar14 = 0;
    uVar18 = uVar15;
    do {
      uVar17 = 0xf << (uVar14 & 0x3f);
      uVar5 = (*(unsigned short *)(param_3 + 0xe) >> (uVar14 & 0x3f) & 0xf) << (uVar14 & 0x3f);
      if ((*(unsigned int *)(uVar7 + 0xc) & uVar17 & 0xffff) != uVar5) {
        *(unsigned short *)(uVar7 + 0xe) = (unsigned short)*(unsigned int *)(uVar7 + 0xc) & ~(unsigned short)uVar17 | (unsigned short)uVar5;
      }
      uVar14 = uVar14 + 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  lVar9 = 0;
  if ((uVar6 & 7) != 0) {
    uVar14 = 0;
    do {
      uVar17 = (unsigned int)((uVar15 + param_4 + lVar9 & 0xffffffff) << 2);
      uVar6 = 0xf << (uVar17 & 0x3c);
      uVar17 = (*(unsigned short *)(param_6 + 0xe) >> (uVar14 & 0x3f) & 0xf) << (uVar17 & 0x3c);
      if ((*(unsigned int *)(uVar7 + 0xc) & uVar6 & 0xffff) != uVar17) {
        *(unsigned short *)(uVar7 + 0xe) = (unsigned short)*(unsigned int *)(uVar7 + 0xc) & ~(unsigned short)uVar6 | (unsigned short)uVar17;
      }
      lVar9 = lVar9 + 1;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar14 = 0;
  if (*(int *)(param_1 + 0x218) != 0) {
    puVar13 = (unsigned int *)(param_1 + 0x160);
    do {
      if (*puVar13 == param_3) {
        *puVar13 = uVar7;
      }
      if (*puVar13 == param_6) {
        *puVar13 = uVar7;
        puVar13[-1] = ((puVar13[-1] >> 9 & 0xf) << ((int)uVar15 + (int)param_4 & 0x3fU) & 0xf) << 9
                      | puVar13[-1] & 0xffffe1ff;
      }
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 3;
    } while (uVar14 < *(unsigned int *)(param_1 + 0x218));
  }
  fn_82B8AC10(param_1,param_3,0,1);
  fn_82B8AC10(param_1,param_6,0,1);
  return;
}

