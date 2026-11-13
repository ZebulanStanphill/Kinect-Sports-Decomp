#define true 1
extern unsigned int lbl_832960CC;
extern unsigned int lbl_83296190;


void fn_8251D888(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  piVar3 = &lbl_832960CC;
  lVar5 = 4;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && ((lbl_83296190 == piVar3 + -1 || (piVar3[2] != 0)))) {
      if (*(int *)(iVar1 + 0x10) == 1) {
        iVar2 = *(int *)(iVar1 + 0x24);
        if ((iVar2 < 1) || (3 < iVar2)) {
          uVar4 = 0;
        }
        else {
          uVar4 = (unsigned int)LZCOUNT((unsigned int)LZCOUNT(*(int *)((iVar2 + 4) * 4 + iVar1) + -1) >> 5) >> 5;
        }
        if (uVar4 == 0) goto LAB_8251d994;
LAB_8251d94c:
        uVar4 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x24);
        if ((iVar2 < 1) || (3 < iVar2)) goto LAB_8251d94c;
        uVar4 = (unsigned int)LZCOUNT(*(int *)((iVar2 + 4) * 4 + iVar1) + -1) >> 5;
      }
      if ((uVar4 == 0) &&
         ((iVar2 = *(int *)(iVar1 + 0x24), iVar2 < 1 || (*(int *)((iVar2 + 4) * 4 + iVar1) != 1))))
      {
        *(unsigned int *)((iVar2 + 5) * 4 + iVar1) = 1;
        *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
      }
    }
LAB_8251d994:
    piVar3 = piVar3 + 0xc;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}

