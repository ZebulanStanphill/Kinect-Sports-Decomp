extern int fn_8267BE38();
extern int fn_8267C5B0();


void fn_82714530(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if ((int)param_2 == 0) {
    puVar1 = *(unsigned int **)(param_1 + 0x30);
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_8267BE38();
      }
    }
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
  else {
    uVar3 = fn_8267C5B0(param_2);
    puVar1 = *(unsigned int **)(param_1 + 0x30);
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_8267BE38(puVar1);
      }
    }
    *(unsigned int *)(param_1 + 0x30) = uVar3;
  }
  return;
}

