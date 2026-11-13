extern int fn_82F655D8();
extern int fn_82F6B2A8();
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82017EF8;


void fn_82E93CE0(int param_1,int param_2,int param_3)

{
  double dVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = lbl_82017EF8;
  if ((*(int *)(param_1 + 0x2a0) < 0x12) &&
     (*(int *)(param_1 + 0x77d8) == *(int *)(param_1 + 0x77c0))) {
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7820) - 2;
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7824) - 2;
    uVar6 = (unsigned int)lVar5;
    uVar4 = (unsigned int)lVar3;
    uVar6 = (-1 - ((int)uVar6 >> 0x1f)) + (unsigned int)(lVar5 == 0) & uVar6;
    uVar4 = (-1 - ((int)uVar4 >> 0x1f)) + (unsigned int)(lVar3 == 0) & uVar4;
  }
  else if ((*(int *)(param_1 + 0x781c) == 0) ||
          ((*(int *)(param_1 + 0x77a4) != 0 &&
           (*(int *)(param_1 + 0x77d8) < *(int *)(param_1 + 0x77c0))))) {
    uVar6 = 8;
    uVar4 = 8;
  }
  else {
    if ((*(int *)(param_1 + 0x77e8) == 0) || (*(int *)(param_1 + 0x77f0) == 0)) {
      dVar7 = (double)(__int64)(param_2 - param_3) /
              ((double)(__int64)*(int *)(param_1 + 0x560) * *(double *)(param_1 + 0x7850)) +
              *(double *)(param_1 + 0x7830);
    }
    else {
      uVar6 = *(unsigned int *)(param_1 + 0x77d8);
      uVar4 = *(unsigned int *)(param_1 + 0x77cc);
      uVar2 = (unsigned __int64)uVar4 &
              ~((((unsigned __int64)uVar6 & 0x7fffffff) << 1 | (unsigned __int64)(uVar6 >> 0x1f)) - 1);
      trapWord(6,(unsigned __int64)uVar4,0);
      trapWord(5,uVar2,0xffff);
      dVar7 = (double)fn_82F655D8((double)(__int64)((int)uVar6 / (int)uVar4),
                                        *(unsigned __int64 *)(param_1 + 0x77e0),param_1,uVar2);
      dVar7 = -(dVar7 * (double)(__int64)param_3 - (double)(__int64)param_2) /
              (*(double *)(param_1 + 0x7850) * (double)(__int64)*(int *)(param_1 + 0x77d8)) +
              *(double *)(param_1 + 0x7830);
    }
    dVar1 = lbl_82005758;
    if ((lbl_82005758 <= dVar7) || (dVar1 = lbl_82005730, dVar7 < lbl_82005730)) {
      dVar7 = dVar1;
    }
    dVar7 = (double)fn_82F6B2A8(dVar8 / dVar7);
    uVar6 = (int)dVar7 - 8;
    if ((int)uVar6 < 8) {
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 8;
    }
    uVar4 = uVar6;
    if (((*(int *)(param_1 + 0x779c) != 0) && (0 < (int)uVar6)) && ((int)uVar6 < 7)) {
      uVar4 = uVar6 + 2;
    }
  }
  if ((uVar6 == *(unsigned int *)(param_1 + 0x7820)) && (uVar4 == *(unsigned int *)(param_1 + 0x7824))) {
    *(unsigned int *)(param_1 + 0x7814) = 0;
  }
  else {
    *(unsigned __int64 *)(param_1 + 0x7838) = *(unsigned __int64 *)(param_1 + 0x7830);
    *(unsigned int *)(param_1 + 0x7814) = 1;
    *(unsigned int *)(param_1 + 0x7818) = 1;
    *(unsigned int *)(param_1 + 0x784c) = *(unsigned int *)(param_1 + 0x7844);
    *(unsigned int *)(param_1 + 0x7848) = *(unsigned int *)(param_1 + 0x7840);
    *(unsigned int *)(param_1 + 0x782c) = *(unsigned int *)(param_1 + 0x7824);
    *(unsigned int *)(param_1 + 0x7828) = *(unsigned int *)(param_1 + 0x7820);
    *(unsigned int *)(param_1 + 0x7840) = uVar6;
    *(unsigned int *)(param_1 + 0x7844) = uVar4;
    *(unsigned int *)(param_1 + 0x7824) = uVar4;
    *(unsigned int *)(param_1 + 0x7820) = uVar6;
    *(double *)(param_1 + 0x7830) = dVar8 / ((double)(__int64)(int)uVar6 + dVar8);
  }
  return;
}

