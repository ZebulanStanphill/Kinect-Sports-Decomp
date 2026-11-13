extern int fn_822BC900();
extern int fn_8240F170();
extern int fn_8240F910();
extern int fn_82417F58();
extern int fn_824199A8();
extern int fn_8241A610();


void fn_8241CAE8(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int **ppuVar5;
  int iVar6;
  unsigned int *puStack_40;
  unsigned int *apuStack_3c [15];
  
  iVar6 = *(int *)(*param_1 + 0x8c);
  puVar1 = (unsigned int *)(*(unsigned int **)(iVar6 + 0x60))[1];
  puStack_40 = *(unsigned int **)(iVar6 + 0x60);
  while (puVar4 = puVar1, *(char *)((int)puVar4 + 0x35) == '\0') {
    if ((unsigned int)puVar4[3] < *(unsigned int *)(param_2 + 0xc)) {
      puVar1 = (unsigned int *)puVar4[2];
    }
    else {
      puVar1 = (unsigned int *)*puVar4;
      puStack_40 = puVar4;
    }
  }
  if ((puStack_40 == *(unsigned int **)(iVar6 + 0x60)) ||
     (*(unsigned int *)(param_2 + 0xc) < (unsigned int)puStack_40[3])) {
    apuStack_3c[0] = *(unsigned int **)(iVar6 + 0x60);
    ppuVar5 = apuStack_3c;
  }
  else {
    ppuVar5 = &puStack_40;
  }
  if (*ppuVar5 == *(unsigned int **)(iVar6 + 0x60)) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*ppuVar5)[4];
  }
  if (*(int *)(param_2 + 8) == 0) {
    uVar2 = fn_82417F58(param_1,param_2,iVar6,*(int *)(iVar6 + 0x30) != 0);
    fn_824199A8(param_1,uVar2);
  }
  if (*(int *)(param_2 + 8) == 1) {
    iVar3 = fn_82417F58(param_1);
    fn_822BC900(iVar3,*(unsigned int *)(iVar6 + 0x28),*(unsigned int *)(iVar6 + 0x40));
    fn_8240F170(iVar6,param_2 + 0x10);
    if (*(int *)(iVar3 + 0x24) != 0) {
      (**(int (***)())(*(int *)param_1[1] + 0x54))
                ((int *)param_1[1],(unsigned __int64)(unsigned int)param_1[6] * 0x1ac + (unsigned __int64)(unsigned int)param_1[2]
                 ,*(unsigned int *)(iVar6 + 0x40),*(unsigned int *)(param_2 + 0x34));
    }
    uVar2 = fn_82417F58(param_1);
    fn_8241A610(param_1,uVar2);
  }
  if (*(int *)(param_2 + 8) == 2) {
    fn_8240F910(iVar6,param_2 + 0x50,1);
  }
  return;
}

