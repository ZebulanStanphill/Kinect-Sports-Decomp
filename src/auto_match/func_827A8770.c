typedef unsigned char bool;
#define true 1
#define false 0


__int64 fn_827A8770(int *param_1)

{
  unsigned int uVar1;
  bool bVar2;
  __int64 lVar3;
  
  uVar1 = param_1[5];
  lVar3 = 0;
  if (uVar1 == 0) {
    return lVar3;
  }
  if (((unsigned int)param_1[1] <= uVar1) || (bVar2 = false, (int)uVar1 < 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    return lVar3;
  }
  if (param_1[1] == 0) {
    return lVar3;
  }
  return (unsigned __int64)*(unsigned int *)(((int *)*param_1)[uVar1] + 0x10) -
         (unsigned __int64)*(unsigned int *)(*(int *)*param_1 + 0x10);
}

