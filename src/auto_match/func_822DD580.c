typedef unsigned char bool;


void fn_822DD580(int param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  
  iVar2 = (param_2 + 1) * 2;
  iVar3 = param_2;
  if (iVar2 < param_3) {
    iVar1 = param_2;
    do {
      iVar3 = iVar2;
      if (*(char *)(iVar2 + param_1) < *(char *)(param_1 + -1 + iVar2)) {
        iVar3 = iVar2 + -1;
      }
      *(unsigned char *)(param_1 + iVar1) = *(unsigned char *)(iVar3 + param_1);
      iVar2 = (iVar3 + 1) * 2;
      iVar1 = iVar3;
    } while (iVar2 < param_3);
  }
  if (iVar2 == param_3) {
    *(unsigned char *)(param_1 + iVar3) = *(unsigned char *)(param_1 + param_3 + -1);
    iVar3 = param_3 + -1;
  }
  uVar4 = iVar3 - 1;
  bVar5 = (int)uVar4 < 0 && (uVar4 & 1) != 0;
  while ((iVar2 = ((int)uVar4 >> 1) + (unsigned int)bVar5, param_2 < iVar3 &&
         (*(char *)(iVar2 + param_1) < *param_4))) {
    *(char *)(iVar3 + param_1) = *(char *)(iVar2 + param_1);
    uVar4 = iVar2 - 1;
    bVar5 = (int)uVar4 < 0 && (uVar4 & 1) != 0;
    iVar3 = iVar2;
  }
  *(char *)(iVar3 + param_1) = *param_4;
  return;
}

