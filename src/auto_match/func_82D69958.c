void fn_82D69958(unsigned __int64 param_1,int param_2,short param_3)

{
  int iVar1;
  unsigned char *puVar2;
  
  iVar1 = 0;
  if (*(unsigned char *)(param_2 + 0xe) == 0) {
    return;
  }
  puVar2 = (unsigned char *)(param_2 + 0x10);
  do {
    if (*(short *)(puVar2 + 2) == param_3) {
      *puVar2 = 0;
      puVar2[1] = 0;
      return;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 8;
  } while (iVar1 < (int)(unsigned int)*(unsigned char *)(param_2 + 0xe));
  return;
}

