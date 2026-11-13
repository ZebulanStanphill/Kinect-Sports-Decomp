typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_829D3900();
extern int fn_829DDD20();


void fn_829DEAE0(double param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,__int64 param_6,__int64 param_7)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int auStack_80 [2];
  unsigned __int64 auStack_78;
  
  auStack_78 = (unsigned __int64)param_1;
  uVar7 = auStack_78;
  if ((__int64)auStack_78 < 0) {
    uVar7 = 0;
  }
  uVar2 = *(unsigned int *)(param_2[2] + 4);
  lVar5 = (__int64)*(int *)(param_2[2] + 0x14) * (__int64)(int)param_3 +
          (unsigned __int64)(unsigned int)param_2[3];
  uVar3 = (unsigned __int64)uVar2 - 1 & 0xffffffff;
  lVar9 = (uVar7 & 0x7fffffff) * 2 + lVar5;
  uVar6 = uVar7;
  uVar8 = uVar7 + param_6;
  if ((__int64)uVar3 <= (__int64)(uVar7 + param_6)) {
    uVar8 = uVar3;
  }
  for (; (__int64)uVar6 <= (__int64)uVar8; uVar6 = uVar6 + 1) {
    uVar1 = *(unsigned short *)lVar9;
    if (uVar1 < *(unsigned short *)(param_2 + 5)) {
      if ((int)((unsigned int)*(unsigned short *)(param_2 + 5) - (unsigned int)uVar1) < 0x2e) {
        *(unsigned short *)(param_2 + 5) = uVar1;
        goto LAB_829deb8c;
      }
LAB_829deb80:
      bVar4 = false;
    }
    else {
LAB_829deb8c:
      if (*(unsigned short *)((int)param_2 + 0x16) < uVar1) {
        if (0x2d < (int)((unsigned int)uVar1 - (unsigned int)*(unsigned short *)((int)param_2 + 0x16))) goto LAB_829deb80;
        *(unsigned short *)((int)param_2 + 0x16) = uVar1;
      }
      bVar4 = true;
    }
    if (bVar4) {
      fn_829D3900(*(unsigned int *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(unsigned short *)lVar9,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((unsigned int)((unsigned __int64)(auStack_78) >> 32)),auStack_80[0]);
    }
    lVar9 = lVar9 + 2;
  }
  uVar8 = param_5;
  if ((__int64)param_5 <= (__int64)uVar7) {
    uVar8 = uVar7 + param_7;
  }
  if ((__int64)uVar3 <= (__int64)uVar8) {
    uVar8 = uVar3;
  }
  if ((__int64)uVar6 <= (__int64)uVar8) {
    lVar9 = lVar9 + -2;
    do {
      uVar1 = *(unsigned short *)((int)lVar9 + 2);
      if (uVar1 < *(unsigned short *)(param_2 + 5)) {
        if ((int)((unsigned int)*(unsigned short *)(param_2 + 5) - (unsigned int)uVar1) < 0x2e) {
          *(unsigned short *)(param_2 + 5) = uVar1;
          goto LAB_829dec4c;
        }
LAB_829dec40:
        bVar4 = false;
      }
      else {
LAB_829dec4c:
        if (*(unsigned short *)((int)param_2 + 0x16) < uVar1) {
          if (0x2d < (int)((unsigned int)uVar1 - (unsigned int)*(unsigned short *)((int)param_2 + 0x16))) goto LAB_829dec40;
          *(unsigned short *)((int)param_2 + 0x16) = uVar1;
        }
        bVar4 = true;
      }
      if (!bVar4) break;
      lVar9 = lVar9 + 2;
      fn_829D3900(*(unsigned int *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(unsigned short *)lVar9,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((unsigned int)((unsigned __int64)(auStack_78) >> 32)),auStack_80[0]);
      uVar6 = uVar6 + 1;
    } while ((__int64)uVar6 <= (__int64)uVar8);
  }
  uVar6 = uVar7 - 1;
  if ((__int64)(unsigned __int64)uVar2 <= (__int64)(uVar7 - 1)) {
    uVar6 = uVar3;
  }
  lVar9 = (uVar7 - param_6) + -1;
  lVar5 = (uVar6 & 0x7fffffff) * 2 + lVar5;
  if (lVar9 < 1) {
    lVar9 = 0;
  }
  for (; lVar9 <= (__int64)uVar6; uVar6 = uVar6 - 1) {
    uVar1 = *(unsigned short *)lVar5;
    if (uVar1 < *(unsigned short *)(param_2 + 5)) {
      if ((int)((unsigned int)*(unsigned short *)(param_2 + 5) - (unsigned int)uVar1) < 0x2e) {
        *(unsigned short *)(param_2 + 5) = uVar1;
        goto LAB_829ded18;
      }
LAB_829ded0c:
      bVar4 = false;
    }
    else {
LAB_829ded18:
      if (*(unsigned short *)((int)param_2 + 0x16) < uVar1) {
        if (0x2d < (int)((unsigned int)uVar1 - (unsigned int)*(unsigned short *)((int)param_2 + 0x16))) goto LAB_829ded0c;
        *(unsigned short *)((int)param_2 + 0x16) = uVar1;
      }
      bVar4 = true;
    }
    if (bVar4) {
      fn_829D3900(*(unsigned int *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(unsigned short *)lVar5,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((unsigned int)((unsigned __int64)(auStack_78) >> 32)),auStack_80[0]);
    }
    lVar5 = lVar5 + -2;
  }
  if ((__int64)uVar6 <= (__int64)param_5) {
    param_5 = uVar6 + param_7;
  }
  if ((__int64)param_5 < 1) {
    param_5 = 0;
  }
  if ((__int64)param_5 <= (__int64)uVar6) {
    lVar5 = lVar5 + 2;
    do {
      uVar1 = *(unsigned short *)((int)lVar5 + -2);
      if (uVar1 < *(unsigned short *)(param_2 + 5)) {
        if ((int)((unsigned int)*(unsigned short *)(param_2 + 5) - (unsigned int)uVar1) < 0x2e) {
          *(unsigned short *)(param_2 + 5) = uVar1;
          goto LAB_829dedd8;
        }
LAB_829dedcc:
        bVar4 = false;
      }
      else {
LAB_829dedd8:
        if (*(unsigned short *)((int)param_2 + 0x16) < uVar1) {
          if (0x2d < (int)((unsigned int)uVar1 - (unsigned int)*(unsigned short *)((int)param_2 + 0x16))) goto LAB_829dedcc;
          *(unsigned short *)((int)param_2 + 0x16) = uVar1;
        }
        bVar4 = true;
      }
      if (!bVar4) {
        return;
      }
      lVar5 = lVar5 + -2;
      fn_829D3900(*(unsigned int *)(*param_2 + 8),param_2[1],(int)uVar6,param_3,*(unsigned short *)lVar5,
                   &auStack_78,auStack_80);
      fn_829DDD20(*param_2,((unsigned int)((unsigned __int64)(auStack_78) >> 32)),auStack_80[0]);
      uVar6 = uVar6 - 1;
    } while ((__int64)param_5 <= (__int64)uVar6);
  }
  return;
}

