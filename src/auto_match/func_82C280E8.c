#define true 1


unsigned __int64 fn_82C280E8(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  *param_4 = 0;
  *param_3 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 0x94);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  do {
    uVar2 = *(unsigned __int64 *)(*piVar1 + 8);
    if (uVar2 <= param_2) {
      if (param_2 < *(unsigned int *)(*piVar1 + 4) + uVar2) {
        *param_4 = 1;
        *param_3 = piVar1;
        return 0;
      }
      if (uVar2 < param_2) {
        return 0;
      }
    }
    piVar1 = (int *)piVar1[2];
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  } while( true );
}

