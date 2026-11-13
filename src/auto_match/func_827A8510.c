typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_827A8510(int *param_1)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  
  if (*param_1 < 0) {
    uVar2 = (unsigned int)*(unsigned char *)(param_1 + 7);
  }
  else {
    uVar2 = param_1[1];
  }
  if (uVar2 != 0) {
    iVar3 = (int)param_1 + 0x1e;
    if (-1 < *param_1) {
      iVar3 = (int)param_1 + 0x2a;
    }
    iVar3 = uVar2 * 8 + iVar3;
    if ((*(unsigned char *)(iVar3 + -2) & 1) != 0) {
      if (((*(unsigned char *)(iVar3 + -2) & 1) == 0) ||
         (bVar1 = true, (*(unsigned short *)(iVar3 + -4) & 0xf000) != 0)) {
        bVar1 = false;
      }
      if (!bVar1) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

