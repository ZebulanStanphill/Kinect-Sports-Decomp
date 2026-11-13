void fn_827672A0(unsigned int *param_1,int param_2)

{
  unsigned char bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned short uVar5;
  
  piVar2 = (int *)*param_1;
  param_1[1] = param_2;
  bVar1 = *(unsigned char *)(param_2 + *piVar2);
  uVar5 = (unsigned short)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
    uVar5 = (short)*(char *)(param_2 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  iVar3 = iVar3 + param_2;
  *(unsigned short *)(param_1 + 2) = uVar5;
  param_1[1] = iVar3;
  bVar1 = *(unsigned char *)(iVar3 + *piVar2);
  uVar5 = (unsigned short)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
    uVar5 = (short)*(char *)(iVar3 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  iVar3 = iVar3 + iVar4;
  *(unsigned short *)((int)param_1 + 10) = uVar5;
  param_1[1] = iVar3;
  bVar1 = *(unsigned char *)(iVar3 + *piVar2);
  uVar5 = (unsigned short)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
    uVar5 = (short)*(char *)(iVar3 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  iVar3 = iVar3 + iVar4;
  *(unsigned short *)(param_1 + 3) = uVar5;
  param_1[1] = iVar3;
  bVar1 = *(unsigned char *)(iVar3 + *piVar2);
  uVar5 = (unsigned short)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
    uVar5 = (short)*(char *)(iVar3 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  *(unsigned short *)((int)param_1 + 0xe) = uVar5;
  param_1[1] = iVar3 + iVar4;
  return;
}

