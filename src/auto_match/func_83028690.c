extern unsigned int lbl_832642E0;


unsigned __int64 fn_83028690(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  
  iVar3 = 0;
  lVar5 = 5;
  puVar2 = (unsigned int *)(param_1 + 0x14);
  do {
    *(unsigned char *)(param_1 + 0x5c + iVar3) = 0xff;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 3;
    *puVar2 = 0;
    iVar1 = lbl_832642E0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar4 = lbl_832642E0 + 0xfe0;
  RtlEnterCriticalSection(iVar4);
  iVar3 = (*(unsigned int *)(param_1 + 0xc) % 0xc1) * 4;
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(iVar3 + iVar1 + 0xffc);
  *(int *)(iVar3 + iVar1 + 0xffc) = param_1;
  *(int *)(iVar1 + 0x1300) = *(int *)(iVar1 + 0x1300) + 1;
  RtlLeaveCriticalSection(iVar4);
  return 1;
}

