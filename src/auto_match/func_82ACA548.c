typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82ACA548(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  if (((uVar1 >> 5 & 1) == 0) && ((uVar1 & 0x800000) == 0)) {
    uVar1 = uVar1 >> 7 & 0x7f;
    if ((uVar1 == 0x7d) || (bVar2 = false, uVar1 == 0x7c)) {
      bVar2 = true;
    }
    if ((!bVar2) && (uVar1 != 0x78)) {
      return 0;
    }
  }
  return 1;
}

