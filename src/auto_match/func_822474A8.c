extern unsigned int *auStack_80;
extern int fn_82248CC8();
extern int fn_8225F160();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82520780();
extern int fn_828AAF70();
extern int fn_828AB870();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822474A8(int *param_1)

{
  int iVar1;
  float fVar2;
  int iVar9;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int iVar10;
  int iVar11;
  __int64 lVar8;
  int iVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  __int64 lStack_90;
  __int64 lStack_88;
  unsigned int auStack_80 [2];
  __int64 lStack_78;
  
  iVar9 = fn_8225F160();
  auStack_80[0] = *(unsigned int *)(iVar9 + 0x14);
  if (auStack_80[0] == 0) {
    fn_82520158(0xffffffff821977d4,&lStack_90,0);
    uVar3 = 0xffffffff821977e4;
  }
  else if (auStack_80[0] == 1) {
    fn_82520158(0xffffffff821977f8,&lStack_90,0);
    uVar3 = 0xffffffff8219780c;
  }
  else if (auStack_80[0] < 3) {
    fn_82520158(0xffffffff82197820,&lStack_90,0);
    uVar3 = 0xffffffff82197830;
  }
  else {
    if (auStack_80[0] != 3) goto LAB_8224756c;
    fn_82520158(0xffffffff82197844,&lStack_90,0);
    uVar3 = 0xffffffff82197858;
  }
  fn_82520158(uVar3,&lStack_88,0);
LAB_8224756c:
  uVar4 = fn_8251F720(&lStack_90,0);
  uVar5 = fn_8251F720(&lStack_88,0);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar9 = 0;
  }
  else {
    uVar6 = fn_8251FBA8(uVar4);
    iVar9 = (int)((uVar6 & 0xffffffff) / 0x24);
  }
  if ((uVar5 & 0xffffffff) == 0) {
    iVar12 = 0;
  }
  else {
    uVar6 = fn_8251FBA8(uVar5);
    iVar12 = (int)((uVar6 & 0xffffffff) / 0x24);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8251FA58(uVar4);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_8251FA58(uVar5);
  }
  dVar14 = (double)lbl_8218E8E8;
  uVar4 = 0;
  dVar15 = (double)lbl_821CA460;
  do {
    lVar7 = fn_82520780(dVar14,0xffffffff83265a28);
    do {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      if ((int)lVar7 == 0) {
        lStack_78 = (__int64)iVar12;
        fVar2 = (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar15) *
                (float)lStack_78;
      }
      else {
        lStack_90 = (__int64)iVar9;
        fVar2 = (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar15) *
                (float)lStack_90;
      }
      iVar1 = (int)fVar2;
      lStack_88 = (__int64)iVar1;
      iVar10 = (**(int (***)())(*param_1 + 8))(param_1);
      iVar11 = (**(int (***)())(*param_1 + 8))(param_1);
      piVar13 = (int *)(iVar11 + 0x294);
      while ((piVar13 != (int *)(iVar10 + 0x780) &&
             (iVar11 = (**(int (***)())(*piVar13 + 0x3c))(piVar13), iVar11 != iVar1))) {
        piVar13 = piVar13 + 0x15;
      }
      iVar10 = (**(int (***)())(*param_1 + 8))(param_1);
    } while (piVar13 != (int *)(iVar10 + 0x780));
    lVar8 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_828AB870(uVar4 + lVar8 + 0x294,iVar1);
    lVar8 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_828AAF70(uVar4 + lVar8 + 0x780,lVar7 != 0);
    uVar4 = uVar4 + 0x54;
  } while ((uVar4 & 0xffffffff) < 0x4ec);
  lVar7 = (**(int (***)())(*param_1 + 8))(param_1);
  fn_82248CC8(lVar7 + 0x240,auStack_80);
  *(unsigned char *)(param_1 + 0x20) = 1;
  return;
}

