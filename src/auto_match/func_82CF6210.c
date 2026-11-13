extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


void fn_82CF6210(int param_1)

{
  unsigned int uVar1;
  unsigned short *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  *(unsigned int *)(param_1 + 0x30) = 0;
  puVar3 = (unsigned int *)(param_1 + -4);
  *(unsigned int *)(param_1 + 0x34) = 0;
  puVar2 = (unsigned short *)(param_1 + 0x1e);
  lVar4 = 8;
  *(unsigned int *)(param_1 + 0x38) = 0x80000000;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  uVar1 = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x54) = 0;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(unsigned __int64 *)(param_1 + 0x40) = lbl_82005710;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0x80000000;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0x80000000;
  return;
}

