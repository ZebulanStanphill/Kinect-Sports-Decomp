extern int fn_82B80200();


void fn_82B81338(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  char cVar3;
  unsigned int uVar2;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  __int64 lVar5;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  
  cVar3 = fn_82B80200();
  if (cVar3 == '\0') {
    uVar8 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      uVar6 = 0;
      uVar11 = param_2;
      do {
        uVar2 = uVar6 & 0x3f;
        uVar6 = uVar6 + 2;
        uVar8 = (unsigned int)(1 << (param_3 >> uVar2 & 3)) | uVar8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar6 = *(unsigned int *)(param_1 + 8);
    uVar4 = (unsigned __int64)(uVar6 >> 1) & 0xf;
    uVar11 = (((unsigned __int64)(uVar6 >> 0xe) & 7) -
             (((0x8da691691448U >> (uVar8 & 0x7f)) >> (uVar8 & 0x7f)) >> (uVar8 & 0x7f) & 7)) +
             param_2;
    lVar5 = (param_2 & 0x7fffffff) << 1;
    for (uVar8 = uVar4 - uVar8; (uVar8 & 0xffffffff) != 0; uVar8 = uVar8 - (uVar8 & ~(uVar8 - 1))) {
      param_3 = param_3 & ~(3 << ((unsigned int)lVar5 & 0x3f)) |
                0x1f - (int)LZCOUNT((unsigned int)uVar8 & ~((unsigned int)uVar8 - 1)) << ((unsigned int)lVar5 & 0x3f);
      lVar5 = lVar5 + 2;
    }
    uVar2 = 0;
    for (; uVar9 = 0, (uVar4 & 0xffffffff) != 0; uVar4 = uVar4 - (uVar4 & ~(uVar4 - 1))) {
      uVar8 = 0x1f - LZCOUNT((unsigned int)uVar4 & ~((unsigned int)uVar4 - 1));
      if ((uVar11 & 0xffffffff) != 0) {
        uVar10 = 0;
        do {
          if ((unsigned int)uVar8 == (param_3 >> (uVar10 & 0x3f) & 3)) {
            uVar10 = (unsigned int)((uVar8 & 0xffffffff) << 1);
            uVar2 = uVar2 & ~(3 << (uVar10 & 0x3e)) | uVar9 << (uVar10 & 0x3e);
            break;
          }
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 2;
        } while ((unsigned __int64)uVar9 < (uVar11 & 0xffffffff));
      }
    }
    *(unsigned int *)(param_1 + 8) = (unsigned int)((uVar11 & 0xffffffff) << 0xe) & 0x1c000 | uVar6 & 0xfffe3fff;
    puVar7 = (unsigned int *)(param_1 + 0x28);
    for (; uVar9 < (*(unsigned int *)(param_1 + 8) >> 0x13 & 7); uVar9 = uVar9 + 1) {
      puVar7 = puVar7 + 1;
      uVar6 = *(unsigned int *)*puVar7;
      uVar10 = (uVar6 & 0xf1ffffff) >> 5 & 0xff;
      *(unsigned int *)*puVar7 =
           ((((uVar10 >> (param_3 >> 5 & 6) & 3) << 2 | uVar10 >> (param_3 >> 3 & 6) & 3) << 2 |
            uVar10 >> (param_3 >> 1 & 6) & 3) << 2 | uVar10 >> ((param_3 & 3) << 1) & 3) << 5 |
           uVar6 & 0xf1ffe01f | (unsigned int)((uVar11 & 7) << 0x19);
    }
    for (puVar1 = *(unsigned int **)(param_1 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
      if ((puVar1[4] != 0) && (uVar6 = *puVar1, (uVar6 & 0xe000000) != 0)) {
        *puVar1 = ((((uVar2 >> (uVar6 >> 10 & 6) & 3) << 2 | uVar2 >> (uVar6 >> 8 & 6) & 3) << 2 |
                   uVar2 >> (uVar6 >> 6 & 6) & 3) << 2 | uVar2 >> (uVar6 >> 4 & 6) & 3) << 5 |
                  uVar6 & 0xffffe01f;
      }
    }
  }
  else {
    *(unsigned int *)(param_1 + 8) =
         (unsigned int)((param_2 & 0xffffffff) << 0xe) & 0x1c000 | *(unsigned int *)(param_1 + 8) & 0xfffe3fff;
  }
  return;
}

