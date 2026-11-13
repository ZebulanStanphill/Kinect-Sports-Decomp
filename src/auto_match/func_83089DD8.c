extern int fn_83089FA0();
extern int fn_83089DB8();


void fn_83089DD8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (1 < (int)*(unsigned int *)(param_1 + 0x54)) {
    fn_83089FA0(*(unsigned int *)(param_1 + 0x50),0,(unsigned int)*(unsigned int *)(param_1 + 0x54) - 1,
                      fn_83089DB8);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar3 = 0;
    do {
      iVar5 = iVar4;
      piVar2 = (int *)(*(int *)(param_1 + 0x50) + iVar3);
      iVar3 = iVar3 + 8;
      iVar1 = *piVar2;
      *(short *)(((param_1 == *(int *)(iVar1 + 0x14)) + 2) * 2 + iVar1) = (short)iVar5;
      iVar4 = iVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x54));
  }
  return;
}

