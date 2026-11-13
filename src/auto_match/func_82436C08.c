unsigned __int64 fn_82436C08(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x114);
  puVar2 = *(unsigned int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x40) + 0x208);
  uVar3 = *puVar2;
  if (uVar3 == 0) {
    uVar4 = (unsigned __int64)puVar2[1];
  }
  else if (uVar3 == 1) {
    uVar4 = (unsigned __int64)puVar2[2];
  }
  else if (uVar3 < 3) {
    uVar4 = (unsigned __int64)puVar2[3];
  }
  else if (uVar3 == 3) {
    uVar4 = (unsigned __int64)puVar2[4];
  }
  if (iVar1 == 1) {
    uVar4 = uVar4 + 0x34;
  }
  else if (iVar1 == 2) {
    uVar4 = uVar4 + 0x5c;
  }
  else if (iVar1 == 3) {
    uVar4 = uVar4 + 0xc4;
  }
  else if (iVar1 == 4) {
    uVar4 = uVar4 + 0xa4;
  }
  else if (iVar1 == 5) {
    uVar4 = uVar4 + 0x84;
  }
  return uVar4;
}

