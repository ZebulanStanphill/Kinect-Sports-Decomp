void fn_82D4D268(unsigned char *param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(unsigned int **)(param_2 + 0x10))[1];
  if (0 < iVar1) {
    piVar2 = (int *)**(unsigned int **)(param_2 + 0x10);
    do {
      if (*piVar2 == param_3) goto LAB_82d4d2a0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = -1;
LAB_82d4d2a0:
  *param_1 = (unsigned char)((unsigned int)iVar3 >> 0x1f) ^ 1;
  return;
}

