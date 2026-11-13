extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826C6368();


void fn_82756488(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if (*(unsigned int *)(param_1 + 0x50) != 0) {
    fn_8267C498(*(int *)(param_1 + 0x50));
  }
  puVar1 = *(unsigned int **)(param_1 + 0x4c);
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (unsigned int)(uVar2 - 1);
    if (uVar2 - 1 == 0) {
      fn_826C6368(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  return;
}

