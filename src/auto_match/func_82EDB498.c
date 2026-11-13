extern int fn_82F2EFA8();
extern int fn_82F338B8();
extern unsigned int lbl_82005710;


unsigned __int64
fn_82EDB498(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int *param_4,unsigned __int64 param_5,
             unsigned int param_6,unsigned int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  if (((param_4 != (unsigned int *)0x0) && (param_7 != (unsigned int *)0x0)) && (param_1 != 0)) {
    uVar6 = *(unsigned int *)(param_1 + 0x24);
    uVar7 = (unsigned __int64)uVar6;
    if (*(int *)(param_1 + 0x158) != 0) {
      uVar7 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    iVar8 = (int)uVar7;
    if (((iVar3 == 0x56555949) || (iVar3 == 0x30323449)) || (iVar3 == 0x32315659)) {
      uVar6 = *(int *)(*(int *)(param_1 + 4) + 8) * *(int *)(*(int *)(param_1 + 4) + 4) * 3;
      *param_4 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      uVar6 = *(int *)(param_1 + 0x20) * iVar8 * 3;
      uVar6 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      uVar6 = (unsigned int)*(unsigned short *)(iVar3 + 0xe) * *(int *)(iVar3 + 4);
      uVar6 = ((int)uVar6 >> 3) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 7) != 0) + 3;
      *param_4 = (((int)uVar6 >> 2) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 3) != 0)) *
                 *(int *)(iVar3 + 8) * 4;
      uVar6 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 4) + 0xe) * *(int *)(param_1 + 0x20);
      uVar6 = ((int)uVar6 >> 3) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 7) != 0) + 3;
      uVar6 = (((int)uVar6 >> 2) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 3) != 0)) * iVar8 * 4;
    }
    *param_7 = uVar6;
    if ((param_6 < uVar6) || (param_3 < *param_4)) {
      *param_4 = 0;
      *param_7 = 0;
      return 0xffffffff80004005;
    }
    if (((param_2 & 0xffffffff) != 0) && ((param_5 & 0xffffffff) != 0)) {
      if (*(int *)(param_1 + 0x154) == 0) {
        iVar3 = fn_82F2EFA8(param_1 + 0x40,*(unsigned int *)(param_1 + 4),param_2,param_5,
                                  *(unsigned int *)(param_1 + 0x20),uVar7);
        if (iVar3 == 0) {
          return 0xffffffff80004005;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
        iVar1 = *(int *)(iVar3 + 4);
        iVar2 = *(int *)(param_1 + 0x20);
        uVar7 = (__int64)iVar2 * (__int64)iVar8;
        if (*(int *)(iVar3 + 0x10) != 0x50343232) {
          uVar5 = (__int64)iVar1 * (__int64)*(int *)(iVar3 + 8);
          uVar6 = (int)uVar7 + (int)((uVar7 & 0xffffffff) << 2);
          uVar4 = (int)uVar5 + (int)((uVar5 & 0xffffffff) << 2);
          fn_82F338B8((double)(__int64)iVar1 / (double)(__int64)iVar2,lbl_82005710,
                            (double)(__int64)*(int *)(iVar3 + 8) / (double)(__int64)iVar8,
                            param_1 + 0xcc,param_2,uVar5 + param_2,
                            (__int64)((int)uVar4 >> 2) +
                            (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 3) != 0) + param_2,param_5,
                            uVar7 + param_5,
                            (__int64)((int)uVar6 >> 2) +
                            (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 3) != 0) + param_5);
          return 0;
        }
        uVar5 = (__int64)iVar1 * (__int64)*(int *)(iVar3 + 8);
        uVar6 = (int)uVar7 + (int)((uVar7 & 0xffffffff) << 1);
        uVar4 = (int)uVar5 + (int)((uVar5 & 0xffffffff) << 1);
        fn_82F338B8((double)(__int64)iVar1 / (double)(__int64)iVar2,lbl_82005710,
                          (double)(__int64)*(int *)(iVar3 + 8) / (double)(__int64)iVar8,
                          param_1 + 0xcc,param_2,uVar5 + param_2,
                          (__int64)((int)uVar4 >> 1) +
                          (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 1) != 0) + param_2,param_5,
                          uVar7 + param_5,
                          (__int64)((int)uVar6 >> 1) +
                          (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0) + param_5);
      }
      return 0;
    }
  }
  return 1;
}

