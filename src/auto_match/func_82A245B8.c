typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A23B20();


bool fn_82A245B8(char *param_1,int param_2)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_120 [272];
  
  uVar2 = *(unsigned int *)(param_2 + 0x1c);
  if ((uVar2 & 0x20) == 0) {
    if (((uVar2 & 0x80) == 0) && ((uVar2 & 0x40) != 0)) {
      fn_82A23B20(param_2,0,acStack_120,0x104);
      pcVar5 = acStack_120;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar6 = param_1;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar3 = RtlCompareStringN(param_1,pcVar6 + (-1 - (int)param_1),acStack_120,
                                pcVar5 + (-1 - (int)acStack_120),1);
      bVar4 = iVar3 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

