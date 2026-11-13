extern int fn_82862388();


void fn_828624A8(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  __int64 lVar6;
  
  pcVar5 = (char *)(param_1 + 0xb);
  pcVar4 = "04.05.05.0032";
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  iVar3 = 0;
  if (*(unsigned short *)(param_1 + 0x38) != 0) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x38));
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar6 = 0;
    do {
      fn_82862388(lVar6 + (unsigned __int64)*(unsigned int *)(param_1 + 0x3c),cVar1 == cVar2,param_2);
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 0x14;
    } while (iVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x40));
  }
  return;
}

