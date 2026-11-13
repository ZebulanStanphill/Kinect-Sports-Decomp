void fn_8285A8F8(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 100);
  iVar4 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar3 = 0;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x40) + iVar3);
      if (*piVar2 != -1) {
        (*(int (**)())*param_3)(param_3,piVar2,piVar2[0x14] + param_2);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x44));
  }
  *(unsigned char *)(iVar1 + param_2 + 0x98) = 1;
  return;
}

