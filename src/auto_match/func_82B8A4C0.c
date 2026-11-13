#define true 1
extern int fn_82ABE5F8();
extern int fn_82AD17B0();
extern int fn_82B894C8();


unsigned int fn_82B8A4C0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  
  puVar9 = (unsigned int *)(param_4 + 4);
  uVar11 = 0;
  for (puVar3 = *(unsigned int **)(param_4 + 4); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
    if (puVar3[4] != 0) {
      uVar6 = *puVar3 >> 0x19 & 7;
      if (uVar6 != 0) {
        uVar4 = 0;
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar8 = 0;
          do {
            uVar10 = uVar10 + 1;
            uVar4 = (unsigned int)(1 << ((*puVar3 >> 5 & 0xff) >> (uVar8 & 0x3f) & 3)) | uVar4;
            uVar8 = uVar8 + 2;
          } while (uVar10 < uVar6);
        }
        uVar11 = uVar4 | uVar11;
      }
    }
  }
  puVar3 = (unsigned int *)fn_82AD17B0(param_1,param_4);
  uVar6 = 0;
  uVar10 = 0;
  iVar5 = 0;
  *puVar3 = (unsigned int)((((0x8da691691448U >> (uVar11 & 0x7f)) >> (uVar11 & 0x7f)) >> (uVar11 & 0x7f) &
                   0xffffffff) << 0x19) & 0xe000000 | *puVar3 & 0xf1ffffff;
  if (uVar11 != 0) {
    uVar8 = 0;
    do {
      uVar4 = uVar11 & ~(uVar11 - 1);
      uVar11 = uVar11 - uVar4;
      uVar4 = 0x1f - LZCOUNT((int)uVar4);
      uVar2 = (unsigned int)((uVar4 & 0xffffffff) << 1);
      uVar6 = uVar6 & ~(3 << (uVar8 & 0x3f)) | (int)uVar4 << (uVar8 & 0x3f);
      uVar10 = uVar10 & ~(3 << (uVar2 & 0x3e)) | iVar5 << (uVar2 & 0x3e);
      iVar5 = iVar5 + 1;
      uVar8 = uVar8 + 2;
    } while (uVar11 != 0);
  }
  *puVar3 = (uVar6 & 0xff) << 5 | *puVar3 & 0xffffe01f;
  fn_82B894C8(param_1,param_2,param_3,puVar3);
  uVar6 = puVar3[3];
  puVar12 = (unsigned int *)(uVar6 + 4);
  puVar7 = puVar12;
  for (puVar1 = *(unsigned int **)(uVar6 + 4); puVar1 != puVar3; puVar1 = (unsigned int *)puVar1[2]) {
    puVar7 = puVar1 + 2;
  }
  *puVar7 = puVar1[2];
  fn_82ABE5F8(param_1,puVar3,0x14,0x1a);
  while( true ) {
    puVar3 = (unsigned int *)*puVar9;
    if (puVar3 == (unsigned int *)0x0) break;
    if (puVar3[4] != 0) {
      uVar8 = *puVar3;
      if (((uVar8 & 0xe000000) != 0) && (puVar3[4] != uVar6)) {
        puVar7 = (unsigned int *)(puVar3[3] + 4);
        *puVar3 = ((((uVar10 >> (uVar8 >> 10 & 6) & 3) << 2 | uVar10 >> (uVar8 >> 8 & 6) & 3) << 2 |
                   uVar10 >> (uVar8 >> 6 & 6) & 3) << 2 | uVar10 >> (uVar8 >> 4 & 6) & 3) << 5 |
                  uVar8 & 0xffffe01f;
        for (puVar1 = *(unsigned int **)(puVar3[3] + 4); puVar1 != puVar3; puVar1 = (unsigned int *)puVar1[2]) {
          puVar7 = puVar1 + 2;
        }
        *puVar7 = puVar3[2];
        puVar3[2] = *puVar12;
        *puVar12 = (unsigned int)puVar3;
        puVar3[3] = uVar6;
      }
    }
    if ((unsigned int *)*puVar9 == puVar3) {
      puVar9 = puVar3 + 2;
    }
  }
  return uVar6;
}

