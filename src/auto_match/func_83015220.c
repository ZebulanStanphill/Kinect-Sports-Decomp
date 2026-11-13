extern unsigned int lbl_831BC768;


unsigned __int64 fn_83015220(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  *(unsigned char *)(param_1 + 0x94) = 0;
  *(unsigned char *)(param_1 + 0x95) = 0;
  *(unsigned char *)(param_1 + 0x96) = 0;
  *(unsigned char *)(param_1 + 0x97) = 0;
  *(unsigned char *)(param_1 + 0x98) = 0;
  uVar1 = lbl_831BC768;
  lVar3 = 0x1f;
  puVar2 = (unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 4) = uVar1;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return 1;
}

