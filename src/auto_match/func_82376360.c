typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_82250A18();
extern int fn_822AF138();
extern int fn_822D5B50();
extern int fn_822D5C30();
extern int fn_8247B210();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_5c;


void fn_82376360(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar5;
  char cVar6;
  unsigned __int64 uVar4;
  bool bVar7;
  int iVar8;
  unsigned int *puStack_60;
  unsigned int uStack_5c;
  int aiStack_58 [2];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  unsigned char auStack_40 [4];
  unsigned int *puStack_3c;
  
  bVar7 = false;
  aiStack_58[0] = 0;
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if ((*(char *)(iVar5 + 4) != '\0') && (*(int *)(param_1 + 4) != 0)) {
    cVar6 = fn_828ACCE8();
    if (cVar6 != '\0') {
      uVar4 = fn_828A12E8(*(unsigned int *)(param_1 + 4));
      uVar4 = fn_8288F948(uVar4,10);
      fn_8224E928(auStack_40,uVar4);
      puStack_60 = (unsigned int *)*puStack_3c;
      while (puStack_60 != puStack_3c) {
        iVar5 = puStack_60[5];
        iVar1 = *(int *)(iVar5 + 0xbc);
        if (iVar1 == 0) {
LAB_82376490:
          bVar3 = false;
LAB_82376494:
          if (bVar7) {
            bVar7 = false;
            if (iStack_44 != 0) {
              fn_822315A0();
            }
          }
          if (bVar3) {
            fn_822D5B50(iVar5,*(unsigned int *)(*(int *)(iVar1 + 0x110) + 0x18));
          }
        }
        else {
          cVar6 = fn_8288B760(iVar5);
          iVar8 = *(int *)(iVar1 + 0x110) + 4;
          uVar2 = *(unsigned int *)(*(int *)(iVar1 + 0x110) + 0x18);
          if (cVar6 != '\0') {
            bVar7 = true;
            fn_8247B210(&iStack_48,iVar8,uVar2);
            bVar3 = true;
            if (iStack_48 == 0) goto LAB_82376490;
            goto LAB_82376494;
          }
          fn_8247B210(&iStack_50,iVar8,uVar2);
          uStack_5c = 0;
          if (iStack_50 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iStack_50 + 4);
          }
          fn_822D5C30(iVar5,aiStack_58,&uStack_5c);
          if ((iVar8 != aiStack_58[0]) && (aiStack_58[0] != 0)) {
                    /* WARNING: Subroutine does not return */
            fn_822AF138(*(unsigned int *)(iVar1 + 0x110));
          }
          if (iStack_4c != 0) {
            fn_822315A0();
          }
        }
        fn_82248B90(&puStack_60);
      }
      fn_8224ED20(aiStack_58,auStack_40,*puStack_3c);
      fn_8265CA20(puStack_3c);
    }
  }
  return;
}

