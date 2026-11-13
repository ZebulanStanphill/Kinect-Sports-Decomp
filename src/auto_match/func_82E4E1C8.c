typedef unsigned char bool;
#define true 1


bool fn_82E4E1C8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar2 = iVar1 == 0x32315659 || iVar1 == 0x32595559;
  if ((iVar1 != 0) && (iVar1 != 3)) {
    return bVar2;
  }
  if (*(short *)(param_1 + 0xe) != 0x20) {
    return bVar2;
  }
  return true;
}

