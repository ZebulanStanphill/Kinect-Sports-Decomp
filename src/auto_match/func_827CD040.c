extern int fn_827CCF90();

void fn_827CD040(int param_1)
{
  int iVar1;
  int iVar2;
  unsigned int uVar6;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int key;

  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    piVar4 = (int *)(iVar1 + 0x30);
    do {
      key = piVar4[-4];
      iVar2 = 0;
      if (0 < iVar5) {
        piVar3 = (int *)(iVar1 + 0x20);
        do {
          if (key == *piVar3) {
            uVar6 = *(unsigned int *)((iVar2 + 0xd) * 4 + iVar1);
            if (uVar6 != 0) goto LAB_827cd0b8;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar5);
      }
      uVar6 = fn_827CCF90(param_1, key);
LAB_827cd0b8:
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      *piVar4 = uVar6;
    } while (iVar5 < *(int *)(param_1 + 100));
  }
}
