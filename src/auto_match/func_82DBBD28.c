unsigned short * fn_82DBBD28(int param_1,unsigned int param_2)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  
  puVar2 = *(unsigned short **)(param_1 + 0x10);
  if (puVar2 != (unsigned short *)0x0) {
    uVar1 = *puVar2;
    do {
      if (uVar1 == param_2) {
        return puVar2;
      }
      puVar2 = *(unsigned short **)(puVar2 + 10);
      uVar1 = *puVar2;
    } while (0x16 < uVar1);
  }
  return (unsigned short *)0x0;
}

