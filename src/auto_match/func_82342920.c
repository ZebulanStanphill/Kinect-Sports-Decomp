extern int fn_824CD030();


unsigned int fn_82342920(int param_1)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if ((iVar1 == 0) || (iVar2 = fn_824CD030(iVar1), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xfc) + 0x1c) + 0x3c) + 0x30);
  }
  return uVar3;
}

