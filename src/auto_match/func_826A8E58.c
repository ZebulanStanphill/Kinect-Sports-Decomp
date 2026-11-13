typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_826A8E58(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  
  piVar1 = (int *)*param_1;
  if (((piVar1 == (int *)0x0) || (*piVar1 == 0)) ||
     (bVar3 = false, *(int *)(*piVar1 + 4) < param_1[1])) {
    bVar3 = true;
  }
  if (bVar3) {
    if ((((int *)*param_2 == (int *)0x0) || (iVar2 = *(int *)*param_2, iVar2 == 0)) ||
       (bVar3 = false, *(int *)(iVar2 + 4) < param_2[1])) {
      bVar3 = true;
    }
    if (bVar3) {
      return 1;
    }
  }
  if ((piVar1 != (int *)*param_2) || (uVar4 = 1, param_1[1] != param_2[1])) {
    uVar4 = 0;
  }
  return uVar4;
}

