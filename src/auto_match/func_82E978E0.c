extern int fn_82E8E7A8();
extern int fn_82E8EF60();
extern int fn_82E93CE0();
extern int fn_82E93F80();
extern int fn_82E94128();
extern int fn_82E941F0();
extern int fn_82E94250();
extern int fn_82E94518();
extern int fn_82E976F8();
extern int fn_82F004D8();
extern unsigned int lbl_82005710;
extern float lbl_82005718;
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;


__int64 fn_82E978E0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  iVar4 = (int)param_2;
  if (iVar4 < 1) {
    return 0;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x7710);
  uVar7 = (unsigned __int64)uVar1;
  uVar5 = param_2;
  if (1 < *(__int64 *)(param_1 + 0x2e0)) {
    if (*(int *)(param_1 + 0x77e8) == 0) {
      iVar9 = *(int *)(param_1 + 0x560);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x77cc);
    }
    dVar11 = (double)(__int64)iVar9;
    iVar3 = fn_82E94518((double)(float)((double)(__int64)iVar4 / dVar11),param_1,param_2,uVar7);
    *(int *)(param_1 + 0x2a0) = iVar3;
    iVar9 = *(int *)(param_1 + 0x1efc);
    if (*(int *)(param_1 + 0x1efc) < iVar3) {
      iVar9 = iVar3;
    }
    *(int *)(param_1 + 0x2a0) = iVar9;
    if (0x14 < iVar9) {
      uVar5 = (unsigned __int64)
              (unsigned int)(int)((double)((*(float *)(param_1 + 0x786c) * lbl_82005718 +
                                   *(float *)(param_1 + 0x7868)) * lbl_82005718) * dVar11);
    }
  }
  if (((*(int *)(param_1 + 0x780c) == 0) && (*(int *)(param_1 + 0x77a4) == 0)) ||
     ((*(int *)(param_1 + 0x2a0) < 0x15 &&
      ((((*(int *)(param_1 + 0x7820) == 0 && (*(int *)(param_1 + 0x7824) == 0)) &&
        (*(int *)(param_1 + 0x77c0) <= *(int *)(param_1 + 0x77d8))) ||
       (0x11 < *(int *)(param_1 + 0x2a0))))))) {
    *(unsigned int *)(param_1 + 0x7798) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x7798) = 1;
  }
  if ((*(int *)(param_1 + 0x7798) != 0) && (*(int *)(param_1 + 0x780c) != 0)) {
    fn_82E93CE0(param_1,param_2,uVar5);
  }
  fn_82E976F8(param_1,param_2,uVar7);
  dVar11 = *(double *)(param_1 + 0x7718);
  if (*(int *)(param_1 + 0x7734) == 0) {
    if (dVar11 <= lbl_82005710) {
      dVar10 = dVar11 - lbl_82005730;
    }
    else {
      dVar10 = dVar11 + lbl_82005730;
    }
    if (*(int *)(param_1 + 0x2a0) < (int)dVar10) {
      if (dVar11 <= lbl_82005710) {
        iVar9 = (int)(dVar11 - lbl_82005730);
      }
      else {
        iVar9 = (int)(dVar11 + lbl_82005730);
      }
      goto LAB_82e97b60;
    }
  }
  else {
    if (dVar11 <= lbl_82005710) {
      dVar10 = dVar11 - lbl_82005730;
    }
    else {
      dVar10 = dVar11 + lbl_82005730;
    }
    if (*(int *)(param_1 + 0x2a0) + 2 < (int)dVar10) {
      if (dVar11 <= lbl_82005710) {
        iVar9 = (int)(dVar11 - lbl_82005730) + -2;
      }
      else {
        iVar9 = (int)(dVar11 + lbl_82005730) + -2;
      }
LAB_82e97b60:
      *(int *)(param_1 + 0x2a0) = iVar9;
    }
  }
  uVar6 = *(unsigned int *)(param_1 + 0x2a0);
  if ((int)*(unsigned int *)(param_1 + 0x2a0) <= (int)*(unsigned int *)(param_1 + 0x1efc)) {
    uVar6 = *(unsigned int *)(param_1 + 0x1efc);
  }
  *(unsigned int *)(param_1 + 0x2a0) = uVar6;
  if ((int)uVar1 <= (int)uVar6) {
    uVar6 = uVar1;
  }
  *(unsigned int *)(param_1 + 0x2a0) = uVar6;
  if ((*(int *)(param_1 + 0x7820) != 0) || (*(int *)(param_1 + 0x7824) != 0)) {
    fn_82F004D8(param_1,0,0);
  }
  fn_82E8E7A8(param_1,*(unsigned int *)(param_1 + 0xaf0),*(unsigned int *)(param_1 + 0x2a0),
                *(unsigned int *)(param_1 + 0x590),1,param_3,param_4,param_5);
  lVar8 = (((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3) +
           (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4) & 0x1fffffff) << 3;
  iVar9 = (int)lVar8;
  while ((iVar4 < iVar9 && (*(int *)(param_1 + 0x2a0) < (int)uVar1))) {
    fn_82E8EF60(param_1,1);
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2a0) + 2;
    if ((int)uVar1 <= (int)uVar5) {
      uVar5 = uVar7;
    }
    *(int *)(param_1 + 0x2a0) = (int)uVar5;
    fn_82E8E7A8(param_1,*(unsigned int *)(param_1 + 0xaf0),uVar5,*(unsigned int *)(param_1 + 0x590),1,
                  param_3,param_4,param_5);
    lVar8 = (((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3) +
             (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4) & 0x1fffffff) << 3;
    iVar9 = (int)lVar8;
  }
  iVar9 = *(int *)(param_1 + 0x2a0);
  iVar3 = (int)lVar8;
  *(int *)(param_1 + 0x77b0) = iVar9;
  if (iVar4 < iVar3) {
    *(unsigned int *)(param_1 + 0x779c) = 1;
  }
  else {
    *(unsigned int *)(param_1 + 0x779c) = 0;
  }
  if ((*(int *)(param_1 + 0x780c) != 0) || (*(int *)(param_1 + 0x77a4) != 0)) {
    if ((((*(int *)(param_1 + 0x7820) == 0) &&
         ((*(int *)(param_1 + 0x7824) == 0 &&
          (*(int *)(param_1 + 0x77c0) <= *(int *)(param_1 + 0x77d8))))) ||
        (((int)((iVar4 >> 1) + (unsigned int)(iVar4 < 0 && (param_2 & 1) != 0)) <= iVar3 && (0x11 < iVar9)))
        ) && (iVar9 < 0x15)) {
      *(unsigned int *)(param_1 + 0x7798) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0x7798) = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x77e8);
  if (iVar4 == 0) {
    fVar2 = lbl_821AAD20;
    if ((0 < iVar9) && (iVar9 < 0x20)) {
      fVar2 = (*(float *)(param_1 + 0x786c) / (float)(__int64)iVar9 + *(float *)(param_1 + 0x7868))
              / (float)(__int64)iVar9;
    }
    fVar2 = (float)(__int64)*(int *)(param_1 + 0x560) * fVar2;
  }
  else {
    fVar2 = lbl_821AAD20;
    if ((0 < iVar9) && (iVar9 < 0x20)) {
      fVar2 = (*(float *)(param_1 + 0x786c) / (float)(__int64)iVar9 + *(float *)(param_1 + 0x7868))
              / (float)(__int64)iVar9;
    }
    fVar2 = (float)(__int64)*(int *)(param_1 + 0x77cc) * fVar2;
  }
  if (((int)fVar2 < 1) || (iVar3 < 1)) goto LAB_82e97e50;
  if (*(int *)(param_1 + 0x7814) != 0) {
    if (iVar4 != 0) {
      fn_82E93F80(param_1,lVar8);
      goto LAB_82e97e50;
    }
    if (*(int *)(param_1 + 0x7814) != 0) {
      fn_82E941F0(param_1,lVar8);
      goto LAB_82e97e50;
    }
  }
  if (iVar4 != 0) {
    fn_82E94128(param_1,lVar8);
  }
LAB_82e97e50:
  fn_82E94250((double)(float)((double)(__int64)iVar3 /
                               (double)(__int64)*(int *)(param_1 + 0x560)),param_1);
  *(int *)(param_1 + 0x77ac) = iVar3;
  return lVar8;
}

