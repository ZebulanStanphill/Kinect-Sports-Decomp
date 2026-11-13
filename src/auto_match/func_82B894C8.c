extern int fn_82ACA920();
extern int fn_82AD1B28();
extern int fn_82AD35E8();
extern int fn_82AE93B0();
extern int fn_82B83FE0();
extern int fn_82B89410();


void fn_82B894C8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  char cVar3;
  unsigned int uVar2;
  unsigned __int64 uVar4;
  int *piVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  
  puVar1 = (unsigned int *)fn_82ACA920(param_1,param_4,param_4[3]);
  uVar13 = *param_4;
  uVar10 = 0;
  uVar14 = 0;
  if ((uVar13 & 0xe000000) != 0) {
    uVar8 = 0;
    do {
      uVar14 = uVar14 + 1;
      uVar10 = (unsigned int)(1 << ((uVar13 >> 5 & 0xff) >> (uVar8 & 0x3f) & 3)) | uVar10;
      uVar8 = uVar8 + 2;
    } while (uVar14 < (uVar13 >> 0x19 & 7));
  }
  uVar13 = 0;
  uVar14 = 0;
  *puVar1 = (unsigned int)((((0x8da691691448U >> (uVar10 & 0x7f)) >> (uVar10 & 0x7f)) >> (uVar10 & 0x7f) &
                   0xffffffff) << 0x19) & 0xe000000 | *puVar1 & 0xf1ffffff;
  iVar6 = 0;
  if (uVar10 != 0) {
    uVar8 = 0;
    do {
      uVar4 = uVar10 & ~(uVar10 - 1);
      uVar10 = uVar10 - uVar4;
      uVar4 = 0x1f - LZCOUNT((int)uVar4);
      uVar2 = (unsigned int)((uVar4 & 0xffffffff) << 1);
      uVar13 = uVar13 & ~(3 << (uVar8 & 0x3f)) | (int)uVar4 << (uVar8 & 0x3f);
      uVar14 = uVar14 & ~(3 << (uVar2 & 0x3e)) | iVar6 << (uVar2 & 0x3e);
      iVar6 = iVar6 + 1;
      uVar8 = uVar8 + 2;
    } while (uVar10 != 0);
  }
  uVar8 = param_4[3];
  if (((*(unsigned int *)(param_1 + 0x28) & 0x80000) != 0) &&
     ((unsigned __int64)*(unsigned int *)(uVar8 + 0x1c) == (param_2 & 0xffffffff))) {
    for (puVar12 = *(unsigned int **)(uVar8 + 4); puVar12 != (unsigned int *)0x0; puVar12 = (unsigned int *)puVar12[2]) {
      uVar2 = puVar12[4];
      if (((uVar2 != 0) && ((*(unsigned int *)(uVar2 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar12 & 0xe000000) != 0)) goto LAB_82b89634;
    }
    uVar2 = 0;
LAB_82b89634:
    if ((uVar2 != 0) && (cVar3 = fn_82B89410(param_1,uVar2,param_3), cVar3 != '\0')) {
      if ((*puVar1 & 0xe000000) != 0) {
        uVar9 = 0;
        uVar10 = (unsigned __int64)(*puVar1 >> 0x19) & 7;
        do {
          piVar5 = (int *)(uVar2 + 0x2c);
          for (uVar7 = 0; uVar7 < (*(unsigned int *)(uVar2 + 8) >> 0x13 & 7); uVar7 = uVar7 + 1) {
            if ((((unsigned int *)*piVar5)[3] == uVar8) &&
               (((uVar13 >> (uVar9 & 0x3f) ^ *(unsigned int *)*piVar5 >> 5) & 3) == 0)) {
              uVar13 = uVar13 & ~(3 << (uVar9 & 0x3f)) | uVar7 << (uVar9 & 0x3f);
              break;
            }
            piVar5 = piVar5 + 1;
          }
          uVar9 = uVar9 + 2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar11 = (unsigned int *)(puVar1[3] + 4);
      for (puVar12 = (unsigned int *)*puVar11; puVar12 != puVar1; puVar12 = (unsigned int *)puVar12[2]) {
        puVar11 = puVar12 + 2;
      }
      *puVar11 = puVar1[2];
      puVar1[2] = *(unsigned int *)(uVar2 + 4);
      *(unsigned int **)(uVar2 + 4) = puVar1;
      puVar1[3] = uVar2;
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  *puVar1 = (uVar13 & 0xff) << 5 | *puVar1 & 0xffffe01f;
  uVar2 = fn_82AD35E8(param_1,param_2,0,puVar1,puVar1);
  fn_82B83FE0(param_1,uVar2,param_3);
  puVar12 = (unsigned int *)(param_4[3] + 4);
  uVar13 = (unsigned int)((unsigned __int64)*param_4 & 0xffffffe0);
  *param_4 = ((((uVar14 >> (uVar13 >> 10 & 6) & 3) << 2 | uVar14 >> (uVar13 >> 8 & 6) & 3) << 2 |
              uVar14 >> (uVar13 >> 6 & 6) & 3) << 2 |
             uVar14 >> ((unsigned int)(((unsigned __int64)*param_4 & 0xffffffe0) >> 4) & 6) & 3) << 5 |
             uVar13 & 0xffffe01f;
  for (puVar1 = (unsigned int *)*puVar12; puVar1 != param_4; puVar1 = (unsigned int *)puVar1[2]) {
    puVar12 = puVar1 + 2;
  }
  *puVar12 = param_4[2];
  param_4[2] = *(unsigned int *)(uVar2 + 4);
  *(unsigned int **)(uVar2 + 4) = param_4;
  param_4[3] = uVar2;
  if ((*(unsigned int *)(uVar8 + 8) & 0x1e) != 0) {
    fn_82AD1B28(uVar2);
  }
  if ((*(unsigned char *)(uVar8 + 8) & 1) != 0) {
    fn_82AE93B0(uVar2);
    *(unsigned int *)(uVar2 + 8) = *(unsigned int *)(uVar2 + 8) | 0x1000000;
  }
  return;
}

