extern int stricmp();


unsigned int * fn_82E1D978(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  while (puVar1) {
    if (stricmp(param_2, *puVar1) == 0) return puVar1;
    puVar1 = (unsigned int *)puVar1[2];
  }
  return 0;
}
