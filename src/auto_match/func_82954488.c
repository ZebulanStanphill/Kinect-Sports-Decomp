typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82975B00();


unsigned __int64 fn_82954488(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  bool bVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  bVar4 = false;
  uVar6 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar5 = 0;
    do {
      *(unsigned int *)(param_1 + 0x100) = uVar6;
      puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar5);
      *(unsigned int **)(param_1 + 0x104) = puVar1;
      uVar3 = *puVar1 & 0xfff00000;
      if (((*puVar1 & 0xfff00000) != 0) && (puVar1[1] != 0)) {
        iVar2 = *(int *)(*(int *)puVar1[2] * 4 + *(int *)(param_1 + 0x14));
        if (((uVar3 == 0x60500000) ||
            ((((uVar3 == 0x60700000 || (uVar3 == 0x60800000)) || (uVar3 == 0x60900000)) ||
             ((uVar3 == 0x60600000 || (uVar3 == 0x60000000)))))) ||
           ((uVar3 == 0x60200000 ||
            (((uVar3 == 0x60300000 || (uVar3 == 0x60400000)) || (uVar3 == 0x60100000)))))) {
          if ((*(unsigned int *)(iVar2 + 0x3c) & 0xc00000) != 0) {
            bVar4 = true;
          }
          uVar7 = 0x200000;
        }
        else if ((((uVar3 == 0x60a00000) || (uVar3 == 0x60c00000)) || (uVar3 == 0x60d00000)) ||
                ((uVar3 == 0x60e00000 || (uVar3 == 0x60b00000)))) {
          if ((*(unsigned int *)(iVar2 + 0x3c) & 0xa00000) != 0) {
            bVar4 = true;
          }
          uVar7 = 0x400000;
        }
        else {
          if (((uVar3 != 0x60f00000) && (uVar3 != 0x61100000)) &&
             ((uVar3 != 0x61200000 && ((uVar3 != 0x61300000 && (uVar3 != 0x61000000))))))
          goto LAB_82954624;
          if ((*(unsigned int *)(iVar2 + 0x3c) & 0x600000) != 0) {
            bVar4 = true;
          }
          uVar7 = 0x800000;
        }
        *(unsigned int *)(iVar2 + 0x3c) = uVar7;
      }
LAB_82954624:
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < *(unsigned int *)(param_1 + 0xc));
    if (bVar4) {
      fn_82975B00(param_1,0,0x11bb,0xffffffff82037bc8);
      return 0xffffffff80004005;
    }
  }
  return 0;
}

