extern unsigned int *auStack_60;
extern int fn_8239DD40();
extern int fn_82536690();
extern int strncmp();


unsigned int * fn_8255FD70(unsigned int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_60;
  
  uVar4 = (unsigned __int64)(unsigned int)param_2[1];
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = (*param_2 * 0x5c) / 0x5c;
  uVar8 = (__int64)iVar2;
  while (0 < iVar2) {
    uVar7 = (__int64)((int)uVar8 >> 1) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 1) != 0);
    lVar5 = uVar7 * 0x5c + uVar4;
    iVar2 = strncmp(lVar5,param_3,pcVar3 + (-1 - (int)param_3));
    if (iVar2 < 0) {
      uVar4 = lVar5 + 0x5c;
      uVar7 = (uVar8 - uVar7) - 1;
    }
    uVar8 = uVar7;
    iVar2 = (int)uVar7;
  }
  uVar8 = (unsigned __int64)(unsigned int)param_2[1];
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = (*param_2 * 0x5c) / 0x5c;
  uVar7 = (__int64)iVar2;
  while (0 < iVar2) {
    uVar6 = (__int64)((int)uVar7 >> 1) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    lVar5 = uVar6 * 0x5c + uVar8;
    iVar2 = strncmp(param_3,lVar5,pcVar3 + (-1 - (int)param_3));
    if (-1 < iVar2) {
      uVar8 = lVar5 + 0x5c;
      uVar6 = (uVar7 - uVar6) - 1;
    }
    uVar7 = uVar6;
    iVar2 = (int)uVar6;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_8239DD40(param_1,(int)((int)uVar8 - (unsigned int)uVar4) / 0x5c);
  auStack_60 = (unsigned int)uVar4;
  if ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff)) {
    do {
      fn_82536690(param_1,&auStack_60);
      auStack_60 = auStack_60 + 0x5c;
    } while ((unsigned __int64)auStack_60 < (uVar8 & 0xffffffff));
  }
  return param_1;
}

