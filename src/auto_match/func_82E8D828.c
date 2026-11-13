void fn_82E8D828(unsigned __int64 param_1,int *param_2,int param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 == (int *)0x0) {
    iVar5 = 0;
    iVar4 = 0;
  }
  else {
    iVar5 = *param_4;
    iVar4 = param_4[1];
  }
  *param_2 = *(int *)(param_3 + 4) * iVar4 + iVar5;
  uVar2 = *(int *)(param_3 + 4) * iVar4;
  uVar3 = *(int *)(param_3 + 4) * *(int *)(param_3 + 8);
  uVar1 = (int)uVar3 >> 0x1f;
  uVar2 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar5;
  param_2[1] = ((uVar3 ^ uVar1) - uVar1) +
               ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  uVar3 = *(int *)(param_3 + 4) * *(int *)(param_3 + 8);
  uVar1 = (int)uVar3 >> 0x1f;
  uVar2 = *(int *)(param_3 + 4) * iVar4;
  uVar1 = ((uVar3 ^ uVar1) - uVar1) * 5;
  uVar2 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar5;
  param_2[2] = ((int)uVar1 >> 2) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 3) != 0) +
               ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  return;
}

