extern int fn_828145E8();
extern int fn_82823F50();


unsigned __int64 fn_82820068(int *param_1,int param_2,int param_3,unsigned int *param_4)

{
  char cVar1;
  char *pcVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  *param_4 = 0;
  pcVar2 = (char *)*param_1;
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  piVar4 = (int *)fn_828145E8(param_1[6],pcVar6 + (param_2 - (int)pcVar2) + 0x7b);
  if (piVar4 == (int *)0x0) {
    uVar3 = 1;
  }
  else {
    param_1[4] = param_1[4] | 0x4000;
    piVar4[8] = param_3;
    piVar4[0xf] = 0;
    fn_82823F50();
    piVar4[1] = 0;
    *piVar4 = (int)(piVar4 + 0x10);
    pcVar5 = (char *)((int)piVar4 + 0x3f);
    piVar4[2] = 0;
    piVar4[3] = param_1[3];
    piVar4[4] = param_1[4];
    piVar4[5] = param_1[5];
    piVar4[6] = *(int *)(param_3 + 0x24);
    pcVar7 = (char *)(*param_1 + -1);
    do {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
    uVar3 = 0;
    piVar4[7] = (int)(pcVar6 + (*piVar4 - (int)pcVar2) + 1);
    *param_4 = piVar4;
  }
  return uVar3;
}

