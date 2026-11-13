unsigned __int64 fn_82E49FA8(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar2 = (unsigned int *)(param_1 + 4);
  puVar1 = (unsigned int *)(-(unsigned int)(puVar2 != (unsigned int *)*puVar2) & *puVar2);
  do {
    puVar3 = puVar1;
    if (puVar3 == (unsigned int *)0x0) {
      return 0xffffffff80004005;
    }
    puVar1 = (unsigned int *)(-(unsigned int)(puVar2 != (unsigned int *)*puVar3) & (unsigned int)*puVar3);
  } while (puVar3[3] != param_2);
  puVar3[2] = 0;
  return 0;
}

