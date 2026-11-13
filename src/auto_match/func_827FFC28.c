extern int fn_827F9F70();
extern int fn_827F9F98();
extern int fn_827F9FA8();
extern int fn_827FF940();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_827FFC28(void)

{
  char cVar1;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  short sVar5;
  unsigned __int64 uVar6;
  float *pfVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  
  piVar4 = (int *)fn_82F6A540();
  dVar14 = extraout_f1;
  dVar8 = (double)fn_827F9F98();
  uVar3 = fn_827F9FA8(piVar4);
  dVar9 = (double)fn_827F9F70(piVar4);
  dVar12 = (double)(__int64)(int)(uVar3 & 0xffff);
  uStack_70 = (unsigned __int64)(dVar12 * dVar9);
  uVar6 = uStack_70 & 0xffff;
  dVar9 = (double)fn_827FF940(piVar4,uVar6,&uStack_70);
  cVar1 = *(char *)(*(int *)(*piVar4 + 0x30) + 0x1c);
  pfVar7 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
  if (cVar1 != '\0') {
    pfVar7 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 1;
  }
  dVar10 = (double)*pfVar7;
  dVar13 = (double)lbl_821AAD20;
  uVar2 = uVar6 & 0xffff;
  if (dVar14 < (double)(float)((double)(float)piVar4[0x33] - dVar10)) {
    do {
      uVar2 = uVar2 + 1 & 0xffff;
      if ((uVar3 & 0xffff) <= uVar2) goto LAB_827ffd2c;
      dVar9 = (double)fn_827FF940(piVar4,uVar2,&uStack_70);
      pfVar7 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
      if (cVar1 != '\0') {
        pfVar7 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 1;
      }
      dVar14 = (double)(float)(dVar14 - (double)(float)((double)*pfVar7 - dVar10));
      dVar10 = (double)*pfVar7;
    } while (dVar13 < dVar14);
    uStack_70 = (unsigned __int64)((int)uVar2 - (int)(uVar6 & 0xffff));
    dVar8 = (double)(float)((double)(__int64)uStack_70 / dVar12) * dVar8;
  }
  else {
LAB_827ffd2c:
    dVar11 = (double)(float)piVar4[0x33];
    uVar3 = 0;
    dVar14 = (double)(float)(dVar14 - (double)(float)(dVar11 - dVar10));
    uStack_68 = (__int64)(dVar14 / dVar11) & 0xffffffff;
    dVar10 = -(double)(float)((double)uStack_68 * dVar11 - dVar14);
    dVar14 = (double)(float)((double)(float)((double)lbl_82002AE0 - dVar9) + (double)uStack_68);
    dVar9 = dVar13;
    sVar5 = fn_827F9FA8(piVar4);
    if (sVar5 != 0) {
      do {
        fn_827FF940(piVar4,uVar3,&uStack_70);
        pfVar7 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
        if (*(char *)(*(int *)(*piVar4 + 0x30) + 0x1c) != '\0') {
          pfVar7 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 1;
        }
        dVar11 = (double)*pfVar7;
        dVar10 = (double)(float)(dVar10 - (double)(float)(dVar11 - dVar13));
        if (dVar10 <= dVar9) {
          dVar14 = (double)(float)((double)(float)((double)uVar3 / dVar12) + dVar14);
          uStack_68 = uVar3;
          break;
        }
        uVar3 = uVar3 + 1 & 0xffff;
        uVar6 = fn_827F9FA8(piVar4);
        dVar13 = dVar11;
      } while (uVar3 < (uVar6 & 0xffff));
    }
    dVar8 = dVar8 * dVar14;
  }
  fn_82F6A58C((double)(float)dVar8);
  return;
}

