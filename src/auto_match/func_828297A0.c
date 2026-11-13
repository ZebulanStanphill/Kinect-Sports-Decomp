extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82829E10();


unsigned __int64 fn_828297A0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int iVar3;
  int *piVar4;
  unsigned char auStack_50 [16];
  unsigned int auStack_40 [8];
  
  uVar1 = *param_2;
  if ((uVar1 >= *(unsigned int *)(param_1 + 0x18)) && (uVar1 <= *(unsigned int *)(param_1 + 0x1c))) {
    iVar2 = *(int *)(param_1 + 0x3c);
    auStack_40[1] = 0;
    auStack_40[0] = uVar1;
    piVar4 = (int *)fn_82829E10(auStack_50,iVar2,auStack_40);
    iVar3 = *piVar4;
    if (iVar3 != *(int *)(iVar2 + 4)) {
      param_2[1] = (*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0xc)) + uVar1;
      *(char *)(param_2 + 2) = (char)*(unsigned int *)(iVar3 + 0x1c);
      return 1;
    }
  }
  return 0;
}

