void fn_82E6DE58(int *param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  iVar1 = *param_1;
  if (*(short *)(iVar1 + 0x22) == 0) {
    return;
  }
  sVar2 = 0;
  puVar4 = (unsigned int *)(param_3 + -0x44);
  puVar3 = (unsigned int *)(param_2 + -0x44);
  do {
    sVar2 = sVar2 + 1;
    puVar3[0x4a] = puVar4[0x4a];
    puVar3[0x5c] = puVar4[0x5c];
    puVar3[0x5d] = puVar4[0x5d];
    puVar3[0x5e] = puVar4[0x5e];
    puVar3[0x5f] = puVar4[0x5f];
    puVar4 = puVar4 + 0x74;
    puVar3 = puVar3 + 0x74;
    *puVar3 = *puVar4;
  } while ((int)sVar2 < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x22));
  return;
}

