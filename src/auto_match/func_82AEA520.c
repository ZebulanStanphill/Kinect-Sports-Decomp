#define true 1
extern int fn_82ACB0F8();


void fn_82AEA520(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char cVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  int *piVar11;
  unsigned int *puVar12;
  
  piVar11 = (int *)(param_2 + 0x2c);
  for (uVar10 = 0; uVar10 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar10 = uVar10 + 1) {
    uVar1 = *(unsigned int *)(*piVar11 + 0xc);
    puVar12 = (unsigned int *)(uVar1 + 4);
    while( true ) {
      puVar2 = (unsigned int *)*puVar12;
      if (puVar2 == (unsigned int *)0x0) break;
      uVar5 = puVar2[4];
      if (uVar5 != 0) {
        if ((((*puVar2 & 0xe000000) != 0) && (uVar5 != param_2)) &&
           ((*(unsigned char *)(uVar5 + 0x10) & 1) != 0)) {
          cVar4 = fn_82ACB0F8(param_2);
          if (cVar4 != '\0') {
            uVar5 = 0;
            piVar7 = (int *)(param_2 + 0x2c);
            for (uVar8 = 0; uVar8 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar8 = uVar8 + 1) {
              if (((unsigned int *)*piVar7)[3] == uVar1) {
                uVar6 = *(unsigned int *)*piVar7 >> 4 & 6;
                uVar5 = uVar5 & ~(3 << uVar6) | uVar8 << uVar6;
              }
              piVar7 = piVar7 + 1;
            }
            if ((*puVar2 >> 0x1e & 1) != 0) {
              for (puVar3 = *(unsigned int **)(param_2 + 4);
                  (puVar3 != (unsigned int *)0x0 && ((puVar3[4] == 0 || ((*puVar3 & 0xe000000) == 0))));
                  puVar3 = (unsigned int *)puVar3[2]) {
              }
              uVar8 = *puVar2;
              *puVar2 = uVar8 & 0xbfffffff;
              *puVar2 = uVar8 & 0xbe001fff | *puVar3 & 0x1ffe000 | 0x40000000;
            }
            puVar9 = (unsigned int *)(puVar2[3] + 4);
            for (puVar3 = (unsigned int *)*puVar9; puVar3 != puVar2; puVar3 = (unsigned int *)puVar3[2]) {
              puVar9 = puVar3 + 2;
            }
            *puVar9 = puVar2[2];
            puVar2[2] = *(unsigned int *)(param_2 + 4);
            *(unsigned int **)(param_2 + 4) = puVar2;
            uVar8 = *puVar2 >> 5;
            uVar6 = uVar8 & 0xff;
            puVar2[3] = param_2;
            *puVar2 = ((((uVar5 >> (uVar6 >> 5 & 6) & 3) << 2 | uVar5 >> (uVar6 >> 3 & 6) & 3) << 2
                       | uVar5 >> (uVar6 >> 1 & 6) & 3) << 2 | uVar5 >> ((uVar8 & 3) << 1) & 3) << 5
                      | *puVar2 & 0xffffe01e;
          }
        }
      }
      if ((unsigned int *)*puVar12 == puVar2) {
        puVar12 = puVar2 + 2;
      }
    }
    piVar11 = piVar11 + 1;
  }
  return;
}

