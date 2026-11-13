#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))


void fn_82CE5458(unsigned char *param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  
  iVar1 = *param_2;
  uVar2 = 0xffffffff82131f88;
  if (0x3c23d709 < iVar1) {
    uVar4 = 0xffffffff82132388;
    if (iVar1 < 0x4358ccce) {
      uVar4 = 0xffffffff82132188;
    }
    else {
      uVar2 = 0xffffffff82132188;
    }
    uVar3 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar3 < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
    uVar4 = ((uVar3 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar4 < iVar1) {
      uVar2 = uVar4;
      uVar4 = uVar3;
    }
    uVar3 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar3 < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
    uVar4 = ((uVar3 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar4 < iVar1) {
      uVar2 = uVar4;
      uVar4 = uVar3;
    }
    uVar3 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar3 < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
    uVar4 = ((uVar3 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    if (*(int *)uVar4 < iVar1) {
      uVar2 = uVar4;
      uVar4 = uVar3;
    }
    uVar2 = ((uVar4 & 0xffffffff) >> 1) + ((uVar2 & 0xffffffff) >> 1);
    piVar5 = (int *)uVar2;
    if ((*piVar5 < iVar1) && (uVar2 < ZEXT48("It$ "))) {
      piVar5 = piVar5 + 1;
    }
    *param_1 = (char)((int)(piVar5 + 0x1f7b381e) >> 2);
    return;
  }
  *param_1 = 0;
  return;
}

