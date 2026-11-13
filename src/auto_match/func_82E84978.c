void fn_82E84978(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = *(unsigned int **)((param_2 + 0x138b) * 4 + param_1);
  puVar2 = *(unsigned int **)((param_2 + 0x138e) * 4 + param_1);
  *(unsigned int *)(param_1 + 0x4eac) = *puVar1;
  *(unsigned int *)(param_1 + 0x4eb0) = puVar1[1];
  *(unsigned int *)(param_1 + 0x4eb4) = puVar1[2];
  *(unsigned int *)(param_1 + 0x4ea4) = puVar1[4];
  *(unsigned int *)(param_1 + 0x4ea8) = puVar1[5];
  *(unsigned int *)(param_1 + 0x4ec4) = *puVar2;
  *(unsigned int *)(param_1 + 0x4ec8) = puVar2[1];
  *(unsigned int *)(param_1 + 0x4ecc) = puVar2[2];
  *(unsigned int *)(param_1 + 0x4ed0) = puVar2[3];
  *(unsigned int *)(param_1 + 0x4eb8) = puVar2[4];
  *(unsigned int *)(param_1 + 0x4ebc) = puVar2[5];
  *(unsigned int *)(param_1 + 0x4ec0) = puVar2[6];
  *(unsigned int *)(param_1 + 0x4ed4) = puVar2[7];
  return;
}

