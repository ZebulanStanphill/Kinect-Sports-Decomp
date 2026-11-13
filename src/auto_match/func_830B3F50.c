unsigned __int64 fn_830B3F50(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    puVar1 = *(unsigned int **)(param_1 + 8);
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
      *(unsigned int *)(param_1 + 8) = 0;
    }
    *(int *)(param_1 + 8) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}

