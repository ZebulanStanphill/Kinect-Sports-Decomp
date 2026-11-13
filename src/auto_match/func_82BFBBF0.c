typedef unsigned char bool;
#define true 1
extern int fn_82A2A618();
extern int fn_82BFBA20();
extern unsigned int uStack_30;
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BFBBF0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 *plVar4;
  unsigned __int64 uVar5;
  unsigned __int64 in_r7;
  unsigned __int64 uVar6;
  unsigned __int64 in_r8;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 in_r9;
  unsigned __int64 in_r10;
  __int64 lVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_30;
  
  plVar4 = (__int64 *)param_1;
  uVar11 = (unsigned __int64)*(unsigned int *)(plVar4 + 5);
  lVar9 = param_1 + 0x2c;
  do {
    puVar10 = (unsigned int *)lVar9;
    uVar2 = *puVar10;
    if ((int)uVar2 < 0) break;
    if (uVar2 == 0) {
      return 0;
    }
    if ((int)uVar2 < (int)uVar11) {
      uVar11 = (unsigned __int64)uVar2;
    }
    sync(1);
    do {
      uVar1 = *puVar10;
      in_r9 = (unsigned __int64)uVar1;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(in_r9,0,lVar9);
          *puVar10 = uVar3;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar2 - uVar11,0,lVar9);
        *puVar10 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    in_r8 = in_MSR;
    in_r10 = in_r9;
  } while (uVar1 != uVar2);
  lVar9 = (uVar11 & 0x1fffffff) * 8;
  uVar5 = fn_82BFBA20(*(unsigned int *)(plVar4 + 8),param_1 + 0x20,lVar9,param_1 + 0x34,in_r7,in_r8,
                        in_r9,in_r10);
  if ((uVar5 & 0xffffffff) == 0) {
    *puVar10 = 0;
  }
  else {
    do {
      puVar10 = (unsigned int *)(param_1 + 0x30);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar11 + *puVar10,0,param_1 + 0x30);
        *puVar10 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar7 = uVar11 - 1;
    uVar5 = (lVar9 + uVar5) - 8;
    iVar8 = (int)uVar7;
    uVar6 = uVar7;
    if (iVar8 != 0) {
      do {
        while( true ) {
          lVar9 = *plVar4;
          uStack_30 = (unsigned int)((unsigned __int64)lVar9 >> 0x20);
          *(unsigned int *)uVar5 = uStack_30;
          sync(1);
          in_RESERVE = '\x01';
          if (*plVar4 == lVar9) break;
          lVar9 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
          *plVar4 = lVar9;
        }
        lVar9 = storeDoubleWordConditionalIndexed
                          ((lVar9 + 1U & 0x7fffffff) + (uVar5 << 0x20),0,param_1);
        *plVar4 = lVar9;
        uVar6 = uVar6 - 1;
        in_cr0 = (uVar6 == 0) << 1;
        uVar5 = uVar5 - 8;
      } while (uVar6 != 0);
    }
    if (*(int *)((int)plVar4 + 0x14) != 0) {
      do {
        puVar10 = (unsigned int *)(param_1 + 0x10);
        uVar2 = *puVar10;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar11 + uVar2,0,param_1 + 0x10);
          *puVar10 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (((int)uVar2 < -1) && (0 < iVar8)) {
        uVar11 = ~(unsigned __int64)uVar2;
        if (iVar8 < (int)uVar11) {
          uVar11 = uVar7;
        }
        fn_82A2A618(*(unsigned int *)((int)plVar4 + 0x14),uVar11,0);
      }
    }
  }
  return uVar5;
}

