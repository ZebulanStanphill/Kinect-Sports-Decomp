extern int fn_82D07768();


void fn_82D070C8(int param_1,int param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_2 * 0x20 + *(int *)(param_1 + 8));
  *param_4 = *(unsigned char *)(puVar2 + 2);
  *(unsigned int *)(param_4 + 4) = puVar2[3];
  uVar1 = fn_82D07768(*(unsigned char *)(puVar2 + 2),puVar2[3]);
  *(unsigned int *)(param_4 + 8) = uVar1;
  *(unsigned int *)(param_4 + 0xc) = puVar2[6];
  param_4[0x14] = *(unsigned char *)(puVar2 + 4);
  *(unsigned int *)(param_4 + 0x10) = puVar2[7];
  if ((param_3 & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  *(unsigned int *)(param_4 + 0x1c) = uVar1;
  *(unsigned int *)(param_4 + 0x18) = 0;
  if (((param_3 & 1) != 0) && (*(char *)(puVar2 + 4) != '\0')) {
    *(unsigned int *)(param_4 + 0x18) = puVar2[5];
  }
  uVar1 = puVar2[1];
  *(int *)(param_4 + 0x24) = param_2;
  *(unsigned int *)(param_4 + 0x20) = uVar1;
  return;
}

