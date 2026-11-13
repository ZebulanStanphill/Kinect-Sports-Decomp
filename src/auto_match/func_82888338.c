extern int fn_82887E90();
extern int fn_828886B8();


void fn_82888338(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int iVar7;
  __int64 lVar8;
  
  fn_828886B8();
  iVar1 = fn_82887E90(0xffffffff83212a50);
  uVar5 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x13fc);
  if (0 < (int)*(unsigned int *)(iVar1 + 0x13fc)) {
    iVar1 = *(int *)(iVar1 + 0x1400);
    do {
      puVar6 = (unsigned int *)(iVar1 + 0x194);
      lVar8 = 0x33;
      do {
        puVar6[-0x32] = 0;
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      iVar4 = 0x2ca;
      do {
        iVar7 = 0;
        lVar8 = 0x33;
        do {
          iVar3 = iVar4 + -0x231 + iVar7;
          iVar2 = iVar4 + iVar7;
          iVar7 = iVar7 + 1;
          *(unsigned int *)(iVar3 * 4 + iVar1) = 0;
          *(unsigned int *)(iVar2 * 4 + iVar1) = 0;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        iVar4 = iVar4 + 0x33;
      } while (iVar4 < 0x4fb);
      uVar5 = uVar5 - 1;
      iVar1 = iVar1 + 0x13ec;
    } while (uVar5 != 0);
  }
  return;
}

