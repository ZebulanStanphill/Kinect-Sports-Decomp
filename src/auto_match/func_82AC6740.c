typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();


unsigned __int64 fn_82AC6740(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  unsigned int *puVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar1 == 0) || (bVar3 = true, 0x66 < uVar1)) {
    bVar3 = false;
  }
  if (!bVar3) {
    if (uVar1 < 0x69) {
      return 0;
    }
    if (0x6d < uVar1) {
      if (uVar1 == 0x75) {
        iVar2 = fn_82ABDD90(*(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x75,0,0);
        puVar4 = (unsigned int *)(iVar2 + (param_1 - 0x10));
        if ((*puVar4 & 7) != 7) {
          return 0;
        }
        uVar1 = puVar4[1];
        if (uVar1 == 2) {
          return 1;
        }
        bVar3 = uVar1 == 3;
      }
      else {
        bVar3 = uVar1 == 0x7b;
      }
      if (!bVar3) {
        return 0;
      }
    }
  }
  return 1;
}

