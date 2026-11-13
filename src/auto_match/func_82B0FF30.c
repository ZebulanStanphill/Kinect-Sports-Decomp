#define true 1


void fn_82B0FF30(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  
  puVar11 = (unsigned int *)(param_2 + 4);
  uVar5 = *(unsigned int *)(param_3 + 8) >> 0x13 & 7;
  do {
    puVar1 = (unsigned int *)*puVar11;
    if (puVar1 == (unsigned int *)0x0) {
      return;
    }
    if (puVar1[4] != 0) {
      uVar7 = *puVar1 >> 0x19;
      uVar8 = (unsigned __int64)uVar7 & 7;
      uVar12 = *puVar1 >> 5 & 0xff;
      if ((uVar7 & 7) != 0) {
        uVar7 = 0;
        do {
          uVar6 = 0;
          puVar2 = *(unsigned int **)(((uVar12 >> (uVar7 & 0x3f) & 3) + 0xb) * 4 + param_2);
          if (uVar5 != 0) {
            piVar9 = (int *)(param_3 + 0x2c);
            uVar6 = 0;
            do {
              if ((puVar2[3] == ((unsigned int *)*piVar9)[3]) &&
                 (((*(unsigned int *)*piVar9 ^ *puVar2) & 0x60) == 0)) break;
              uVar6 = uVar6 + 1;
              piVar9 = piVar9 + 1;
            } while (uVar6 < uVar5);
          }
          uVar3 = uVar7 & 0x3f;
          uVar4 = uVar7 & 0x3f;
          uVar7 = uVar7 + 2;
          uVar12 = uVar12 & ~(3 << uVar4) | uVar6 << uVar3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (unsigned int *)(puVar1[3] + 4);
      for (puVar2 = (unsigned int *)*puVar10; puVar2 != puVar1; puVar2 = (unsigned int *)puVar2[2]) {
        puVar10 = puVar2 + 2;
      }
      *puVar10 = puVar1[2];
      puVar1[2] = *(unsigned int *)(param_3 + 4);
      *(unsigned int **)(param_3 + 4) = puVar1;
      puVar1[3] = param_3;
      *puVar1 = (uVar12 & 0xff) << 5 | *puVar1 & 0xffffe01f;
    }
    if ((unsigned int *)*puVar11 == puVar1) {
      puVar11 = puVar1 + 2;
    }
  } while( true );
}

