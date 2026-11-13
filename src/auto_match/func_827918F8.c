extern int fn_826BCD88();
extern int fn_82791560();
extern int fn_827917E8();


void fn_827918F8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  if (*(int *)(param_1 + 4) == 7) {
    fn_827917E8();
    puVar6 = (unsigned int *)(param_1 + 8);
    uVar5 = *(unsigned int *)(param_1 + 8);
    uVar4 = *(unsigned int *)(param_1 + 0x10);
    if (uVar5 < uVar4) {
      do {
        uVar1 = *(unsigned int *)(param_1 + 0x14);
        iVar2 = fn_826BCD88(0xffffffff820083c8,uVar1 & 0xffff);
        if ((iVar2 == 0) || (uVar1 == 0x3d)) break;
        fn_82791560(puVar6);
        uVar5 = *puVar6;
        uVar4 = *(unsigned int *)(param_1 + 0x10);
      } while (uVar5 < uVar4);
      if (uVar5 < uVar4) {
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0x3d) {
          fn_82791560(puVar6);
          fn_827917E8(param_1);
          *(unsigned int *)(param_1 + 4) = 8;
        }
        else if ((iVar2 == 0x2f) || (iVar2 == 0x3e)) {
          *(unsigned int *)(param_1 + 4) = 9;
        }
        else {
          *(unsigned int *)(param_1 + 4) = 1;
        }
        goto LAB_827919c8;
      }
    }
    uVar3 = 1;
LAB_82791a48:
    *(unsigned int *)(param_1 + 4) = uVar3;
  }
  else {
LAB_827919c8:
    if (*(int *)(param_1 + 4) != 8) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if ((iVar2 == 0x22) || (iVar2 == 0x27)) {
      puVar6 = (unsigned int *)(param_1 + 8);
      do {
        fn_82791560(puVar6);
        if (*(unsigned int *)(param_1 + 0x10) <= *puVar6) goto LAB_82791a18;
      } while (*(int *)(param_1 + 0x14) != iVar2);
      if (*puVar6 < *(unsigned int *)(param_1 + 0x10)) {
        fn_82791560(puVar6);
        fn_827917E8(param_1);
        if ((*(int *)(param_1 + 0x14) == 0x3e) || (*(int *)(param_1 + 0x14) == 0x2f)) {
          *(unsigned int *)(param_1 + 4) = 9;
          return;
        }
        uVar3 = 7;
        goto LAB_82791a48;
      }
    }
LAB_82791a18:
    *(unsigned int *)(param_1 + 4) = 1;
  }
  return;
}

