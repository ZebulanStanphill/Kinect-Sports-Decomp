extern int fn_8267BE38();
extern int fn_826C6368();


void fn_8279B270(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
    if ((unsigned __int64)uVar2 - 1 == 0) {
      fn_826C6368(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

