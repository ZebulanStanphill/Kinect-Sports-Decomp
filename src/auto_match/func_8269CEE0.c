extern int fn_8267BE38();


unsigned int * fn_8269CEE0(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  puVar1 = (unsigned int *)*param_2;
  uVar2 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    uVar2 = puVar1[1];
    if (uVar2 == 0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_8267BE38();
      }
      *param_2 = 0;
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
    }
  }
  *param_1 = uVar2;
  return param_1;
}

