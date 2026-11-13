typedef unsigned char bool;
#define true 1
extern int fn_828123C0();
extern int fn_828132A8();
extern int fn_82813AE0();
extern int fn_82A1BB18();
extern int fn_82A1E300();
extern unsigned int uRam8320a3f0;
extern unsigned int uRam8320a3f4;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82812488(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  char in_RESERVE;
  unsigned char bVar10;
  int aiStack_40 [16];
  
  lVar7 = 0;
  lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) - 1;
  if (-1 < lVar9) {
    lVar8 = lVar9 * 0x30;
    do {
      uVar2 = *(unsigned int *)(param_1 + 0xcc);
      iVar4 = fn_82A1BB18();
      if (*(int *)((int)lVar8 + uVar2) == iVar4) {
        lVar7 = lVar9 * 0x30 + (unsigned __int64)uVar2;
        break;
      }
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + -0x30;
    } while (-1 < lVar9);
  }
  lVar9 = lVar7 + 0xc;
  do {
    pcVar6 = (char *)lVar9;
    lVar9 = lVar9 + 1;
  } while (*pcVar6 != '\0');
  bVar1 = ((lVar9 - (lVar7 + 0xc)) - 1U & 0xffffffff) == 0;
  bVar10 = bVar1 << 1;
  if (!bVar1) {
    fn_828123C0();
  }
  puVar3 = *(unsigned int **)((int)lVar7 + 8);
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())*puVar3)();
  }
  *(unsigned char *)((int)lVar7 + 0x2c) = 1;
LAB_82812534:
  while (uRam8320a3f0 != 0) {
    if (2 < uRam8320a3f0) goto code_r0x82812548;
    do {
      if (in_RESERVE != '\0') {
        uRam8320a3f4 = storeWordConditionalIndexed((unsigned __int64)uRam8320a3f4 + 1,0,0xffffffff8320a3f4)
        ;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
    if (uRam8320a3f0 == 1) {
      do {
        cVar5 = fn_82813AE0(param_1 + 8,aiStack_40);
        if ((cVar5 == '\0') && (cVar5 = fn_82813AE0(param_1 + 0x48,aiStack_40), cVar5 == '\0')
           ) {
          cVar5 = fn_82813AE0(param_1 + 0x88,aiStack_40);
          if (cVar5 != '\0') {
            *(unsigned char *)(aiStack_40[0] + 0x15) = 0;
            goto LAB_82812600;
          }
          fn_82A1E300();
        }
        else {
LAB_82812600:
          fn_828132A8(aiStack_40[0]);
        }
        bVar1 = *(char *)(param_1 + 0x78) == '\0';
        if (!bVar1) {
          do {
            if (in_RESERVE != '\0') {
              uRam8320a3f4 = storeWordConditionalIndexed
                                       ((unsigned __int64)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
              bVar1 = true;
            }
          } while (!bVar1);
          return 0;
        }
      } while (uRam8320a3f0 == 1);
    }
    if (uRam8320a3f0 == 2) {
      do {
        cVar5 = fn_82813AE0(param_1 + 8,aiStack_40);
        if ((cVar5 == '\0') && (cVar5 = fn_82813AE0(param_1 + 0x48,aiStack_40), cVar5 == '\0')
           ) {
          fn_82A1E300();
        }
        else {
          fn_828132A8(aiStack_40[0]);
        }
        bVar1 = *(char *)(param_1 + 0x78) == '\0';
        if (!bVar1) {
          do {
            if (in_RESERVE != '\0') {
              uRam8320a3f4 = storeWordConditionalIndexed
                                       ((unsigned __int64)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
              bVar1 = true;
            }
          } while (!bVar1);
          return 0;
        }
      } while (uRam8320a3f0 == 2);
    }
    while ((cVar5 = fn_82813AE0(param_1 + 8,aiStack_40), cVar5 != '\0' ||
           (cVar5 = fn_82813AE0(param_1 + 0x48,aiStack_40), cVar5 != '\0'))) {
      fn_828132A8(aiStack_40[0]);
      bVar1 = *(char *)(param_1 + 0x78) == '\0';
      if (!bVar1) {
        do {
          if (in_RESERVE != '\0') {
            uRam8320a3f4 = storeWordConditionalIndexed
                                     ((unsigned __int64)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
            bVar1 = true;
          }
        } while (!bVar1);
        return 0;
      }
    }
    if (in_RESERVE != '\0') {
      uRam8320a3f4 = storeWordConditionalIndexed((unsigned __int64)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
    }
    bVar10 = 2;
  }
  goto LAB_8281254c;
code_r0x82812548:
  if (uRam8320a3f0 == 3) {
LAB_8281254c:
    while ((uRam8320a3f0 == 0 || (uRam8320a3f0 == 3))) {
      fn_82A1E300();
      bVar1 = *(char *)(param_1 + 0x78) == '\0';
      bVar10 = bVar1 << 1;
      if (!bVar1) {
        return 0;
      }
    }
  }
  goto LAB_82812534;
}

