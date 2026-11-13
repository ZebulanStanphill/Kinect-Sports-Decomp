typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();


bool fn_82B176C0(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  if (4 < uVar2) {
    if (uVar2 < 9) {
      return true;
    }
    if (0x18 < uVar2) {
      if (uVar2 < 0x1d) {
        return true;
      }
      if (uVar2 == 0x7c) {
        uVar2 = *(unsigned int *)(param_2 + 8);
        iVar1 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
        return (*(unsigned int *)(iVar1 + param_2 + -8) & 0x60000000) == 0x20000000;
      }
    }
  }
  return false;
}

