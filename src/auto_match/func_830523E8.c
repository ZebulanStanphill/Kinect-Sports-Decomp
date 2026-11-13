extern int fn_83051D60();


void fn_830523E8(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  RtlEnterCriticalSection(param_1 + -0x40);
  *(unsigned int *)(param_1 + -4) = *(unsigned int *)(param_1 + -4) & 0xf6ffffff | 0x8000000;
  cVar3 = *(char *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x24);
  while (cVar3 != '\0') {
    iVar2 = *(int *)(iVar1 + 0xc);
    cVar3 = *(char *)(param_1 + 0x30) + -1;
    *(char *)(param_1 + 0x30) = cVar3;
    *(int *)(param_1 + 0x20) = iVar2 + *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  fn_83051D60(param_1 + -0x78);
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  RtlLeaveCriticalSection(param_1 + -0x40);
  return;
}

