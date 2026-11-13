extern int fn_82A1E658();
extern int fn_82F68CC0();
extern int fn_831430CC();
extern int fn_831430EC();
extern unsigned int iStack_50;


__int64 fn_82CE2220(char *param_1,unsigned __int64 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  char *pcVar5;
  int iStack_50;
  int aiStack_4c [19];
  
  aiStack_4c[0] = 0;
  iStack_50 = 0;
  pcVar5 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + (-1 - (int)param_1);
    if ((char *)0xc7 < pcVar5) {
      return 0x57;
    }
  }
  if ((((param_2 & 0xffffffff) == 0) || (1000 < (param_2 & 0xffffffff))) || (param_4 == (int *)0x0))
  {
    return 0x57;
  }
  lVar3 = fn_831430CC(0xffffffffffffffff,0xfc,0x58039,0x5803a,0xd4,param_2,0,&iStack_50);
  if ((lVar3 == 0) &&
     (lVar3 = fn_831430EC(iStack_50,aiStack_4c), iVar2 = aiStack_4c[0], lVar3 == 0)) {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2 * 0xd0;
    }
    iVar4 = aiStack_4c[0] + 0x18;
    if (pcVar5 != (char *)0x0) {
      fn_82F68CC0(iVar4,param_1,pcVar5);
    }
    pcVar5[iVar4] = '\0';
    *(unsigned int *)(iVar2 + 0xe0) = 0;
    lVar3 = param_2 * 0xd7 + 8;
    *(int *)(iVar2 + 0xe4) = (int)lVar3;
    iVar4 = XamAlloc(0x18000000,lVar3,iVar2 + 0xe8);
    iVar2 = iStack_50;
    if (iVar4 < 0) {
      lVar3 = 8;
    }
    else {
      lVar3 = 0;
      iStack_50 = 0;
      *param_4 = iVar2;
    }
  }
  if (iStack_50 != 0) {
    fn_82A1E658();
  }
  if (aiStack_4c[0] != 0) {
    ObDereferenceObject();
    return lVar3;
  }
  return lVar3;
}

