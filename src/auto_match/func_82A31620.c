extern int fn_82A30700();


unsigned __int64 fn_82A31620(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(param_1 + 0x80);
  do {
    if (puVar3 == (unsigned int *)(param_1 + 0x80)) {
      return 0;
    }
    piVar1 = puVar3 + -0x12;
    puVar3 = (unsigned int *)*puVar3;
  } while (((*(unsigned char *)(*piVar1 + 0x35) & 0x10) == 0) ||
          (uVar2 = fn_82A30700(param_1,*piVar1,0), -1 < (int)uVar2));
  return uVar2;
}

