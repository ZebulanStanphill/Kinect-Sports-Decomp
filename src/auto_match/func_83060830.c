typedef unsigned char bool;
#define true 1
#define false 0


bool fn_83060830(int param_1,int *param_2,__int64 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = (int)param_3;
  bVar2 = false;
  iVar4 = 0;
  piVar5 = param_2;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*piVar5 * 0x18 + *(int *)(param_1 + 0x2c));
      if (iVar1 < 0) {
        bVar2 = true;
        break;
      }
      iVar4 = iVar4 + 1;
      *(int *)(*piVar5 * 0x18 + *(int *)(param_1 + 0x2c)) = -1 - iVar1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar3);
    if (0 < iVar3) {
      do {
        iVar3 = *(int *)(*param_2 * 0x18 + *(int *)(param_1 + 0x2c));
        if (iVar3 < 0) {
          *(int *)(*param_2 * 0x18 + *(int *)(param_1 + 0x2c)) = -1 - iVar3;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return !bVar2;
}

