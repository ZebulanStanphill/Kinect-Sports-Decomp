extern int fn_82C4E5E8();


void fn_82C75630(int *param_1)

{
  unsigned __int64 *puVar1;
  unsigned int uVar2;
  __int64 *plVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char cVar6;
  __int64 lVar7;
  int iVar9;
  unsigned __int64 uVar8;
  
  if ((*(unsigned char *)(param_1 + 0x137) < 8) ||
     ((((param_1[0x147] != 0 && (param_1[0x147] != 4)) || (param_1[0x124] == 7)) &&
      (*(char *)((int)param_1 + 0x1b) != '\0')))) {
    puVar1 = (unsigned __int64 *)*param_1;
    uVar8 = 3;
    lVar7 = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar4 = uVar5 + 0x10;
    if ((uVar4 & 0xffffffff) < 3) {
      do {
        if ((uVar4 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar4;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar4);
        lVar7 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) +
                lVar7;
        *puVar1 = *puVar1 << (uVar4 & 0x7f);
        if ((__int64)(uVar5 - uVar4) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar4 = uVar5 + 0x10;
      } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
    uVar4 = (*puVar1 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7;
    *puVar1 = *puVar1 << (uVar8 & 0x7f);
    if ((__int64)(uVar5 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(char *)((int)param_1 + 0x4df) = (char)uVar4;
    if ((uVar4 & 0xff) != 0) goto LAB_82c75888;
    if (param_1[0x124] < 6) {
      plVar3 = (__int64 *)*param_1;
      lVar7 = *plVar3;
      uVar2 = *(unsigned int *)(plVar3 + 1);
      *plVar3 = lVar7 << 1;
      *(int *)(plVar3 + 1) = (int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      cVar6 = '\b' - (char)(lVar7 >> 0x3f);
    }
    else {
      puVar1 = (unsigned __int64 *)*param_1;
      uVar8 = 2;
      iVar9 = 0;
      cVar6 = '\0';
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar4 = uVar5 + 0x10;
      if ((uVar4 & 0xffffffff) < 2) {
        do {
          cVar6 = (char)iVar9;
          if ((uVar4 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar4;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar4);
          iVar9 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
          cVar6 = (char)iVar9;
          *puVar1 = *puVar1 << (uVar4 & 0x7f);
          if ((__int64)(uVar5 - uVar4) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar4 = uVar5 + 0x10;
        } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar4 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
      *puVar1 = uVar4 << (uVar8 & 0x7f);
      if ((__int64)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      cVar6 = (char)(uVar4 >> (0x40 - uVar8 & 0x7f)) + cVar6 + '\b';
    }
  }
  else {
    iVar9 = 0;
    uVar5 = 0;
    do {
      if ((int)uVar5 != 0) goto LAB_82c756c8;
      puVar1 = (unsigned __int64 *)*param_1;
      uVar4 = *puVar1;
      uVar2 = *(unsigned int *)(puVar1 + 1);
      uVar5 = uVar4 >> 0x3f;
      *puVar1 = uVar4 << 1;
      *(int *)(puVar1 + 1) = (int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
    if (-1 < (__int64)uVar4) {
      *(unsigned char *)((int)param_1 + 0x4df) = 8;
      goto LAB_82c75888;
    }
LAB_82c756c8:
    cVar6 = (char)iVar9 + '\x01';
  }
  *(char *)((int)param_1 + 0x4df) = cVar6;
LAB_82c75888:
  puVar1 = (unsigned __int64 *)*param_1;
  uVar8 = 2;
  iVar9 = 0;
  cVar6 = '\0';
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar4 = uVar5 + 0x10;
  if ((uVar4 & 0xffffffff) < 2) {
    do {
      cVar6 = (char)iVar9;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar4);
      iVar9 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
      cVar6 = (char)iVar9;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((__int64)(uVar5 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar4 = uVar5 + 0x10;
    } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
  *puVar1 = uVar4 << (uVar8 & 0x7f);
  if ((__int64)(uVar5 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(char *)(param_1 + 0x138) = (char)(uVar4 >> (0x40 - uVar8 & 0x7f)) + cVar6 + '\x03';
  return;
}

