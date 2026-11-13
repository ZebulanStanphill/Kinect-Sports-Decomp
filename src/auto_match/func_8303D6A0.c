unsigned __int64 fn_8303D6A0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  puVar1 = (unsigned int *)*param_2;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = *puVar1;
  *param_2 = (int)(puVar1 + 1);
  *param_2 = (int)(puVar1 + 2);
  *(unsigned int *)(param_1 + 0x30) = uVar4;
  *(unsigned int *)(param_1 + 0x2c) = uVar3;
  *param_2 = (int)(puVar1 + 4);
  *(unsigned int *)(param_1 + 0x28) = uVar2;
  *(unsigned int *)(param_1 + 0x34) = uVar5;
  return 1;
}

