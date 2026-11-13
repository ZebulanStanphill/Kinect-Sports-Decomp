extern int fn_82FE3F98();


void fn_82FE0818(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  if ((*(char *)(param_1 + 0x170) != '\0') && (uVar1 = 0, *(char *)(param_1 + 0xcc) != '\0')) {
    lVar2 = 0;
    do {
      fn_82FE3F98((unsigned __int64)*(unsigned int *)(param_1 + 0xd8) + lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x28;
    } while (uVar1 < *(unsigned char *)(param_1 + 0xcc));
  }
  return;
}

