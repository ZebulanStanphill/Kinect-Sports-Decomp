typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225C7B8();
extern int fn_8225D930();
extern int fn_8225DD28();
extern int fn_823AB478();
extern int fn_825123E8();
extern int fn_82512610();
extern int fn_82521B20();
extern int fn_825269D0();
extern int fn_828EB518();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_832767C8;
extern unsigned int lbl_8327F668;
extern unsigned int uRam832659d8;


void fn_8225C5F8(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  
  uVar9 = 0;
  do {
    uVar5 = fn_828EB518(uVar9);
    fn_8225DD28(param_1,uVar9,uVar5);
    if (((uVar5 & 0xffffffff) != 0) && (uVar7 = 0, puVar8 = &lbl_83265988, lbl_832659AC != 0)) {
      do {
        if ((unsigned __int64)*puVar8 == (uVar5 & 0xffffffff)) {
          bVar1 = true;
          goto LAB_8225c678;
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 < lbl_832659AC);
    }
    bVar1 = false;
LAB_8225c678:
    if (bVar1) {
LAB_8225c6c4:
      bVar3 = true;
    }
    else {
      uVar7 = 0;
      puVar8 = &lbl_83265988;
      if (lbl_832659AC != 0) {
        do {
          uVar6 = fn_823AB478(*puVar8);
          if ((uVar6 & 0xffffffff) == (uVar9 & 0xffffffff)) {
            bVar1 = true;
            goto LAB_8225c6b8;
          }
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 < lbl_832659AC);
      }
      bVar1 = false;
LAB_8225c6b8:
      bVar3 = false;
      if (bVar1) goto LAB_8225c6c4;
    }
    bVar1 = false;
    if (lbl_832659D4 == '\0') {
      if (((uVar5 & 0xffffffff) == 0) || (bVar4 = 1, bVar3)) {
        bVar4 = 0;
      }
      bVar1 = (bool)((unsigned int)uVar9 == *(unsigned int *)(param_1 + 0x58) & bVar4);
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x58) == (uVar9 & 0xffffffff)) {
        *(unsigned int *)(param_1 + 0x58) = 0xfe;
      }
    }
    if (((uVar5 & 0xffffffff) != 0) || (bVar2 = true, !bVar3)) {
      bVar2 = false;
    }
    if (bVar1) {
      fn_82512610(uVar5,0,1,1);
      lbl_8327F668 = fn_823AB478(uVar5);
      fn_825269D0(0x3e,0);
      fn_8225D930(param_1,uVar5);
    }
    else if (bVar2) {
      fn_825123E8();
      uRam832659d8 = 1;
      fn_82521B20(lbl_832767C8);
    }
    uVar9 = uVar9 + 1;
    if (7 < (uVar9 & 0xffffffff)) {
      fn_8225C7B8(param_1);
      return;
    }
  } while( true );
}

