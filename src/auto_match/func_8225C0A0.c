extern int fn_8225C590();
extern int fn_8225D388();
extern int fn_8225D8B8();
extern int fn_823AB478();
extern unsigned int lbl_83265988;


void fn_8225C0A0(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  
  iVar2 = fn_8225C590();
  iVar4 = 1;
  uVar6 = 0;
  uVar3 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) >> 2;
  if (0 < (int)uVar3) {
    iVar5 = 0;
    do {
      if (uVar6 < uVar3) {
        iVar7 = *(int *)(iVar5 + *(int *)(iVar2 + 0x10));
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == lbl_83265988) {
LAB_8225c140:
        iVar5 = iVar5 + 4;
        uVar6 = uVar6 + 1;
      }
      else {
        if (iVar4 != param_1) {
          iVar4 = iVar4 + 1;
          goto LAB_8225c140;
        }
        fn_8225D8B8(iVar2,iVar7);
        if (*(char *)(iVar7 + 0xd8) != '\0') {
          uVar1 = fn_823AB478(iVar7);
          fn_8225D388(iVar2,uVar1);
        }
      }
      uVar3 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) >> 2;
    } while ((int)uVar6 < (int)uVar3);
  }
  return;
}

