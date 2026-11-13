typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822B17A8();
extern int fn_8259BDA8();


void fn_82448E88(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *apuStack_40 [16];
  
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x48) + 0x34);
  apuStack_40[0] = (unsigned int *)*puVar1;
  while (apuStack_40[0] != puVar1) {
    piVar2 = *(int **)(param_1 + 0x40);
    bVar3 = false;
    uVar4 = 0;
    if ((piVar2[0x4a] - piVar2[0x49]) / 0x5c != 0) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar5 + piVar2[0x49]) == *(int *)(apuStack_40[0][3] + 0x2c)) {
          iVar5 = uVar4 + 1;
          goto LAB_82448f18;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x5c;
      } while (uVar4 < (unsigned int)((piVar2[0x4a] - piVar2[0x49]) / 0x5c));
    }
    iVar5 = 1;
LAB_82448f18:
    if (iVar5 == 1) {
      if ((((1 < *(int *)(*(int *)(*piVar2 + 0x174) + 0xbc)) ||
           (iVar5 = *(int *)(*piVar2 + 0xa0), iVar5 == 0)) || (*(int *)(iVar5 + 0x40) != 2)) &&
         ((iVar5 = *(int *)(apuStack_40[0][3] + 0x24), iVar5 != 0 &&
          (iVar5 = *(int *)(iVar5 + 0x34), iVar5 != 0)))) {
        fn_822B17A8(iVar5,0x2e,0);
      }
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    fn_8259BDA8(apuStack_40);
  }
  *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x40) = 1;
  return;
}

