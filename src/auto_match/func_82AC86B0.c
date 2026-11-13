typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82AC86B0(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar2 == 0) || (bVar1 = true, 0x52 < uVar2)) {
    bVar1 = false;
  }
  if (!bVar1) {
    if (uVar2 == 0x60) {
      return 3;
    }
    if ((uVar2 < 0x60) || (bVar1 = true, 0x66 < uVar2)) {
      bVar1 = false;
    }
    if (bVar1) {
      return 2;
    }
    if ((uVar2 < 0x53) || (bVar1 = true, 0x5f < uVar2)) {
      bVar1 = false;
    }
    if ((bVar1) || (uVar2 == 0x6a)) {
      return 4;
    }
    if (uVar2 != 0x6e) {
      return 0;
    }
  }
  return 1;
}

