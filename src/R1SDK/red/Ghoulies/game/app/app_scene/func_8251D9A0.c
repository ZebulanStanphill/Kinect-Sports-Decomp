extern int fn_825269D0();
extern int (*lbl_83276778)();
extern int (*lbl_83276794)();
extern unsigned int lbl_8327F734;
extern unsigned int lbl_832960A4;
extern unsigned int lbl_832960AC;
extern unsigned int lbl_832960B8;
extern unsigned int lbl_832960C0;
extern unsigned int lbl_832960C4;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83297830;


void fn_8251D9A0(void)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  
  if (lbl_832960AC != 0) {
    if (lbl_83276794 == (int (**)())0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*lbl_83276794)();
    }
    if ((iVar3 == 0) && (lbl_832960C4 != 0)) {
      return;
    }
    lbl_832960A4 = 2;
    lbl_832960AC = 0;
    return;
  }
  if (lbl_832960C0 == 0) {
    if ((lbl_83297830 == '\0') && (lbl_8327F734 != 0)) {
      fn_825269D0(0x2d,0);
      lbl_83297830 = '\x01';
      goto LAB_8251dad8;
    }
    if (lbl_83276778 == (int (**)())0x0) goto LAB_8251dad8;
    uVar2 = 0;
    uVar4 = 0xc98;
  }
  else {
    if (lbl_83276778 == (int (**)())0x0) goto LAB_8251dad8;
    uVar2 = 1;
    uVar4 = 0xc8b;
  }
  (*lbl_83276778)(uVar2,(-(unsigned __int64)lbl_832960B8 & ~(unsigned __int64)lbl_832960B8 & 0xffffffff) >> 0x1f,0
                  ,0xffffffff821c2b80,0xffffffff821c2b20,uVar4);
LAB_8251dad8:
  lbl_832960C0 = 0;
  lbl_832960AC = 1;
  if (lbl_8329618C == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar3 != 0) {
    if (lbl_8329618C == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lbl_8329618C + 4);
    }
    iVar1 = *(int *)(iVar3 + 0x24);
    if ((iVar1 < 1) || (*(int *)((iVar1 + 4) * 4 + iVar3) != 0)) {
      *(unsigned int *)((iVar1 + 5) * 4 + iVar3) = 0;
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
    }
  }
  return;
}

