#define true 1
extern int fn_82F41CE0();
extern int fn_82F41D68();
extern unsigned int lbl_82164550;


unsigned __int64 fn_82F48F80(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  if (param_3 == (unsigned int *)0x0) {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    if (((param_1 & 0xffffffff) != 0) || ((param_2 & 0xffffffff) != 0)) {
      piVar3 = (int *)&lbl_82164550;
      do {
        if (*piVar3 == 0) {
          if ((piVar3[2] == 0) && (piVar3[3] == 0)) {
LAB_82f49068:
            if (((*piVar3 == 0) && (piVar3[2] == 0)) && (piVar3[3] == 0)) {
              return 1;
            }
            *param_3 = piVar3;
            return 0;
          }
        }
        else if (((param_1 & 0xffffffff) != 0) && (iVar1 = fn_82F41CE0(param_1), iVar1 != 0))
        goto LAB_82f49068;
        if ((((piVar3[2] != 0) && ((param_2 & 0xffffffff) != 0)) &&
            (iVar1 = fn_82F41D68(param_2), iVar1 != 0)) ||
           (((piVar3[3] != 0 && ((param_2 & 0xffffffff) != 0)) &&
            (iVar1 = fn_82F41D68(param_2), iVar1 != 0)))) goto LAB_82f49068;
        piVar3 = piVar3 + 6;
      } while( true );
    }
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

