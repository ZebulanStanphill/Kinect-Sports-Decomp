extern int fn_82F71A70();
extern int fn_82F71CD0();
extern int fn_82F85EF8();
extern unsigned int lbl_8329F620;
extern unsigned int uStack00000014;


unsigned __int64 fn_82F85E30(unsigned int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uStack00000014;
  
  puVar1 = &lbl_8329F620;
  iVar2 = (&lbl_8329F620)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48;
  uStack00000014 = param_1;
  if (*(int *)(iVar2 + 8) == 0) {
    fn_82F71CD0(10);
    puVar1 = *(unsigned int **)(iVar2 + 8);
    if (puVar1 == (unsigned int *)0x0) {
      fn_82F71A70(iVar2 + 0xc,4000);
      puVar1 = (unsigned int *)(*(int *)(iVar2 + 8) + 1);
      *(unsigned int **)(iVar2 + 8) = puVar1;
    }
    param_1 = fn_82F85EF8();
  }
  RtlEnterCriticalSection(puVar1[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48 + 0xc);
  return 1;
}

