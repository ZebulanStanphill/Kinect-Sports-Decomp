extern unsigned int *auStack_50;
extern int fn_827D50C0();
extern int fn_827D5100();
extern int fn_827D5E00();
extern int fn_827E8720();


int fn_827D6880(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int uVar3;
  int iVar4;
  unsigned int *puVar5;
  int lVar6;
  int iVar7;
  unsigned char auStack_50 [16];
  
  iVar7 = param_1 + 0x88;
  lVar6 = 0;
  RtlEnterCriticalSection(iVar7);
  puVar1 = *(unsigned int **)(param_1 + 4);
  puVar5 = (unsigned int *)*puVar1;
  while (puVar5 != puVar1) {
    RtlLeaveCriticalSection(iVar7);
    lVar6 = lVar6 + 1;
    piVar2 = (int *)puVar5[2];
    uVar3 = (*(int (**)())(*piVar2 + 8))(piVar2,param_1);
    fn_827D50C0(piVar2[3],uVar3);
    iVar4 = fn_827D5100(piVar2[3]);
    if (((uVar3 == 0x3e5) || (uVar3 == 0x3e4)) || (iVar4 == 1)) {
      RtlEnterCriticalSection(iVar7);
      puVar5 = (unsigned int *)*puVar5;
    }
    else {
      fn_827D5E00(param_1,piVar2);
      RtlEnterCriticalSection(iVar7);
      puVar5 = (unsigned int *)fn_827E8720(auStack_50,(unsigned int *)(param_1 + 4),puVar5);
      puVar5 = (unsigned int *)*puVar5;
    }
    puVar1 = *(unsigned int **)(param_1 + 4);
  }
  RtlLeaveCriticalSection(iVar7);
  return lVar6;
}

