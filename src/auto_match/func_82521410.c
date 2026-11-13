typedef unsigned char bool;
extern int fn_825129C8();
extern int fn_82512A48();
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_83265A60;
extern unsigned int lbl_83265A64;


void fn_82521410(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (lbl_83265A58 == 0) {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = 1;
  }
  else if (lbl_83265A58 == 1) {
    if (iVar2 != 0) {
      return;
    }
    iVar2 = 0;
  }
  else {
    if (lbl_83265A58 != 7) {
      return;
    }
    if (iVar2 != 0) {
      return;
    }
    iVar2 = 0;
  }
  if (lbl_83265A58 == 1) {
    iVar3 = lbl_83265A60 + -1;
    bVar1 = lbl_83265A60 == 1;
    lbl_83265A60 = iVar3;
    if ((bVar1) && (lbl_83265A64 != 0)) {
      fn_82512A48(lbl_83265A64);
      lbl_83265A64 = 0;
    }
  }
  else if (lbl_83265A58 == 3) {
    lbl_83265A5C = lbl_83265A5C & 0xfffffffd;
  }
  else if (lbl_83265A58 == 5) {
    lbl_83265A5C = lbl_83265A5C & 0xfffffffb;
  }
  else if (lbl_83265A58 == 7) {
    lbl_83265A5C = lbl_83265A5C & 0xfffffffe;
  }
  lbl_83265A58 = iVar2;
  if (iVar2 == 1) {
    if (((lbl_83265A60 == 0) && (lbl_83265A5C == 0)) && (lbl_83265A64 == 0)) {
      lbl_83265A64 = fn_825129C8(0);
    }
    lbl_83265A60 = lbl_83265A60 + 1;
  }
  else if (iVar2 == 2) {
    lbl_83265A5C = lbl_83265A5C | 2;
  }
  else if (iVar2 == 4) {
    lbl_83265A5C = lbl_83265A5C | 4;
  }
  else if (iVar2 == 6) {
    lbl_83265A5C = lbl_83265A5C | 1;
  }
  return;
}

