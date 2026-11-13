extern int fn_8267B648();
extern int fn_8267BC00();
extern int fn_826912E0();
extern int fn_826913D8();
extern int fn_82692630();
extern int memcpy();


int fn_8267C0B8(__int64 param_1,char *param_2,unsigned int param_3,unsigned int *param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  int iVar9;
  unsigned __int64 uVar8;
  int iVar10;
  char *pcVar11;
  unsigned __int64 uVar12;
  
  RtlEnterCriticalSection(param_1 + 0x2c4);
  RtlLeaveCriticalSection(param_1 + 0x2c4);
  pcVar11 = param_2;
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar6 = (unsigned int)(pcVar11 + (0x2a7 - (int)param_2)) & 0xfffffff0;
  lVar7 = fn_826912E0(param_1 + 0x118,uVar6);
  if (lVar7 != 0) {
    uVar12 = 0;
    if ((*param_4 & 2) != 0) {
      uVar12 = 0x10;
    }
    if ((*param_4 & 4) == 0) {
      uVar12 = uVar12 | 0x20;
    }
    iVar9 = fn_8267BC00(lVar7);
    if (lVar7 + 0x70 == 0) {
      iVar10 = 0;
    }
    else {
      uVar2 = param_4[4];
      uVar3 = param_4[3];
      uVar4 = param_4[2];
      uVar5 = param_4[1];
      uVar8 = fn_8267B648(param_1,param_4[7]);
      iVar10 = fn_82692630(lVar7 + 0x70,uVar8,iVar9,uVar12,uVar5,uVar4,uVar3,uVar2);
    }
    if (*(char *)(iVar10 + 0x1f6) != '\0') {
      *(unsigned int *)(iVar9 + 8) = uVar6;
      *(unsigned int *)(iVar9 + 0xc) = 1;
      *(unsigned int *)(iVar9 + 0x14) = 0;
      memcpy(iVar9 + 0x18,param_4,0x20);
      *(unsigned int *)(iVar9 + 0x38) = param_3;
      *(int *)(iVar9 + 0x3c) = (int)(lVar7 + 0x298);
      *(unsigned char *)(iVar9 + 100) = ~(unsigned char)*param_4 & 1;
      uVar6 = *param_4;
      *(int *)(iVar9 + 0x68) = iVar10;
      *(unsigned char *)(iVar9 + 0x65) = (unsigned char)((~(unsigned __int64)uVar6 & 0xffffffff) >> 4) & 1;
      pcVar11 = param_2;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      memcpy(lVar7 + 0x298,param_2,(int)pcVar11 - (int)param_2);
      return iVar9;
    }
    fn_826913D8(param_1 + 0x118,lVar7,uVar6);
  }
  return 0;
}

