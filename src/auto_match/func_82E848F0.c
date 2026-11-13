void fn_82E848F0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = *(unsigned int **)((param_2 + 0x1385) * 4 + param_1);
  puVar2 = *(unsigned int **)((param_2 + 5000) * 4 + param_1);
  *(unsigned int *)(param_1 + 0x4e78) = *puVar1;
  *(unsigned int *)(param_1 + 0x4e7c) = puVar1[1];
  *(unsigned int *)(param_1 + 0x4e80) = puVar1[2];
  *(unsigned int *)(param_1 + 0x4e70) = puVar1[4];
  *(unsigned int *)(param_1 + 0x4e74) = puVar1[5];
  *(unsigned int *)(param_1 + 0x4e8c) = *puVar2;
  *(unsigned int *)(param_1 + 0x4e90) = puVar2[1];
  *(unsigned int *)(param_1 + 0x4e94) = puVar2[2];
  *(unsigned int *)(param_1 + 0x4e9c) = puVar2[3];
  *(unsigned int *)(param_1 + 0x4e84) = puVar2[4];
  *(unsigned int *)(param_1 + 0x4e88) = puVar2[5];
  *(unsigned int *)(param_1 + 0x4e98) = puVar2[6];
  *(unsigned int *)(param_1 + 0x4ea0) = puVar2[7];
  return;
}

