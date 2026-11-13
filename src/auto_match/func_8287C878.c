extern int fn_822974F0();
extern int fn_82865AF0();


unsigned int * fn_8287C878(unsigned int *param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  short *psVar6;
  char *pcVar7;
  
  param_1[4] = 0;
  param_1[5] = 7;
  *(unsigned short *)param_1 = 0;
  uVar2 = (unsigned __int64)(unsigned int)param_2[4];
  if ((unsigned int)param_1[4] < uVar2) {
    fn_82865AF0(param_1,uVar2 - (unsigned int)param_1[4],0);
  }
  else {
    fn_822974F0(param_1,uVar2,0xffffffffffffffff);
  }
  puVar3 = param_1;
  if (7 < (unsigned int)param_1[5]) {
    puVar3 = (unsigned int *)*param_1;
  }
  puVar5 = param_2;
  if (0xf < (unsigned int)param_2[5]) {
    puVar5 = (unsigned int *)*param_2;
  }
  piVar1 = param_2 + 4;
  if (0xf < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  if (param_2 != (unsigned int *)((int)puVar5 + *piVar1)) {
    iVar4 = ((int)puVar5 + *piVar1) - (int)param_2;
    pcVar7 = (char *)((int)param_2 + -1);
    psVar6 = (short *)((int)puVar3 + -2);
    do {
      pcVar7 = pcVar7 + 1;
      psVar6 = psVar6 + 1;
      *psVar6 = (short)*pcVar7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}

