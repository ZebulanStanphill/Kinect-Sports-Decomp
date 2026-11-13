extern int fn_8285B750();
extern int memcpy();


void fn_8285B800(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (unsigned int *)(*(int *)(param_2 + 8) + *(int *)(param_1 + 0x68));
  puVar1 = (unsigned int *)(*(int *)(param_3 + 8) + *(int *)(param_1 + 0x68));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[6] = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[8] = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[10] = puVar2[10];
  memcpy(puVar1[0xb],puVar2[0xb],*(unsigned int *)(param_1 + 0x60));
  iVar4 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    iVar3 = 0;
    do {
      fn_8285B750(*(unsigned int *)(*(int *)(param_1 + 0x34) + iVar3),param_2,param_3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x38));
  }
  return;
}

