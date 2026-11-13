typedef unsigned char bool;
#define true 1


void fn_82814560(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  bVar1 = param_2 == param_1;
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar4 = iVar2 + 0x58;
  while ((uVar4 < iVar2 + 0x80U && (!bVar1))) {
    if (param_2 == *(int *)(uVar4 + 4)) {
      bVar1 = true;
    }
    uVar4 = uVar4 + 0x14;
  }
  uVar4 = *(unsigned int *)(param_1 + 0x30);
  uVar3 = (unsigned int)*(unsigned char *)(iVar2 + 0x51) * 0x21 + uVar4;
  while( true ) {
    if (uVar3 <= uVar4) {
      return;
    }
    if (bVar1) break;
    if (param_2 == *(int *)(uVar4 + 0xd)) {
      bVar1 = true;
    }
    uVar4 = uVar4 + 0x21;
  }
  return;
}

