extern int fn_822315A0();
extern int fn_8265CA20();


int * fn_822DB7F0(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar1 = param_1[1];
    if (iVar3 != iVar1) {
      piVar2 = (int *)(iVar3 + 0x50);
      do {
        if (*piVar2 != 0) {
          fn_822315A0();
        }
        iVar3 = iVar3 + 0x60;
        piVar2 = piVar2 + 0x18;
      } while (iVar3 != iVar1);
    }
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

