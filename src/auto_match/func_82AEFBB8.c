typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82AEFBB8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  
  uVar1 = param_2 & 0x1e;
  uVar3 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar3 < 0x60) || (bVar2 = true, 0x66 < uVar3)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = param_2 & 0xe;
  }
  else {
    if ((uVar3 == 0) || (bVar2 = true, 0x52 < uVar3)) {
      bVar2 = false;
    }
    if (bVar2) {
      return true;
    }
  }
  return uVar1 == 0;
}

