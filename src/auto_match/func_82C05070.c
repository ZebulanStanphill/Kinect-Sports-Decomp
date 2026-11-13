extern unsigned int *auStack_120;


void fn_82C05070(int *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char auStack_120 [264];
  
  sVar1 = *param_2;
  for (uVar4 = 0; (sVar1 != 0 && (uVar4 < 0x103)); uVar4 = uVar4 + 1) {
    sVar2 = *param_2;
    param_2 = param_2 + 1;
    sVar1 = *param_2;
    auStack_120[uVar4] = (char)sVar2;
  }
  iVar3 = *param_1;
  auStack_120[uVar4] = 0;
  (**(int (***)())(iVar3 + 0x6c))(param_1,auStack_120);
  return;
}

