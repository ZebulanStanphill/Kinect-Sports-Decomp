extern void IoDeleteDevice(int);


int fn_82A2C0F8(int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  KeEnterCriticalRegion();
  RtlEnterCriticalSection(iVar1);
  if (*(char *)(iVar1 + 0xcb) == '\0') {
    *(unsigned char *)(iVar1 + 0xcb) = 1;
    *(unsigned int *)(iVar1 + 0x88) = 0xc000026e;
    NtClose(*(unsigned int *)(iVar1 + 0x2c));
    uVar2 = 0;
    *(unsigned int *)(iVar1 + 0x2c) = 0;
    *(unsigned int *)(iVar1 + 0x34) = 0;
  }
  else {
    uVar2 = 0xc000026e;
  }
  RtlLeaveCriticalSection(iVar1);
  if (uVar2 >= 0) {
    IoDeleteDevice(param_1);
  }
  KeLeaveCriticalRegion();
  return uVar2;
}

