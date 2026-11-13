extern int fn_8267BE38();
extern int fn_8269A608();


void fn_8275C2C0(int param_1)

{
  int *puVar1;
  unsigned int uVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0x38);
  if (puVar1 != (int *)0x0) {
    if (--*puVar1 <= 0) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  *(unsigned int *)(param_1 + 0x38) = 0;
  return;
}

