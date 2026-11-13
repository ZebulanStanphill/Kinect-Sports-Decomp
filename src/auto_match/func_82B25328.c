#define true 1
extern int fn_82ADCF98();
extern int fn_82ADE488();
extern int fn_82B25248();


void fn_82B25328(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,char param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  int iVar13;
  __int64 lVar14;
  
  uVar5 = 0;
  piVar11 = (int *)(param_2 + 0x2c);
  while( true ) {
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 0;
    if ((*(unsigned int *)(param_2 + 8) >> 0x13 & 7) <= uVar5) break;
    puVar1 = (unsigned int *)*piVar11;
    uVar9 = 0;
    uVar10 = 0;
    lVar14 = 4;
    do {
      if (((unsigned int)(1 << (uVar6 & 0x3f)) & param_3) != 0) {
        uVar8 = uVar8 + 1;
        uVar9 = ((*puVar1 >> 5 & 0xff) >> (uVar7 & 0x3f) & 3) << (uVar10 & 0x3f) |
                uVar9 & ~(3 << (uVar10 & 0x3f));
        uVar10 = uVar10 + 2;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    *puVar1 = ((uVar8 & 7) << 0x14 | uVar9 & 0xff) << 5 | *puVar1 & 0xf1ffe01f;
    fn_82B25248(param_1,puVar1[3],param_4);
    uVar5 = uVar5 + 1;
    piVar11 = piVar11 + 1;
  }
  uVar5 = 0;
  iVar4 = 0;
  uVar12 = 1;
  iVar13 = 0;
  uVar9 = 0;
  do {
    if ((uVar12 & param_3) != 0) {
      uVar5 = uVar5 & ~(3 << (uVar8 & 0x3f)) | iVar4 << (uVar8 & 0x3f);
      if (param_5 == '\0') {
        uVar10 = *(unsigned int *)(param_2 + 0xc);
        uVar2 = 0xf << (uVar9 & 0x3f);
        uVar3 = ((uVar10 & 0xffff) >> (uVar7 & 0x3f) & 0xf) << (uVar9 & 0x3f);
        if ((uVar10 & uVar2 & 0xffff) != uVar3) {
          *(unsigned short *)(param_2 + 0xe) = (unsigned short)uVar10 & ~(unsigned short)uVar2 | (unsigned short)uVar3;
        }
        piVar11 = *(int **)(param_2 + 0x10);
        if (piVar11 != (int *)0x0) {
          do {
            if (*piVar11 == 1) break;
            piVar11 = (int *)piVar11[1];
          } while (piVar11 != (int *)0x0);
          if (piVar11 != (int *)0x0) {
            *(unsigned __int64 *)((int)piVar11 + iVar13 + 8) = *(unsigned __int64 *)((int)piVar11 + uVar6 + 8);
            *(unsigned __int64 *)((int)piVar11 + iVar13 + 0x28) =
                 *(unsigned __int64 *)((int)piVar11 + uVar6 + 0x28);
          }
        }
      }
      iVar4 = iVar4 + 1;
      uVar9 = uVar9 + 4;
      iVar13 = iVar13 + 8;
    }
    uVar8 = uVar8 + 2;
    uVar7 = uVar7 + 4;
    uVar6 = uVar6 + 8;
    uVar12 = (uVar12 & 0x7fffffff) << 1;
    if (7 < uVar8) {
      for (puVar1 = *(unsigned int **)(param_2 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
        if (puVar1[4] != 0) {
          uVar6 = *puVar1;
          if ((uVar6 & 0xe000000) != 0) {
            *puVar1 = ((((uVar5 >> (uVar6 >> 10 & 6) & 3) << 2 | uVar5 >> (uVar6 >> 8 & 6) & 3) << 2
                       | uVar5 >> (uVar6 >> 6 & 6) & 3) << 2 | uVar5 >> (uVar6 >> 4 & 6) & 3) << 5 |
                      uVar6 & 0xffffe01f;
          }
        }
      }
      if (param_5 != '\0') {
        if (((*(unsigned int *)(param_2 + 8) & 0x800000) != 0) && ((*(unsigned short *)(param_2 + 0x10) & 7) != 0))
        {
          fn_82ADE488(param_1,param_2,param_3);
        }
        uVar5 = fn_82ADCF98(param_3);
        *(unsigned int *)(param_2 + 8) =
             ((1 << (uVar5 & 7)) + -1) * 2 & 0x1eU |
             (uVar5 & 7) << 0xe | *(unsigned int *)(param_2 + 8) & 0xfffe3fe1;
      }
      return;
    }
  } while( true );
}

