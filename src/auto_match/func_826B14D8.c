extern int fn_826AF898();
extern int fn_826B1330();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


unsigned int fn_826B14D8(__int64 param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  iVar1 = fn_826AF898(param_1 + 0x278,&stack0x0000001c);
  puVar2 = (unsigned int *)(-(unsigned int)(iVar1 != 0) & iVar1 + 4U);
  if (puVar2 == (unsigned int *)0x0) {
    fn_826B1330(param_1,((unsigned __int64)(param_2 + 2) & 0x3fffffff) * 4 + param_1);
    iVar1 = fn_826AF898(param_1 + 0x278,&stack0x0000001c);
    puVar2 = (unsigned int *)(-(unsigned int)(iVar1 != 0) & iVar1 + 4U);
    if (puVar2 == (unsigned int *)0x0) {
      return 0;
    }
  }
  return *puVar2;
}

