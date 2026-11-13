void fn_82F003B0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1e60);
  iVar2 = *(int *)(iVar1 + 0x40);
  *(int *)(param_1 + 0x1e7c) = iVar2;
  iVar3 = *(int *)(param_1 + 0x574) + iVar2;
  *(unsigned int *)(param_1 + 0x1e80) = *(unsigned int *)(iVar1 + 0x58);
  *(unsigned int *)(param_1 + 0x1e84) = *(unsigned int *)(iVar1 + 0x70);
  *(int *)(param_1 + 0x1e88) = iVar3;
  if ((1 < *(unsigned int *)(param_1 + 0x658)) &&
     (*(int *)(param_1 + 0x113c) = *(int *)(param_1 + 0x1144) + iVar3,
     3 < *(unsigned int *)(param_1 + 0x658))) {
    *(int *)(param_1 + 0x1504) = *(int *)(param_1 + 0x150c) + iVar3;
    *(int *)(param_1 + 0x18cc) = *(int *)(param_1 + 0x18d4) + iVar3;
  }
  *(int *)(param_1 + 0x4ed8) = iVar2;
  *(unsigned int *)(param_1 + 0x4edc) = *(unsigned int *)(param_1 + 0x1e80);
  *(unsigned int *)(param_1 + 0x4ee0) = *(unsigned int *)(param_1 + 0x1e84);
  return;
}

