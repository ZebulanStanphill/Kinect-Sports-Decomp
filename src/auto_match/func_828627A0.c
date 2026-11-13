extern int fn_828106A0();
extern int fn_8281D460();
extern int fn_828625D0();
extern int fn_82862648();


void fn_828627A0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  __int64 lVar5;
  int iVar6;
  
  pcVar4 = (char *)(param_1 + 0xb);
  pcVar3 = "04.05.05.0032";
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x54) + (unsigned __int64)*(unsigned int *)(param_2 + 8);
  fn_828106A0(lVar5);
  fn_8281D460(lVar5 + 0xc);
  iVar6 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar5 = 0;
    do {
      fn_828625D0((unsigned __int64)*(unsigned int *)(param_1 + 0x34) + lVar5,param_2);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x2c;
    } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x38));
  }
  iVar6 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar5 = 0;
    do {
      fn_82862648((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + lVar5,cVar1 == cVar2,param_2);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x40));
  }
  return;
}

