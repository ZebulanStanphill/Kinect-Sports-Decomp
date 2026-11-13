typedef unsigned char bool;
#define true 1
extern int fn_82BFBA20();
extern int fn_82BFEAD8();
extern unsigned int uStack_30;
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BFCC28(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 *plVar4;
  unsigned __int64 uVar5;
  unsigned __int64 in_r7;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 in_r8;
  unsigned __int64 in_r9;
  __int64 lVar8;
  unsigned __int64 in_r10;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_30;
  
  plVar4 = (__int64 *)param_1;
  uVar10 = (unsigned __int64)*(unsigned int *)(plVar4 + 6);
  lVar11 = param_1 + 0x34;
  do {
    puVar12 = (unsigned int *)lVar11;
    uVar2 = *puVar12;
    if ((int)uVar2 < 0) break;
    if (uVar2 == 0) {
      return 0;
    }
    if ((int)uVar2 < (int)uVar10) {
      uVar10 = (unsigned __int64)uVar2;
    }
    sync(1);
    do {
      uVar1 = *puVar12;
      in_r9 = (unsigned __int64)uVar1;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(in_r9,0,lVar11);
          *puVar12 = uVar3;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar2 - uVar10,0,lVar11);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    in_r8 = in_MSR;
    in_r10 = in_r9;
  } while (uVar1 != uVar2);
  lVar11 = (uVar10 & 0xfffffff) * 0x10;
  uVar5 = fn_82BFBA20(*(unsigned int *)(plVar4 + 9),param_1 + 0x28,lVar11,param_1 + 0x3c,in_r7,in_r8
                        ,in_r9,in_r10);
  if ((uVar5 & 0xffffffff) == 0) {
    *puVar12 = (unsigned int)uVar5;
  }
  else {
    do {
      puVar12 = (unsigned int *)(param_1 + 0x38);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar10 + *puVar12,0,param_1 + 0x38);
        *puVar12 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar6 = uVar10 - 1;
    lVar11 = lVar11 + uVar5;
    iVar7 = (int)uVar6;
    uVar5 = uVar6;
    lVar8 = lVar11;
    if (iVar7 != 0) {
      do {
        lVar11 = lVar8 + -0x10;
        while( true ) {
          lVar9 = *plVar4;
          uStack_30 = (unsigned int)((unsigned __int64)lVar9 >> 0x20);
          *(unsigned int *)((int)lVar8 + -8) = uStack_30;
          sync(1);
          in_RESERVE = '\x01';
          if (*plVar4 == lVar9) break;
          lVar9 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
          *plVar4 = lVar9;
        }
        lVar8 = storeDoubleWordConditionalIndexed
                          ((lVar9 + 1U & 0x7fffffff) + (lVar11 << 0x20),0,param_1);
        *plVar4 = lVar8;
        uVar5 = uVar5 - 1;
        in_cr0 = (uVar5 == 0) << 1;
        lVar8 = lVar11;
      } while (uVar5 != 0);
    }
    uVar5 = lVar11 - 0x10;
    if (*(int *)((int)plVar4 + 0x1c) != 0) {
      do {
        puVar12 = (unsigned int *)(param_1 + 0x18);
        uVar2 = *puVar12;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar10 + uVar2,0,param_1 + 0x18);
          *puVar12 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (((int)uVar2 < -1) && (0 < iVar7)) {
        uVar10 = ~(unsigned __int64)uVar2;
        if (iVar7 < (int)uVar10) {
          uVar10 = uVar6;
        }
        fn_82BFEAD8(*(unsigned int *)((int)plVar4 + 0x1c),uVar10);
      }
    }
  }
  return uVar5;
}

