extern int fn_826BCE08();
extern int fn_82F64268();
extern int fn_82F6A3F0();
extern int fn_82F6AEA8();


unsigned __int64 fn_826951F0(double *param_1,char *param_2)

{
  char cVar1;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned __int64 uVar2;
  char *pcVar6;
  int iVar7;
  double dVar8;
  char * apcStack_40;
  
  apcStack_40 = (char *)0x0;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar6 = pcVar5 + (-1 - (int)param_2);
  if (*param_2 == '0') {
    cVar1 = param_2[1];
    iVar7 = (int)cVar1;
    if (('@' < cVar1) && (cVar1 < '[')) {
      iVar7 = cVar1 + 0x20;
    }
    if (iVar7 != 0x78) goto LAB_82695280;
    iVar3 = fn_82F6A3F0(param_2,&apcStack_40,0);
LAB_82695278:
    dVar8 = (double)(__int64)iVar3;
  }
  else {
LAB_82695280:
    pcVar4 = (char *)fn_82F64268(param_2,0xffffffff820060e0);
    if (pcVar4 != pcVar6) {
      dVar8 = (double)fn_826BCE08(param_2,&apcStack_40);
      *param_1 = dVar8;
      goto LAB_82695348;
    }
    iVar7 = 1;
    if (*param_2 == '-') {
      iVar3 = -1;
LAB_826952d4:
      iVar7 = iVar3;
      pcVar6 = pcVar5 + (-2 - (int)param_2);
      pcVar4 = param_2 + 1;
    }
    else {
      iVar3 = 1;
      pcVar4 = param_2;
      if (*param_2 == '+') goto LAB_826952d4;
    }
    if ((*pcVar4 == '0') &&
       (pcVar5 = (char *)fn_82F6AEA8(pcVar4,0xffffffff820060d4), pcVar5 == pcVar6)) {
      iVar3 = fn_82F6A3F0(pcVar4,&apcStack_40,8);
      iVar3 = iVar3 * iVar7;
      goto LAB_82695278;
    }
    dVar8 = (double)fn_826BCE08(pcVar4,&apcStack_40);
    dVar8 = dVar8 * (double)(__int64)iVar7;
  }
  *param_1 = dVar8;
LAB_82695348:
  if ((apcStack_40 == param_2) || (uVar2 = 1, *apcStack_40 != '\0')) {
    uVar2 = 0;
  }
  return uVar2;
}

