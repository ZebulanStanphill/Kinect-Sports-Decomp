extern unsigned int *auStack_40;
extern int fn_82829E10();


void fn_82829830(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned char auStack_40 [16];
  int aiStack_30 [6];
  
  iVar1 = *param_2;
  aiStack_30[1] = 0;
  aiStack_30[0] = iVar1;
  piVar3 = (int *)fn_82829E10(auStack_40,*(unsigned int *)(param_1 + 0x3c),aiStack_30);
  iVar2 = *piVar3;
  param_2[1] = (*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0xc)) + iVar1;
  *(char *)(param_2 + 2) = (char)*(unsigned int *)(iVar2 + 0x1c);
  return;
}

