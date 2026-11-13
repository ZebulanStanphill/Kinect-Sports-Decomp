#define true 1
extern int fn_82A6C8E8();
extern int fn_82A6CB88();
extern int fn_82A6CF00();
extern int fn_82A6D200();
extern int fn_82C16A38();


unsigned __int64 fn_82A529D0(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned char uVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned short uVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  short sVar10;
  int iVar9;
  
  iVar9 = 0;
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    return 0xffffffff80070057;
  }
  if (*(int *)(iVar1 + 0x3c) < 3) {
    iVar9 = 4;
  }
  if (param_1[8] == 1) goto LAB_82a52c9c;
  param_1[8] = 0;
  *(unsigned short *)(param_1 + 4) = 1;
  if (param_1[0xb0] != 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0xd4) == 0) && (*(int *)(iVar1 + 0x3c) < 3)) {
    param_1[3] = 0;
    if (*(int *)(iVar1 + 4) < 0) {
      *(unsigned int *)(iVar1 + 4) = 0;
      param_1[3] = 1;
    }
    if (param_1[0x3b] != *(int *)(iVar1 + 4)) {
      fn_82A6CB88(param_1 + 0x38);
    }
    if (param_1[0x3b] == *(int *)(iVar1 + 4)) {
      fn_82A6C8E8(param_1 + 0x38);
      return 0xffffffff80040004;
    }
    *(int *)(iVar1 + 4) = param_1[0x3b];
  }
  else {
    while( true ) {
      if (param_1[0x3b] == 0) {
        do {
          if (param_1[0x3c] == 0) {
            fn_82A6C8E8(param_1 + 0x38);
            uVar4 = fn_82C16A38(param_1);
            uVar3 = fn_82A6CF00(param_1 + 0x38,3,uVar4);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
          }
          else {
            iVar2 = param_1[0x3c];
            param_1[0x3c] = 0;
            param_1[0x3b] = iVar2;
          }
        } while (param_1[0x3b] == 0);
      }
      iVar2 = param_1[0x3b];
      if (*(int *)(iVar1 + 0x3c) < 3) break;
      uVar7 = (unsigned short)((unsigned int)iVar2 >> 0x1b) & 1;
      *(unsigned short *)((int)param_1 + 0x12) = uVar7;
      uVar8 = (unsigned int)(iVar2 << 6) >> (0x20U - *(int *)(iVar1 + 8) & 0x3f);
      param_1[0x10] = uVar8;
      param_1[0x11] = uVar8;
      uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 8) + 6 + (unsigned __int64)uVar8;
      if (uVar7 == 1) {
        *(unsigned short *)(param_1 + 4) = 1;
        if (*(int *)(iVar1 + 0xc) <= (int)uVar6) {
          return 0xffffffff80040002;
        }
      }
      else {
        *(unsigned short *)(param_1 + 4) =
             (short)((~(*(unsigned int *)(iVar1 + 0xc) ^ uVar6) & 0xffffffff) >> 0x1f) +
             (unsigned short)(*(unsigned int *)(iVar1 + 0xc) <= uVar6) & 1;
      }
      iVar2 = param_1[3];
      if (iVar2 == 0) {
        if (*(short *)(param_1 + 4) == 0) {
          param_1[0x3b] = 0;
        }
        else {
LAB_82a52be8:
          if ((int)uVar6 < *(int *)(iVar1 + 0xc)) goto LAB_82a52c34;
          if (iVar2 == 1) {
            param_1[0x45] = -2;
          }
          param_1[0x3b] = 0;
        }
      }
      else {
        if ((iVar2 != 1) || (uVar7 != 0)) goto LAB_82a52be8;
        param_1[0x45] = -2;
        param_1[0x3b] = 0;
        fn_82A6C8E8(param_1 + 0x38);
        param_1[0x47] = 1;
      }
    }
    *(short *)(param_1 + 4) = (short)((unsigned int)(iVar2 << 4) >> (0x20U - iVar9 & 0x3f));
    uVar8 = (unsigned int)(iVar2 << iVar9 + 4) >> (0x1dU - *(int *)(iVar1 + 8) & 0x3f);
    param_1[0x10] = uVar8;
    param_1[0x11] = uVar8;
LAB_82a52c34:
    if (uVar8 == 0) {
      fn_82A6CB88(param_1 + 0x38);
    }
    param_1[0x3b] = 0;
  }
  if (param_1[0x27] == 1) {
    if (*(short *)((int)param_1 + 0x9a) == 1) {
      *(__int64 *)(param_1 + 0x2e) =
           ((__int64)param_1[0x54] * *(__int64 *)(param_1 + 0x2a)) / 10000000;
LAB_82a52c84:
      *(unsigned short *)((int)param_1 + 0x9a) = 0;
      param_1[0x27] = 0;
    }
    else {
      if (*(short *)((int)param_1 + 0x9a) != 2) goto LAB_82a52c84;
      lVar5 = *(__int64 *)(param_1 + 0x2a);
      *(unsigned short *)((int)param_1 + 0x9a) = 1;
      *(unsigned __int64 *)(param_1 + 0x2a) = *(unsigned __int64 *)(param_1 + 0x2c);
      *(__int64 *)(param_1 + 0x2e) = (param_1[0x54] * lVar5) / 10000000;
    }
    param_1[0x28] = 1;
  }
  if (param_1[3] == 0) {
    return 0;
  }
LAB_82a52c9c:
  param_1[8] = 1;
  if (0x18 < param_1[0x10]) {
    do {
      uVar3 = fn_82A6D200(param_1 + 0x38,0x18);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      iVar9 = param_1[0x10];
      param_1[0x10] = iVar9 + -0x18;
    } while (0x18 < iVar9 + -0x18);
  }
  uVar3 = fn_82A6D200(param_1 + 0x38,param_1[0x10]);
  if (-1 < (int)uVar3) {
    if (*(short *)(iVar1 + 0x22) != 0) {
      iVar9 = 0;
      do {
        iVar2 = iVar9 * 0x6f0;
        sVar10 = (short)iVar9 + 1;
        iVar9 = (int)sVar10;
        *(unsigned short *)(iVar2 + *(int *)(iVar1 + 0x140) + 0x70) = 0x7fff;
      } while ((int)sVar10 < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x22));
    }
    *(unsigned int *)(iVar1 + 0x48) = 3;
    param_1[8] = 0;
    return 0;
  }
  return uVar3;
}

