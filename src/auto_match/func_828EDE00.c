extern int fn_828ED1A0();
extern int fn_82CE1D08();
extern int fn_82F68CC0();


unsigned __int64 fn_828EDE00(int param_1)

{
  char cVar3;
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int *puVar4;
  __int64 lVar5;
  
  cVar3 = fn_828ED1A0();
  if ((cVar3 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    puVar4 = (unsigned int *)(param_1 + 0x108);
    lVar5 = 7;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_82F68CC0(param_1 + 0x94);
    iVar2 = fn_82CE1D08(*(unsigned int *)(param_1 + 0x58),0xfe,param_1 + 0x94,param_1 + 0x10c);
    *(unsigned char *)(param_1 + 0x129) = 0;
    if ((iVar2 == 0) || (iVar2 == 0x3e5)) {
      uVar1 = 1;
      *(unsigned char *)(param_1 + 0x128) = 1;
    }
    else {
      uVar1 = 0;
      *(unsigned char *)(param_1 + 0x128) = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

