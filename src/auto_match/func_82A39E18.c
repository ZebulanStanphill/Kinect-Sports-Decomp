void fn_82A39E18(int param_1)

{
  unsigned int uVar1;
  char cVar3;
  unsigned char *puVar2;
  
  if ('\x1f' < (char)*(unsigned char *)(param_1 + 0x18)) {
    return;
  }
  uVar1 = (int)*(char *)(param_1 + 0x18) - (*(unsigned char *)(param_1 + 0x18) + 0xf0 & 0xff);
  cVar3 = (char)uVar1;
  *(char *)(param_1 + 0x18) = cVar3;
  *(unsigned int *)(param_1 + 0x14) = 0 << (uVar1 & 0x3f) | *(unsigned int *)(param_1 + 0x14);
  if ('\x10' < cVar3) {
    return;
  }
  do {
    if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
      *(unsigned char *)(param_1 + 0x19) = 1;
      *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
    }
    **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
    puVar2 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
    *(unsigned char **)(param_1 + 0x858) = puVar2;
    *puVar2 = *(unsigned char *)(param_1 + 0x14);
    cVar3 = *(char *)(param_1 + 0x18) + '\x10';
    *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
    *(char *)(param_1 + 0x18) = cVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
  } while (cVar3 < '\x11');
  return;
}

