typedef unsigned char bool;
#define true 1
#define false 0


__int64 fn_8272C128(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  uVar1 = *param_1;
  if ((iVar3 < (int)uVar1) || (bVar2 = true, (int)(param_1[1] + uVar1 + -1) < iVar3)) {
    bVar2 = false;
  }
  if (bVar2) {
    return 0;
  }
  if (iVar3 < (int)uVar1) {
    return (unsigned __int64)uVar1 - param_2;
  }
  return ((unsigned __int64)param_1[1] - param_2) + (unsigned __int64)uVar1;
}

