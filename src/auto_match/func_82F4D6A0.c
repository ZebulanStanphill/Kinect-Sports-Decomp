extern int fn_829D1AD8();
extern unsigned int lbl_831BA870;
extern unsigned int lbl_8326183C;


void fn_82F4D6A0(void)

{
  unsigned char **ppuVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned char **ppuVar6;
  int iVar7;
  
  ppuVar6 = &lbl_831BA870;
  iVar7 = 0;
  lVar5 = 3;
  iVar2 = lbl_8326183C;
  do {
    *(unsigned int *)(iVar7 + iVar2 + 4) = 0;
    ppuVar1 = ppuVar6 + 2;
    ppuVar6 = ppuVar6 + 3;
    uVar3 = fn_829D1AD8(*ppuVar1,*ppuVar6,0,2,0,iVar7 + iVar2 + 4);
    iVar2 = lbl_8326183C;
    iVar4 = iVar7 + lbl_8326183C;
    lVar5 = lVar5 + -1;
    iVar7 = iVar7 + 0x14;
    *(unsigned int *)(iVar4 + 0x10) = 0;
    *(unsigned int *)(iVar4 + 0x14) = (unsigned int)((uVar3 & 0xffffffff) >> 0x1f) ^ 1;
  } while (lVar5 != 0);
  return;
}

