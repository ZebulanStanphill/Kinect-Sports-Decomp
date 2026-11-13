#define true 1


void fn_82C2EB00(unsigned int param_1,unsigned int param_2,short *param_3)

{
  int iVar1;
  unsigned int uVar2;
  
  *param_3 = -1;
  if ((param_1 & param_2) == 0) {
    return;
  }
  uVar2 = 1;
  iVar1 = 0;
  while( true ) {
    if ((uVar2 & param_1) != 0) {
      *param_3 = *param_3 + 1;
    }
    if ((uVar2 & param_2) != 0) break;
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1;
    if (iVar1 >= 0x20) {
      return;
    }
  }
  return;
}

