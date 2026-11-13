#define true 1


unsigned __int64 fn_82B17020(unsigned __int64 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 0x40);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((piVar1[3] & 0x4000000U) != 0) {
      for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (*(int *)(iVar2 + 4) == param_3) {
          return 1;
        }
      }
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}

