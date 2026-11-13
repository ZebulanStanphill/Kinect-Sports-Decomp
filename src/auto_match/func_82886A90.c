typedef unsigned char bool;
extern int fn_82886A20();
extern int fn_82887E80();
extern unsigned int lbl_83212A1C;


void fn_82886A90(int param_1,int param_2,int param_3)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned char *puVar12;
  int iVar13;
  
  iVar6 = lbl_83212A1C;
  iVar11 = param_2 * 4;
  iVar10 = *(int *)(iVar11 + param_1);
  iVar13 = iVar10 + 0x1c;
  iVar9 = *(int *)(iVar10 + 0xc);
  *(int *)(iVar10 + 0xc) = param_3;
  uVar3 = 1 << (*(unsigned int *)(iVar11 + iVar6) & 0x3f);
  uVar8 = (uVar3 >> 2) + iVar9;
  if (uVar3 <= uVar8) {
    uVar8 = uVar8 - uVar3;
  }
  uVar7 = (uVar3 >> 2) + param_3;
  if (uVar3 <= uVar7) {
    uVar7 = uVar7 - uVar3;
  }
  uVar3 = uVar8 >> 3;
  uVar4 = uVar7 >> 3;
  iVar10 = uVar8 - (uVar8 & 0xfffffff8);
  iVar9 = uVar7 - (uVar7 & 0xfffffff8);
  if ((uVar3 != uVar4) || (uVar8 = uVar3, iVar9 < iVar10)) {
    bVar2 = *(unsigned char *)(uVar3 + iVar13);
    uVar7 = (1 << (iVar10 + 1U & 0x3f)) + 0xff;
    uVar5 = fn_82887E80();
    fn_82886A20(uVar5,param_2,~((unsigned int)bVar2 | uVar7 & 0xff) & 0xff);
    iVar6 = lbl_83212A1C;
    uVar8 = uVar3 + 1;
    *(unsigned char *)(uVar3 + iVar13) = *(unsigned char *)(uVar3 + iVar13) & (unsigned char)uVar7;
  }
  bVar1 = uVar8 == uVar4;
  if (uVar4 < uVar8) {
    uVar7 = *(unsigned int *)(iVar11 + iVar6);
    for (; uVar8 != (1 << (uVar7 & 0x3f)) + 7U >> 3; uVar8 = uVar8 + 1) {
      bVar2 = *(unsigned char *)(uVar8 + iVar13);
      uVar5 = fn_82887E80();
      fn_82886A20(uVar5,param_2,~bVar2);
      *(unsigned char *)(uVar8 + iVar13) = 0;
    }
    uVar8 = 0;
    bVar1 = uVar4 == 0;
  }
  if (!bVar1) {
    do {
      bVar2 = *(unsigned char *)(uVar8 + iVar13);
      puVar12 = (unsigned char *)(uVar8 + iVar13);
      uVar5 = fn_82887E80();
      fn_82886A20(uVar5,param_2,~bVar2);
      uVar8 = uVar8 + 1;
      *puVar12 = 0;
    } while (uVar8 != uVar4);
  }
  if ((uVar3 != uVar4) || (iVar9 < iVar10)) {
    bVar2 = *(unsigned char *)(uVar4 + iVar13);
    uVar8 = 0xff << (iVar9 + 1U & 0x3f);
    uVar5 = fn_82887E80();
    fn_82886A20(uVar5,param_2,~((unsigned int)bVar2 | uVar8 & 0xff) & 0xff);
    *(unsigned char *)(uVar4 + iVar13) = *(unsigned char *)(uVar4 + iVar13) & (unsigned char)uVar8;
  }
  if ((uVar3 == uVar4) && (iVar10 < iVar9)) {
    bVar2 = *(unsigned char *)(uVar4 + iVar13);
    uVar3 = (1 << (iVar10 + 1U & 0x3f)) + 0xffU | 0xff << (iVar9 + 1U & 0x3f);
    uVar5 = fn_82887E80();
    fn_82886A20(uVar5,param_2,~((unsigned int)bVar2 | uVar3 & 0xff) & 0xff);
    *(unsigned char *)(uVar4 + iVar13) = *(unsigned char *)(uVar4 + iVar13) & (unsigned char)uVar3;
  }
  return;
}

