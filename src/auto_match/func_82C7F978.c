extern int fn_82CC8DE0();
extern int fn_82CCD608();
extern unsigned int lbl_82005710;


unsigned __int64
fn_82C7F978(int *param_1,unsigned __int64 param_2,int param_3,int *param_4,unsigned __int64 param_5,int param_6,
             int *param_7)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  
  if (((param_4 != (int *)0x0) && (param_7 != (int *)0x0)) && (param_1 != (int *)0x0)) {
    if (param_1[0x4a] == 0) {
      uVar4 = (unsigned __int64)(unsigned int)param_1[8];
    }
    else {
      uVar7 = param_1[8];
      uVar4 = (__int64)((int)uVar7 >> 1) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    }
    iVar2 = *param_1;
    iVar1 = *(int *)(iVar2 + 0x10);
    iVar5 = (int)uVar4;
    if (((iVar1 == 0x56555949) || (iVar1 == 0x30323449)) ||
       ((iVar1 == 0x31313450 || (iVar1 == 0x32315659)))) {
      uVar7 = *(int *)(iVar2 + 8) * *(int *)(iVar2 + 4) * 3;
      *param_4 = ((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0);
      uVar7 = param_1[7] * iVar5 * 3;
      *param_7 = ((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    }
    else {
      uVar7 = (unsigned int)*(unsigned short *)(iVar2 + 0xe) * *(int *)(iVar2 + 4);
      uVar7 = ((int)uVar7 >> 3) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 7) != 0) + 3;
      *param_4 = (((int)uVar7 >> 2) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 3) != 0)) *
                 *(int *)(iVar2 + 8) * 4;
      uVar7 = (unsigned int)*(unsigned short *)(*param_1 + 0xe) * param_1[7];
      uVar7 = ((int)uVar7 >> 3) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 7) != 0) + 3;
      *param_7 = (((int)uVar7 >> 2) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 3) != 0)) * iVar5 * 4;
    }
    if ((param_6 < *param_7) || (param_3 < *param_4)) {
      *param_4 = 0;
      *param_7 = 0;
    }
    else if (((param_2 & 0xffffffff) != 0) && ((param_5 & 0xffffffff) != 0)) {
      if (param_1[0x49] != 0) {
        iVar2 = *param_1;
        if (*(int *)(iVar2 + 0x10) == 0x32323450) {
          uVar6 = (__int64)param_1[7] * (__int64)iVar5;
          uVar4 = (__int64)*(int *)(iVar2 + 4) * (__int64)*(int *)(iVar2 + 8);
          uVar7 = (int)uVar6 + (int)((uVar6 & 0xffffffff) << 1);
          uVar3 = (int)uVar4 + (int)((uVar4 & 0xffffffff) << 1);
          fn_82CCD608((double)(__int64)*(int *)(iVar2 + 4) / (double)(__int64)param_1[7],
                            lbl_82005710,
                            (double)(__int64)*(int *)(iVar2 + 8) / (double)(__int64)iVar5,
                            param_1 + 0x27,param_2,uVar4 + param_2,
                            (__int64)((int)uVar3 >> 1) +
                            (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0) + param_2,param_5,
                            uVar6 + param_5,
                            (__int64)((int)uVar7 >> 1) +
                            (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 1) != 0) + param_5);
          return 0;
        }
        uVar4 = (__int64)param_1[7] * (__int64)iVar5;
        uVar6 = (__int64)*(int *)(iVar2 + 4) * (__int64)*(int *)(iVar2 + 8);
        uVar7 = (int)uVar4 + (int)((uVar4 & 0xffffffff) << 2);
        uVar3 = (int)uVar6 + (int)((uVar6 & 0xffffffff) << 2);
        fn_82CCD608((double)(__int64)*(int *)(iVar2 + 4) / (double)(__int64)param_1[7],
                          lbl_82005710,
                          (double)(__int64)*(int *)(iVar2 + 8) / (double)(__int64)iVar5,
                          param_1 + 0x27,param_2,uVar6 + param_2,
                          (__int64)((int)uVar3 >> 2) +
                          (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 3) != 0) + param_2,param_5,
                          uVar4 + param_5,
                          (__int64)((int)uVar7 >> 2) +
                          (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 3) != 0) + param_5);
        return 0;
      }
      iVar2 = fn_82CC8DE0(param_1 + 0xd,*param_1,param_2,param_5,param_1[7],uVar4);
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

