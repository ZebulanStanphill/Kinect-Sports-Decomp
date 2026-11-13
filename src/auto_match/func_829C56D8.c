extern unsigned int lbl_82006848;
extern unsigned int lbl_83214E10;
extern unsigned int lbl_83214E1C;
extern unsigned int lbl_83214E20;
extern unsigned int lbl_83214E30;
extern unsigned int lbl_83214F3C;
extern unsigned int lbl_83214F50;


void fn_829C56D8(unsigned int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (param_1 < 0x1a) {
    if (param_1 == 0x19) {
      param_1 = 4;
LAB_829c5748:
      XamNuiCameraElevationStopMovement();
    }
    else if (param_1 == 0) {
      param_1 = 0;
    }
    else if (param_1 == 5) {
      param_1 = 8;
    }
    else {
      if (param_1 != 0x15) goto LAB_829c573c;
      param_1 = 2;
    }
  }
  else if (param_1 == 0x1f) {
    param_1 = 5;
  }
  else if (param_1 == 0x3e3) {
    param_1 = 7;
  }
  else {
LAB_829c573c:
    if (param_1 == 4) goto LAB_829c5748;
  }
  if (3 < lbl_83214F50) {
    return;
  }
  if (lbl_83214F50 == 0) {
    if (param_1 != 3) {
      return;
    }
  }
  else if (lbl_83214F50 == 1) {
    uVar2 = 0xffffffff83214e20;
    uVar1 = 0x2b00c;
    lbl_83214E30 = lbl_83214F3C * lbl_82006848;
    lbl_83214E20 = param_1;
    goto LAB_829c57dc;
  }
  uVar2 = 0xffffffff83214e10;
  uVar1 = 0x2b006;
  lbl_83214E1C = lbl_83214F3C * lbl_82006848;
  lbl_83214E10 = param_1;
LAB_829c57dc:
  XamNuiCameraTiltReportStatus(uVar1,uVar2);
  return;
}

