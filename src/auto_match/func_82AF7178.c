#define true 1


void fn_82AF7178(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_2 + 0x1c);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  while( true ) {
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0xf80) {
      *(unsigned int *)(uVar1 + 8) = *(unsigned int *)(uVar1 + 8) & 0xffffc07f | 0x180;
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
    if ((uVar1 & 1) != 0) break;
    if (uVar1 == 0) {
      return;
    }
  }
  return;
}

