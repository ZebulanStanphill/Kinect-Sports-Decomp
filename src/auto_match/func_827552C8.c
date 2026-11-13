extern int fn_8267BE38();
extern int fn_826C6368();


void fn_827552C8(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if (param_2 != (int *)0x0) {
    *param_2 = *param_2 + 1;
  }
  puVar1 = *(unsigned int **)(param_1 + 0x28);
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
    if ((unsigned int)uVar2 - 1 == 0) {
      fn_826C6368(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  *(int **)(param_1 + 0x28) = param_2;
  return;
}

