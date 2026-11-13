typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829D76B8();
extern int fn_829DFF40();
extern int fn_829E00C0();
extern unsigned int lbl_832179FC;
extern unsigned int *lbl_83217A00;


void fn_829D85D8(unsigned int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  unsigned int uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar9);
  iVar3 = lbl_832179FC;
  uVar7 = 0;
  piVar8 = (int *)(lbl_832179FC + 0x96c);
  do {
    if (*piVar8 == param_1[7]) {
      bVar2 = true;
      goto LAB_829d8634;
    }
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 0x18;
  } while (uVar7 < 2);
  bVar2 = false;
LAB_829d8634:
  if (!bVar2) {
    iVar4 = param_1[3] * 0x150 + lbl_832179FC;
    iVar6 = param_1[5] * 0xd4d0 + lbl_832179FC;
    iVar10 = param_1[4] * 0x11fb0 + lbl_832179FC + 0xa10;
    iVar1 = param_1[5] * 0x18 + lbl_832179FC;
    if ((*(int *)(iVar4 + 0x208) != 2) || (bVar2 = true, param_1[7] != *(int *)(iVar4 + 0x204))) {
      bVar2 = false;
    }
    if (bVar2) {
      iVar4 = fn_829DFF40(iVar10);
      if (iVar4 != 0) {
        if (lbl_83217A00 == (int *)0x0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (**(int (***)())(*lbl_83217A00 + 0x20))(lbl_83217A00,*param_1,param_1[7],param_1 + 6);
        }
        if (cVar5 == '\0') {
          param_1[6] = param_1[5];
          fn_829E00C0(iVar6 + 0x249b0,iVar10);
          *(unsigned int *)(iVar1 + 8) = 1;
          *(unsigned char *)(iVar3 + 0x24975) = 1;
          param_1[1] = param_1[1] & 0xfffffffe;
          if (lbl_83217A00 != (int *)0x0) {
            (**(int (***)())(*lbl_83217A00 + 8))(lbl_83217A00,param_1[5],param_1[3]);
          }
        }
      }
    }
    else {
      fn_829D76B8(0,param_1,0xffffffff83010008);
    }
  }
  RtlLeaveCriticalSection(iVar9);
  return;
}

