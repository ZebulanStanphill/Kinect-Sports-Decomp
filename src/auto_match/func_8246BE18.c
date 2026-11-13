typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82270AC0();
extern int fn_824651F0();
extern int fn_82465328();
extern int fn_82465390();
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831C6B9C;


void fn_8246BE18(double param_1,int param_2)

{
  __int64 lVar1;
  bool bVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(int *)(param_2 + 4) == 1) {
    if ((((*(int *)(param_2 + 0x3c) == 0) || (*(int *)(param_2 + 0x40) == 0)) ||
        (iVar3 = fn_82465328(*(unsigned int *)(param_2 + 8)), iVar3 != 0)) &&
       (*(int *)(param_2 + 0x4c) == 0)) {
      uVar5 = 0;
      pfVar6 = (float *)(param_2 + 0x34);
      dVar8 = (double)lbl_821CA460;
      dVar9 = lbl_82195598;
      do {
        dVar7 = (double)(float)((double)*pfVar6 + param_1);
        *pfVar6 = (float)((double)*pfVar6 + param_1);
        if (pfVar6[2] == 0.0) {
          if ((double)(__int64)
                      ((double)(float)(dVar7 * (double)(float)(dVar8 / (double)lbl_831C6B9C)) -
                      dVar9) !=
              (double)(__int64)
                      ((double)(float)((double)(float)(dVar7 - param_1) *
                                      (double)(float)(dVar8 / (double)lbl_831C6B9C)) - dVar9)) {
            uVar4 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c)) / 0x28 - 1;
            pfVar6[-2] = (float)(((int)pfVar6[-2] + 1U) - (((int)pfVar6[-2] + 1U) / uVar4) * uVar4);
          }
          lVar1 = -uVar5;
          if (pfVar6[-2] == *(float *)((int)((lVar1 + 0xcU & 0xffffffff) << 2) + param_2)) {
            bVar2 = true;
            if (*(int *)((int)((lVar1 + 0x10U & 0xffffffff) << 2) + param_2) == 0)
            goto LAB_8246bf84;
          }
          else {
LAB_8246bf84:
            bVar2 = false;
          }
          if ((((double)pfVar6[4] < dVar7) &&
              (iVar3 = fn_82465328(*(unsigned int *)(param_2 + 8)), iVar3 == 0)) && (!bVar2)) {
            pfVar6[2] = 1.4013e-45;
            fn_824651F0(*(unsigned int *)(param_2 + 8),
                              (unsigned __int64)(unsigned int)pfVar6[-2] * 0x28 +
                              (unsigned __int64)*(unsigned int *)(param_2 + 0x1c) + 0x20);
            fn_82465390(*(unsigned int *)(param_2 + 8),param_2 + 0x60);
            fn_82270AC0(param_2 + 100);
            if (*(int *)((int)((lVar1 + 0x10U & 0xffffffff) << 2) + param_2) != 0) {
              fn_82465390(*(unsigned int *)(param_2 + 8),param_2 + 0x5c);
            }
          }
        }
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 1;
      } while ((uVar5 & 0xffffffff) < 2);
    }
    else if (*(int *)(param_2 + 4) != 2) {
      if (*(int *)(param_2 + 4) == 1) {
        fn_82465390(*(unsigned int *)(param_2 + 8),param_2 + 0x5c);
      }
      *(unsigned int *)(param_2 + 4) = 2;
    }
  }
  return;
}

