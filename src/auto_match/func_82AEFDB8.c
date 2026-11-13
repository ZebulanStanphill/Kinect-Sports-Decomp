typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();


unsigned __int64 fn_82AEFDB8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  if ((uVar2 == 0x7d) || (bVar1 = false, uVar2 == 0x7c)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
    if ((uVar2 < 0x60) || (bVar1 = true, 0x66 < uVar2)) {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    if (uVar2 == 0x75) {
      iVar3 = fn_82ABDD90(param_3,0x75,0,0);
      uVar2 = *(unsigned int *)(iVar3 + param_1 + -0x10) & 7;
      if ((uVar2 < 4) || (bVar1 = true, 6 < uVar2)) {
        bVar1 = false;
      }
      if ((bVar1) && (((~(unsigned __int64)*(unsigned int *)(param_3 + 0x34) & 0xffffffff) >> 7 & 1) != 0)) {
        return 0;
      }
    }
  }
  return 1;
}

