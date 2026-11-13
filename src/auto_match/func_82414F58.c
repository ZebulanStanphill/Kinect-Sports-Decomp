typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82414F58(unsigned int *param_1)

{
  int *piVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  
  piVar1 = (int *)param_1[1];
  if ((piVar1 != (int *)0x0) && ((int *)param_1[2] != (int *)0x0)) {
    bVar2 = true;
    if (*(int *)param_1[2] + *piVar1 == 10) goto LAB_82414f8c;
  }
  bVar2 = false;
LAB_82414f8c:
  if (bVar2) {
    return (unsigned __int64)(*(int *)(param_1[2] + 8) != 0);
  }
  if ((piVar1 == (int *)0x0) || (bVar2 = true, *piVar1 != 10)) {
    bVar2 = false;
  }
  if (bVar2) {
    if ((piVar1[2] == 0) || (uVar3 = 1, *(int *)(piVar1[2] + 8) == 0)) {
      uVar3 = 0;
    }
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x82415000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(int (***)())*param_1)();
  return uVar3;
}

