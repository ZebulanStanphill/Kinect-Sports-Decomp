unsigned short * fn_827F1E58(int param_1,unsigned short *param_2,unsigned short *param_3)

{
  unsigned short *puVar1;
  int iVar2;
  
  puVar1 = *(unsigned short **)(param_1 + 0xd4);
  if (param_2 == puVar1) {
    *(unsigned int *)(param_1 + 0xd4) = *(unsigned int *)(puVar1 + 4);
    if (param_2 != (unsigned short *)0x0) {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
    }
    return param_2;
  }
  *(unsigned int *)(param_1 + 0xd4) = *(unsigned int *)(puVar1 + 4);
  *(unsigned int *)(*(int *)(puVar1 + 2) + 8) = *(unsigned int *)(puVar1 + 4);
  *(unsigned int *)(*(int *)(puVar1 + 4) + 4) = *(unsigned int *)(puVar1 + 2);
  iVar2 = *(int *)(param_2 + 2);
  *(int *)(puVar1 + 2) = iVar2;
  *(unsigned short **)(iVar2 + 8) = puVar1;
  *(unsigned short **)(puVar1 + 4) = param_2;
  *(unsigned short **)(param_2 + 2) = puVar1;
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  return puVar1;
}

