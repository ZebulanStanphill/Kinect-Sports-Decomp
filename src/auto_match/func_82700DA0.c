extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_8269A608();


void fn_82700DA0(int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if (((*(unsigned char *)(param_1 + 4) & 2) == 0) && (param_1[2] != 0)) {
    fn_826824B0();
  }
  param_1[2] = 0;
  if (((*(unsigned char *)(param_1 + 4) & 1) == 0) && (param_1[3] != 0)) {
    fn_826824B0();
  }
  param_1[3] = 0;
  puVar1 = (unsigned int *)param_1[1];
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
    if ((__int64)((unsigned __int64)uVar2 - 1) < 1) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  if (*param_1 != 0) {
    fn_826824B0();
  }
  return;
}

