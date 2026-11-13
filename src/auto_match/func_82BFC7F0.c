typedef unsigned char bool;
#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A2A618();
extern int fn_82BFEB30();
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BFC7F0(__int64 param_1,unsigned int *param_2,unsigned __int64 param_3,int (**param_4)(),int param_5,
                       unsigned __int64 param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 *plVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 *plVar7;
  __int64 lVar6;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int *puStack_60;
  
  plVar3 = (__int64 *)param_1;
  uVar10 = 0;
  if (*(int *)((int)plVar3 + 0x1c) == 0) {
    lVar5 = param_1 + 8;
    while( true ) {
      plVar7 = (__int64 *)lVar5;
      lVar8 = *plVar7;
      puStack_60 = (unsigned int *)((unsigned __int64)lVar8 >> 0x20);
      if (puStack_60 == (unsigned int *)0x0) {
        return 0x102;
      }
      sync(1);
      if (*plVar7 == lVar8) break;
      lVar8 = storeDoubleWordConditionalIndexed(*plVar7,0,lVar5);
      *plVar7 = lVar8;
    }
    lVar5 = storeDoubleWordConditionalIndexed
                      (((unsigned __int64)*puStack_60 << 0x20) + (lVar8 + 1U & 0x7fffffff),0,lVar5);
    *plVar7 = lVar5;
    puVar11 = puStack_60;
  }
  else {
    lVar5 = param_1 + 8;
    do {
      plVar7 = (__int64 *)lVar5;
      lVar8 = *plVar7;
      puStack_60 = (unsigned int *)((unsigned __int64)lVar8 >> 0x20);
      if (puStack_60 == (unsigned int *)0x0) {
        if (param_5 != 0) {
          lVar8 = 1000;
          uVar9 = uVar10;
          do {
            do {
              uVar10 = uVar10 - 1;
            } while (-1 < (__int64)uVar10);
            uVar10 = uVar9;
            if ((int)uVar9 < 0x200) {
              uVar10 = (uVar9 & 0x7fffffff) * 2 + 1;
            }
            while( true ) {
              lVar4 = *plVar7;
              puStack_60 = (unsigned int *)((unsigned __int64)lVar4 >> 0x20);
              if (puStack_60 == (unsigned int *)0x0) break;
              sync(1);
              in_RESERVE = '\x01';
              if (*plVar7 == lVar4) {
                lVar5 = storeDoubleWordConditionalIndexed
                                  (((unsigned __int64)*puStack_60 << 0x20) + (lVar4 + 1U & 0x7fffffff),0,
                                   lVar5);
                *plVar7 = lVar5;
                puVar11 = puStack_60;
                goto LAB_82bfca60;
              }
              lVar4 = storeDoubleWordConditionalIndexed(*plVar7,0,lVar5);
              *plVar7 = lVar4;
            }
            lVar8 = lVar8 + -1;
            in_cr0 = (lVar8 == 0) << 1;
            uVar9 = uVar10;
          } while (lVar8 != 0);
        }
        lVar8 = param_1 + 0x18;
        do {
          puVar11 = (unsigned int *)lVar8;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar11 + 1,0,lVar8);
            *puVar11 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        do {
          lVar4 = *plVar7;
          puStack_60 = (unsigned int *)((unsigned __int64)lVar4 >> 0x20);
          if (puStack_60 == (unsigned int *)0x0) {
            do {
              uVar9 = uVar10;
              if (param_5 != 0) {
                do {
                  uVar9 = uVar9 - 1;
                  in_cr0 = (uVar9 == 0) << 1;
                } while (-1 < (__int64)uVar9);
                if ((int)uVar10 < 0x200) {
                  uVar10 = (uVar10 & 0x7fffffff) * 2 + 1;
                }
              }
              if (param_4 == (int (**)())0x0) {
                if ((param_6 & 0xffffffff) == 0) {
                  uVar9 = 0x102;
                }
                else {
                  uVar9 = fn_82BFEB30(*(unsigned int *)((int)plVar3 + 0x1c),param_6,param_7);
                }
              }
              else {
                uVar9 = (*param_4)(param_3,*(unsigned int *)((int)plVar3 + 0x1c),param_6,param_7);
              }
              if ((uVar9 & 0xffffffff) != 0) {
                do {
                  if (in_RESERVE != '\0') {
                    uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar11 - 1,0,lVar8);
                    *puVar11 = uVar2;
                    in_cr0 = 2;
                  }
                } while (!(bool)(in_cr0 >> 1 & 1));
                return uVar9;
              }
              while( true ) {
                lVar4 = *plVar7;
                puStack_60 = (unsigned int *)((unsigned __int64)lVar4 >> 0x20);
                if (puStack_60 == (unsigned int *)0x0) break;
                sync(1);
                in_RESERVE = '\x01';
                lVar6 = *plVar7;
                if (lVar6 == lVar4) {
                  lVar1 = storeDoubleWordConditionalIndexed
                                    (((unsigned __int64)*puStack_60 << 0x20) + (lVar4 + 1U & 0x7fffffff),0,
                                     lVar5);
                  *plVar7 = lVar1;
                }
                else {
                  lVar1 = storeDoubleWordConditionalIndexed(lVar6,0,lVar5);
                  *plVar7 = lVar1;
                }
                in_cr0 = 2;
                if (lVar6 == lVar4) goto LAB_82bfca44;
              }
            } while( true );
          }
          sync(1);
          in_RESERVE = '\x01';
          lVar6 = *plVar7;
          if (lVar6 == lVar4) {
            lVar1 = storeDoubleWordConditionalIndexed
                              (((unsigned __int64)*puStack_60 << 0x20) + (lVar4 + 1U & 0x7fffffff),0,lVar5)
            ;
            *plVar7 = lVar1;
          }
          else {
            lVar1 = storeDoubleWordConditionalIndexed(lVar6,0,lVar5);
            *plVar7 = lVar1;
          }
          in_cr0 = 2;
        } while (lVar6 != lVar4);
LAB_82bfca44:
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar11 - 1,0,lVar8);
        *puVar11 = uVar2;
        puVar11 = puStack_60;
        break;
      }
      sync(1);
      in_RESERVE = '\x01';
      lVar4 = *plVar7;
      if (lVar4 == lVar8) {
        lVar6 = storeDoubleWordConditionalIndexed
                          (((unsigned __int64)*puStack_60 << 0x20) + (lVar8 + 1U & 0x7fffffff),0,lVar5);
        *plVar7 = lVar6;
      }
      else {
        lVar6 = storeDoubleWordConditionalIndexed(lVar4,0,lVar5);
        *plVar7 = lVar6;
      }
      in_cr0 = 2;
      puVar11 = puStack_60;
    } while (lVar4 != lVar8);
  }
LAB_82bfca60:
  *param_2 = puVar11[1];
  while( true ) {
    lVar5 = *plVar3;
    puStack_60 = (unsigned int *)((unsigned __int64)lVar5 >> 0x20);
    *puVar11 = (unsigned int)puStack_60;
    sync(1);
    if (*plVar3 == lVar5) break;
    lVar5 = storeDoubleWordConditionalIndexed(*plVar3,0,param_1);
    *plVar3 = lVar5;
  }
  lVar5 = storeDoubleWordConditionalIndexed
                    ((lVar5 + 1U & 0x7fffffff) + (ZEXT48(puVar11) << 0x20),0,param_1);
  *plVar3 = lVar5;
  if (*(int *)((int)plVar3 + 0x14) != 0) {
    puVar11 = (unsigned int *)(param_1 + 0x10);
    lVar5 = (unsigned __int64)*puVar11 + 1;
    uVar2 = storeWordConditionalIndexed(lVar5,0,param_1 + 0x10);
    *puVar11 = uVar2;
    if ((int)lVar5 < 1) {
      fn_82A2A618(*(unsigned int *)((int)plVar3 + 0x14),1,0);
    }
  }
  return 0;
}

