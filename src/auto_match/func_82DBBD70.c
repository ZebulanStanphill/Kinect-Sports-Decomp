unsigned short * fn_82DBBD70(int param_1)

{
  unsigned short *puVar1;
  unsigned short *puVar2;
  
  puVar1 = *(unsigned short **)(param_1 + 0x10);
  if (puVar1 == (unsigned short *)0x0) {
    return puVar1;
  }
  puVar2 = *(unsigned short **)(puVar1 + 10);
  if (*puVar2 < 0x17) {
    return puVar1;
  }
  do {
    puVar1 = puVar2;
    puVar2 = *(unsigned short **)(puVar2 + 10);
  } while (*puVar2 >= 0x17);
  return puVar1;
}

