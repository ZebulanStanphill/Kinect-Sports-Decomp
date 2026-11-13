typedef unsigned char bool;
#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A2A618();
extern int fn_82BFBBF0();
extern int fn_82BFEB30();
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BFC2D0(__int64 param_1,unsigned __int64 param_2,__int64 param_3,int (**param_4)(),
                       int param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  __int64 *plVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  __int64 *plVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  int (**in_MSR)();
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int *puStack_60;
  
  plVar4 = (__int64 *)param_1;
  uVar12 = 0;
  if (*(int *)((int)plVar4 + 0x14) == 0) {
    while( true ) {
      lVar8 = *plVar4;
      puStack_60 = (unsigned int *)((unsigned __int64)lVar8 >> 0x20);
      if (puStack_60 == (unsigned int *)0x0) break;
      sync(1);
      param_3 = ((unsigned __int64)*puStack_60 << 0x20) + (lVar8 + 1U & 0x7fffffff);
      if (*plVar4 == lVar8) {
        lVar8 = storeDoubleWordConditionalIndexed(param_3,0,param_1);
        *plVar4 = lVar8;
        puVar5 = puStack_60;
        goto LAB_82bfc370;
      }
      lVar8 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
      *plVar4 = lVar8;
      param_4 = in_MSR;
    }
    if ((*(int *)((int)plVar4 + 0x2c) == 0) ||
       (puVar5 = (unsigned int *)fn_82BFBBF0(param_1,param_2,param_3,param_4), puVar5 == (unsigned int *)0x0)) {
      return 0x102;
    }
  }
  else {
    puStack_60 = (unsigned int *)0x0;
    lVar8 = param_1 + 0x10;
    do {
      puVar11 = (unsigned int *)lVar8;
      uVar1 = *puVar11;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1 - 1,0,lVar8);
        *puVar11 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)((unsigned __int64)uVar1 - 1) < 0) {
LAB_82bfc480:
      if ((*(int *)((int)plVar4 + 0x2c) == 0) ||
         (puStack_60 = (unsigned int *)fn_82BFBBF0(param_1), puVar5 = puStack_60,
         puStack_60 == (unsigned int *)0x0)) {
        if (param_5 != 0) {
          lVar9 = 1000;
          uVar10 = uVar12;
          do {
            do {
              uVar12 = uVar12 - 1;
            } while (-1 < (__int64)uVar12);
            uVar12 = uVar10;
            if ((int)uVar10 < 0x200) {
              uVar12 = (uVar10 & 0x7fffffff) * 2 + 1;
            }
            while( true ) {
              lVar6 = *plVar4;
              puStack_60 = (unsigned int *)((unsigned __int64)lVar6 >> 0x20);
              if (puStack_60 == (unsigned int *)0x0) break;
              sync(1);
              in_RESERVE = '\x01';
              if (*plVar4 == lVar6) {
                lVar8 = storeDoubleWordConditionalIndexed
                                  (((unsigned __int64)*puStack_60 << 0x20) + (lVar6 + 1U & 0x7fffffff),0,
                                   param_1);
                *plVar4 = lVar8;
                puVar5 = puStack_60;
                goto LAB_82bfc370;
              }
              lVar6 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
              *plVar4 = lVar6;
            }
            lVar9 = lVar9 + -1;
            in_cr0 = (lVar9 == 0) << 1;
            uVar10 = uVar12;
          } while (lVar9 != 0);
        }
        puVar5 = puStack_60;
        if (puStack_60 == (unsigned int *)0x0) {
          do {
            uVar10 = uVar12;
            if (param_5 != 0) {
              do {
                uVar10 = uVar10 - 1;
                in_cr0 = (uVar10 == 0) << 1;
              } while (-1 < (__int64)uVar10);
              if ((int)uVar12 < 0x200) {
                uVar12 = (uVar12 & 0x7fffffff) * 2 + 1;
              }
            }
            if (param_4 == (int (**)())0x0) {
              if ((param_6 & 0xffffffff) == 0) {
                uVar10 = 0x102;
              }
              else {
                uVar10 = fn_82BFEB30(*(unsigned int *)((int)plVar4 + 0x14),param_6,param_7);
              }
            }
            else {
              uVar10 = (*param_4)(param_3,*(unsigned int *)((int)plVar4 + 0x14),param_6,param_7);
            }
            if ((uVar10 & 0xffffffff) != 0) {
              do {
                if (in_RESERVE != '\0') {
                  uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar11 + 1,0,lVar8);
                  *puVar11 = uVar1;
                  in_cr0 = 2;
                }
              } while (!(bool)(in_cr0 >> 1 & 1));
              return uVar10;
            }
            while( true ) {
              lVar9 = *plVar4;
              puStack_60 = (unsigned int *)((unsigned __int64)lVar9 >> 0x20);
              if (puStack_60 == (unsigned int *)0x0) break;
              sync(1);
              in_RESERVE = '\x01';
              lVar6 = *plVar4;
              if (lVar6 == lVar9) {
                lVar2 = storeDoubleWordConditionalIndexed
                                  (((unsigned __int64)*puStack_60 << 0x20) + (lVar9 + 1U & 0x7fffffff),0,
                                   param_1);
                *plVar4 = lVar2;
              }
              else {
                lVar2 = storeDoubleWordConditionalIndexed(lVar6,0,param_1);
                *plVar4 = lVar2;
              }
              in_cr0 = 2;
              puVar5 = puStack_60;
              if (lVar6 == lVar9) goto LAB_82bfc370;
            }
          } while( true );
        }
      }
    }
    else {
      do {
        lVar9 = *plVar4;
        puStack_60 = (unsigned int *)((unsigned __int64)lVar9 >> 0x20);
        if (puStack_60 == (unsigned int *)0x0) goto LAB_82bfc480;
        sync(1);
        in_RESERVE = '\x01';
        lVar6 = *plVar4;
        if (lVar6 == lVar9) {
          lVar2 = storeDoubleWordConditionalIndexed
                            (((unsigned __int64)*puStack_60 << 0x20) + (lVar9 + 1U & 0x7fffffff),0,param_1)
          ;
          *plVar4 = lVar2;
        }
        else {
          lVar2 = storeDoubleWordConditionalIndexed(lVar6,0,param_1);
          *plVar4 = lVar2;
        }
        in_cr0 = 2;
        puVar5 = puStack_60;
      } while (lVar6 != lVar9);
    }
  }
LAB_82bfc370:
  puVar5[1] = (unsigned int)param_2;
  param_1 = param_1 + 8;
  while( true ) {
    plVar7 = (__int64 *)param_1;
    lVar8 = *plVar7;
    puStack_60 = (unsigned int *)((unsigned __int64)lVar8 >> 0x20);
    *puVar5 = (unsigned int)puStack_60;
    sync(1);
    if (*plVar7 == lVar8) break;
    lVar8 = storeDoubleWordConditionalIndexed(*plVar7,0,param_1);
    *plVar7 = lVar8;
  }
  lVar8 = storeDoubleWordConditionalIndexed
                    ((lVar8 + 1U & 0x7fffffff) + (ZEXT48(puVar5) << 0x20),0,param_1);
  *plVar7 = lVar8;
  if ((*(int *)((int)plVar4 + 0x1c) != 0) && (0 < *(int *)(plVar4 + 3))) {
    fn_82A2A618(*(int *)((int)plVar4 + 0x1c),1,0);
  }
  return 0;
}

