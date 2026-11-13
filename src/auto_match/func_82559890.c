extern int fn_827FA3C8();


void fn_82559890(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    iVar2 = 0;
    do {
      fn_827FA3C8(*(unsigned int *)(*(int *)(param_1 + 0x14) + iVar2 + 0x38));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar1 < (int)(unsigned int)*(unsigned char *)(param_1 + 3));
  }
  return;
}

