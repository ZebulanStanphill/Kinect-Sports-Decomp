extern int fn_82FF5DA8();
extern int fn_83018AA8();
extern int fn_83019C18();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_83018FD8(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  
  iVar4 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar4);
  uVar1 = lbl_831BC768;
  puVar3 = (unsigned int *)(param_1 + 0x310);
  lVar5 = 0xc1;
  *(unsigned int *)(param_1 + 0x618) = 0;
  *(unsigned int *)(param_1 + 0x310) = uVar1;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    uVar1 = lbl_831BC768;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned int *)(param_1 + 0x30c) = 0;
  puVar3 = (unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 4) = uVar1;
  lVar5 = 0xc1;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    uVar1 = lbl_831BC768;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned int *)(param_1 + 0x69c) = 0;
  puVar3 = (unsigned int *)(param_1 + 0x61c);
  *(unsigned int *)(param_1 + 0x61c) = uVar1;
  lVar5 = 0x1f;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar2 = fn_83019C18(param_1 + 0x6a0,0x40,0xffffffffffffffff,lbl_831BC768);
  if (((int)uVar2 == 1) &&
     (uVar2 = fn_82FF5DA8(param_1 + 0x6c0,0x10,0xffffffffffffffff,lbl_831BC768),
     uVar1 = lbl_831BC768, (int)uVar2 == 1)) {
    *(unsigned int *)(param_1 + 0x6f4) = 0;
    *(unsigned int *)(param_1 + 0x6ec) = 0;
    *(unsigned int *)(param_1 + 0x6f0) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x6f8) = 0;
    *(unsigned int *)(param_1 + 0x6fc) = uVar1;
    *(unsigned int *)(param_1 + 0x6e8) = 0;
    *(unsigned int *)(param_1 + 0x6e0) = 0;
    *(unsigned int *)(param_1 + 0x6e4) = 0;
    uVar1 = lbl_831BC768;
    *(unsigned int *)(param_1 + 0x714) = 0;
    *(unsigned int *)(param_1 + 0x70c) = 0;
    *(unsigned int *)(param_1 + 0x710) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x718) = 0;
    *(unsigned int *)(param_1 + 0x71c) = uVar1;
    *(unsigned int *)(param_1 + 0x708) = 0;
    *(unsigned int *)(param_1 + 0x700) = 0;
    *(unsigned int *)(param_1 + 0x704) = 0;
    RtlLeaveCriticalSection(iVar4);
  }
  else {
    fn_83018AA8(param_1);
    RtlLeaveCriticalSection(iVar4);
  }
  return uVar2;
}

