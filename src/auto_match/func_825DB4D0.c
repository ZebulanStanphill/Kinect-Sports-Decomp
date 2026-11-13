extern int fn_8261DBA8();
extern unsigned int lbl_8218E2E8;
extern float lbl_82195590;
extern float lbl_821955A0;


__int64 fn_825DB4D0(double param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  double dVar8;
  
  lVar6 = 0;
  dVar8 = (double)fn_8261DBA8();
  lVar4 = 1;
  iVar3 = 0;
  lVar7 = 3;
  iVar5 = 4;
  do {
    fVar1 = (float)((double)(float)((double)*(float *)((int)&lbl_8218E2E8 + iVar5) + param_1) -
                   dVar8) * lbl_82195590;
    fVar2 = (float)((double)(float)((double)*(float *)((int)&lbl_8218E2E8 + iVar3) + param_1) -
                   dVar8) * lbl_82195590;
    if (ABS((float)(((double)fVar1 - (double)(__int64)fVar1) * lbl_821955A0)) <
        ABS((float)(((double)fVar2 - (double)(__int64)fVar2) * lbl_821955A0))) {
      lVar6 = lVar4;
      iVar3 = iVar5;
    }
    lVar4 = lVar4 + 1;
    iVar5 = iVar5 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return lVar6;
}

