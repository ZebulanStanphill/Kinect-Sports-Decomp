extern int fn_829CFFE0();
extern int fn_829D02F0();
extern unsigned int lbl_8326183C;


void fn_82F4D720(void)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  
  iVar4 = 0;
  uVar6 = 0;
  iVar3 = lbl_8326183C;
  do {
    iVar1 = iVar4 + iVar3;
    if (*(int *)(iVar1 + 0x14) != 0) {
      uVar2 = *(int *)(iVar1 + 0x10) + 1;
      iVar5 = uVar2 + (((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) & 0x7fffffff)
                      * -2;
      iVar1 = fn_829CFFE0(*(unsigned int *)(iVar1 + 4),0,(uVar6 + iVar5 + 2) * 4 + iVar3);
      iVar3 = lbl_8326183C;
      if (-1 < iVar1) {
        iVar3 = *(int *)(iVar4 + lbl_8326183C + 0x10);
        if (iVar3 != -1) {
          fn_829D02F0(*(unsigned int *)(iVar4 + lbl_8326183C + 4),
                            *(unsigned int *)((iVar3 + uVar6 + 2) * 4 + lbl_8326183C));
        }
        iVar3 = lbl_8326183C;
        *(int *)(iVar4 + lbl_8326183C + 0x10) = iVar5;
      }
    }
    uVar6 = uVar6 + 5;
    iVar4 = iVar4 + 0x14;
  } while (uVar6 < 0xf);
  return;
}

