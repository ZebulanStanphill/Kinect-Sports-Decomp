void fn_8300DA50(unsigned int *param_1)

{
  unsigned int *puVar1;
  char cVar3;
  int iVar2;
  
  *param_1 = 0;
  iVar2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  *(unsigned char *)(param_1 + 0x13) = 0;
  puVar1 = param_1;
  do {
    cVar3 = (char)iVar2 + '\x01';
    *(unsigned char *)(puVar1 + 0xf) = 0;
    iVar2 = (int)cVar3;
    puVar1 = (unsigned int *)(iVar2 + (int)param_1);
  } while (cVar3 != '\x04');
  iVar2 = 0;
  puVar1 = param_1;
  do {
    cVar3 = (char)iVar2 + '\x01';
    *(unsigned char *)(puVar1 + 0x10) = 0;
    iVar2 = (int)cVar3;
    puVar1 = (unsigned int *)(iVar2 + (int)param_1);
  } while (cVar3 != '\b');
  *(unsigned char *)((int)param_1 + 0x4d) = 0;
  *(unsigned char *)(param_1 + 0x10) = 0xf;
  return;
}

