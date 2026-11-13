typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACAFD8();
extern int fn_82AD1978();
extern int fn_82B16898();
extern int fn_82B16D80();
extern int fn_82B19C90();
extern int fn_82B25248();
extern int fn_82B28AC0();
extern int fn_82B82D28();
extern int fn_82B843F0();
extern int fn_82B8BCB0();
extern int fn_82B8D488();
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82B2A568(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  char cVar8;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int iStack_90;
  int iStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  int iStack_78;
  unsigned int uStack_74;
  int iStack_70;
  unsigned int uStack_6c;
  int aiStack_68;
  
  puVar1 = *(unsigned int **)(param_2 + 0x2c);
  uVar2 = *(unsigned int *)(param_2 + 0x30);
  bVar4 = false;
  uVar12 = 0;
  if ((*puVar1 & 0xe000000) != 0) {
    do {
      fn_82B82D28(puVar1,uVar12,&uStack_a0,&uStack_98,&iStack_8c,0,param_2,0);
      fn_82B82D28(uVar2,uVar12,&uStack_9c,&uStack_94,&iStack_90,0,param_2,0);
      if (uStack_a0 != uStack_9c) {
        uVar11 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
        uVar7 = uStack_a0;
        uVar5 = uStack_9c;
        if ((*(unsigned int *)(uStack_9c + 8) >> 7 & 0x7f) == uVar11) {
          if ((((((*(unsigned int *)(uStack_a0 + 8) >> 7 & 0x7f) == uVar11) && (iStack_90 == 0)) &&
               (fn_82B82D28(*(unsigned int *)(uStack_9c + 0x2c),uStack_94,&uStack_80,&uStack_7c,
                                  &iStack_78,0,param_2,0), uVar5 = uStack_9c, uVar7 = uStack_a0,
               ((*(unsigned int *)(uStack_80 + 8) ^ *(unsigned int *)(param_2 + 8)) & 0x3f80) != 0)) &&
              ((cVar8 = fn_82B19C90(param_1,param_2,uVar12,0,uStack_80,uStack_7c,iStack_78,
                                        uStack_9c), uVar7 = uStack_a0, cVar8 != '\0' &&
               (cVar8 = fn_82B19C90(param_1,uVar5,uStack_94,0,uStack_a0,uStack_98,iStack_8c,
                                        param_2), cVar8 != '\0')))) &&
             (cVar8 = fn_82B8BCB0(param_1,uVar7,uVar5,0), uVar7 = uStack_a0, uVar5 = uStack_9c
             , cVar8 != '\0')) {
            fn_82B8D488(param_1,uStack_a0,uStack_9c,0);
            fn_82B28AC0(param_1,param_2,puVar1,uVar12,uStack_80,uStack_7c,iStack_78);
            uVar5 = fn_82B843F0(param_1,uStack_9c);
            iVar9 = 0x2c;
            for (uVar11 = 0; uVar11 < (*(unsigned int *)(uStack_9c + 8) >> 0x13 & 7); uVar11 = uVar11 + 1) {
              uVar6 = fn_82AD1978(uVar5,*(unsigned int *)(iVar9 + uStack_9c));
              *(unsigned int *)(iVar9 + uVar5) = uVar6;
              iVar9 = iVar9 + 4;
            }
            uVar11 = uVar5 & 0xfffffffe;
            puVar10 = (unsigned int *)((uStack_9c & 0xfffffffe) + 0x24);
            *(unsigned int *)(uVar11 + 0x24) = *puVar10;
            *(unsigned int *)(*puVar10 & 0xfffffffe) = uVar11;
            *(unsigned int *)(uVar11 + 0x28) = uStack_9c & 0xfffffffe;
            *puVar10 = uVar11 + 0x28;
            fn_82B28AC0(param_1,uVar5,*(unsigned int *)(uVar5 + 0x2c),uStack_94,uStack_a0,uStack_98,
                          iStack_8c);
            fn_82B16898(uVar5,uStack_94);
            fn_82B28AC0(param_1,param_2,uVar2,uVar12,uVar5,uStack_94,iStack_90);
            uVar11 = *(unsigned int *)(param_2 + 0xc) & 0x4444;
            if ((*(unsigned int *)(param_2 + 0xc) & 0xffff) != uVar11) {
              *(short *)(param_2 + 0xe) = (short)uVar11;
            }
            fn_82B16898(param_2,uVar12);
            fn_82B25248(param_1,uStack_9c,*(unsigned int *)(param_1 + 0x28c));
            *(unsigned int *)(uVar5 + 8) = *(unsigned int *)(uVar5 + 8) & 0xfbffffff;
            fn_82B25248(param_1,uVar5,*(unsigned int *)(param_1 + 0x28c));
            bVar4 = true;
            uStack_98 = uStack_7c;
            uStack_a0 = uStack_80;
            iStack_8c = iStack_78;
            uStack_9c = uVar5;
            uVar7 = uStack_80;
          }
          if (((*(unsigned int *)(uVar7 + 8) ^ *(unsigned int *)(param_2 + 8)) & 0x3f80) != 0) {
            fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar5,uStack_94,iStack_90);
            fn_82B28AC0(param_1,param_2,uVar2,uVar12,uStack_a0,uStack_98,iStack_8c);
            iVar9 = iStack_90;
            uVar6 = uStack_94;
            uVar7 = uStack_9c;
            uVar5 = uStack_a0;
            bVar4 = true;
            uStack_94 = uStack_98;
            iStack_90 = iStack_8c;
            uStack_98 = uVar6;
            iStack_8c = iVar9;
            uStack_9c = uStack_a0;
            uStack_a0 = uVar7;
          }
        }
        if (((*(unsigned int *)(uVar7 + 8) ^ *(unsigned int *)(param_2 + 8)) & 0x3f80) == 0) {
          if (iStack_8c == 0) {
            fn_82B82D28(*(unsigned int *)(uVar7 + 0x30),uStack_98,&uStack_88,&uStack_74,
                              &iStack_70,0,param_2,0);
            uVar11 = uStack_88;
            uVar5 = uStack_9c;
            uVar7 = uStack_a0;
            if ((((((*(unsigned int *)(uStack_88 + 8) ^ *(unsigned int *)(param_2 + 8)) & 0x3f80) != 0) &&
                 (cVar8 = fn_82B19C90(param_1,param_2,uVar12,1,uStack_88,uStack_74,iStack_70,
                                          uStack_9c), uVar7 = uStack_a0, cVar8 != '\0')) &&
                ((cVar8 = fn_82B19C90(param_1,uStack_a0,uStack_98,1,uVar5,uStack_94,iStack_90,
                                          param_2), cVar8 != '\0' &&
                 (cVar8 = fn_82B16D80(uVar5,uVar11), cVar8 != '\0')))) &&
               (((cVar8 = fn_82ACAFD8(uVar5), cVar8 == '\0' &&
                 (uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(uVar5 + 0x1c) + 0x30) & 0x7ffff,
                 (*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(*(int *)(uVar7 + 0x1c) + 0x28)) &
                 1 << ((unsigned int)uVar3 & 0x1f)) != 0)) ||
                (cVar8 = fn_82B8BCB0(param_1,uVar5,uVar7,0), uVar5 = uStack_9c,
                uVar11 = uStack_88, uVar7 = uStack_a0, cVar8 != '\0')))) {
              cVar8 = fn_82ACAFD8(uVar5);
              if (cVar8 != '\0') {
                fn_82B8D488(param_1,uVar5,uVar7,0);
                uVar11 = uStack_88;
              }
              fn_82B28AC0(param_1,param_2,uVar2,uVar12,uVar11,uStack_74,iStack_70);
              uVar7 = fn_82B843F0(param_1,uStack_a0);
              iVar9 = 0x2c;
              for (uVar11 = 0; uVar11 < (*(unsigned int *)(uStack_a0 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1)
              {
                uVar6 = fn_82AD1978(uVar7,*(unsigned int *)(iVar9 + uStack_a0));
                *(unsigned int *)(iVar9 + uVar7) = uVar6;
                iVar9 = iVar9 + 4;
              }
              uVar11 = uVar7 & 0xfffffffe;
              puVar10 = (unsigned int *)((uStack_a0 & 0xfffffffe) + 0x24);
              *(unsigned int *)(uVar11 + 0x24) = *puVar10;
              *(unsigned int *)(*puVar10 & 0xfffffffe) = uVar11;
              *(unsigned int *)(uVar11 + 0x28) = uStack_a0 & 0xfffffffe;
              *puVar10 = uVar11 + 0x28;
              fn_82B28AC0(param_1,uVar7,*(unsigned int *)(uVar7 + 0x30),uStack_98,uStack_9c,
                            uStack_94,iStack_90);
              fn_82B16898(uVar7,uStack_98);
              fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar7,uStack_98,iStack_8c);
              uVar11 = *(unsigned int *)(param_2 + 0xc) & 0x4444;
              if ((*(unsigned int *)(param_2 + 0xc) & 0xffff) != uVar11) {
                *(short *)(param_2 + 0xe) = (short)uVar11;
              }
              fn_82B16898(param_2,uVar12);
              fn_82B25248(param_1,uStack_a0,*(unsigned int *)(param_1 + 0x28c));
              *(unsigned int *)(uVar7 + 8) = *(unsigned int *)(uVar7 + 8) & 0xfbffffff;
              fn_82B25248(param_1,uVar7,*(unsigned int *)(param_1 + 0x28c));
              bVar4 = true;
              uStack_9c = uStack_88;
              uStack_94 = uStack_74;
              iStack_90 = iStack_70;
              uStack_a0 = uVar7;
            }
            fn_82B82D28(*(unsigned int *)(uVar7 + 0x2c),uStack_98,&uStack_84,&uStack_6c,
                              &aiStack_68,0,param_2,0);
            uVar11 = uStack_84;
            uVar7 = uStack_a0;
            if (((((*(unsigned int *)(uStack_84 + 8) ^ *(unsigned int *)(param_2 + 8)) & 0x3f80) != 0) &&
                (cVar8 = fn_82B19C90(param_1,param_2,uVar12,1,uStack_84,uStack_6c,aiStack_68,
                                         uStack_a0), uVar5 = uStack_9c, cVar8 != '\0')) &&
               (((cVar8 = fn_82B19C90(param_1,uVar7,uStack_98,0,uStack_9c,uStack_94,iStack_90,
                                          param_2), cVar8 != '\0' &&
                 (cVar8 = fn_82B16D80(uVar5,uVar11), cVar8 != '\0')) &&
                (((cVar8 = fn_82ACAFD8(uVar5), cVar8 == '\0' &&
                  (uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(uVar5 + 0x1c) + 0x30) & 0x7ffff,
                  (*(unsigned int *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(*(int *)(uVar7 + 0x1c) + 0x28))
                  & 1 << ((unsigned int)uVar3 & 0x1f)) != 0)) ||
                 (cVar8 = fn_82B8BCB0(param_1,uVar5,uVar7,0), uVar7 = uStack_a0,
                 uVar5 = uStack_9c, uVar11 = uStack_84, cVar8 != '\0')))))) {
              cVar8 = fn_82ACAFD8(uVar5);
              if (cVar8 != '\0') {
                fn_82B8D488(param_1,uVar5,uVar7,0);
                uVar11 = uStack_84;
              }
              fn_82B28AC0(param_1,param_2,uVar2,uVar12,uVar11,uStack_6c,aiStack_68);
              uVar7 = fn_82B843F0(param_1,uStack_a0);
              iVar9 = 0x2c;
              for (uVar11 = 0; uVar11 < (*(unsigned int *)(uStack_a0 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1)
              {
                uVar6 = fn_82AD1978(uVar7,*(unsigned int *)(iVar9 + uStack_a0));
                *(unsigned int *)(iVar9 + uVar7) = uVar6;
                iVar9 = iVar9 + 4;
              }
              uVar11 = uVar7 & 0xfffffffe;
              puVar10 = (unsigned int *)((uStack_a0 & 0xfffffffe) + 0x24);
              *(unsigned int *)(uVar11 + 0x24) = *puVar10;
              *(unsigned int *)(*puVar10 & 0xfffffffe) = uVar11;
              *(unsigned int *)(uVar11 + 0x28) = uStack_a0 & 0xfffffffe;
              *puVar10 = uVar11 + 0x28;
              fn_82B28AC0(param_1,uVar7,*(unsigned int *)(uVar7 + 0x2c),uStack_98,uStack_9c,
                            uStack_94,iStack_90);
              fn_82B16898(uVar7,uStack_98);
              fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar7,uStack_98,iStack_8c);
              uVar11 = *(unsigned int *)(param_2 + 0xc) & 0x4444;
              if ((*(unsigned int *)(param_2 + 0xc) & 0xffff) != uVar11) {
                *(short *)(param_2 + 0xe) = (short)uVar11;
              }
              fn_82B16898(param_2,uVar12);
              fn_82B25248(param_1,uStack_a0,*(unsigned int *)(param_1 + 0x28c));
              *(unsigned int *)(uVar7 + 8) = *(unsigned int *)(uVar7 + 8) & 0xfbffffff;
              fn_82B25248(param_1,uVar7,*(unsigned int *)(param_1 + 0x28c));
              uVar11 = uStack_84;
              uVar6 = uStack_6c;
              iVar9 = aiStack_68;
              uStack_a0 = uVar7;
              goto LAB_82b2aeb4;
            }
          }
        }
        else {
          cVar8 = fn_82B16D80(uVar7,uVar5);
          if (cVar8 != '\0') {
            fn_82B28AC0(param_1,param_2,puVar1,uVar12,uVar5,uStack_94,iStack_90);
            fn_82B28AC0(param_1,param_2,uVar2,uVar12,uStack_a0,uStack_98,iStack_8c);
            iVar9 = iStack_8c;
            uVar6 = uStack_98;
            uVar11 = uStack_a0;
            uStack_a0 = uStack_9c;
            uStack_98 = uStack_94;
            iStack_8c = iStack_90;
LAB_82b2aeb4:
            bVar4 = true;
            uStack_9c = uVar11;
            uStack_94 = uVar6;
            iStack_90 = iVar9;
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffffffff) < ((unsigned __int64)(*puVar1 >> 0x19) & 7));
  }
  if (bVar4) {
    uVar2 = *(unsigned int *)(param_1 + 0x28c);
    for (iVar9 = *(int *)(param_2 + 4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
      if (*(int *)(iVar9 + 0x10) != 0) {
        fn_82B25248(param_1,*(int *)(iVar9 + 0x10),uVar2);
      }
    }
  }
  return;
}

