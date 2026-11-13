typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();


unsigned int fn_82B17130(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if (uVar1 != 0x60) {
    if (((uVar1 == 0x61) || (uVar1 == 99)) || (bVar2 = false, uVar1 == 100)) {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 8);
  iVar3 = fn_82ABDD90(param_2,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  return *(unsigned int *)(iVar3 + param_1 + -4);
}

