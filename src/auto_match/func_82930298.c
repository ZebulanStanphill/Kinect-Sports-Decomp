extern int fn_82934160();


unsigned int fn_82930298(unsigned int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_82934160();
  uVar1 = *puVar2;
  *puVar2 = param_1;
  return uVar1;
}

