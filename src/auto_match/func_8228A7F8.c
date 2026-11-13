extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82520780();
extern int fn_82F68CC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8228A7F8(__int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar5;
  __int64 lVar3;
  unsigned __int64 uVar4;
  double dVar6;
  __int64 lStack_60;
  __int64 lStack_58;
  __int64 lStack_50;
  __int64 alStack_48 [9];
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      dVar6 = (double)lbl_8218E8E8;
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 == 0) {
        uVar2 = 0xffffffff821977e4;
      }
      else {
        uVar2 = 0xffffffff821977d4;
      }
      fn_82520158(uVar2,&lStack_60,0);
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 == 0) {
        uVar2 = 0xffffffff8219780c;
      }
      else {
        uVar2 = 0xffffffff821977f8;
      }
      fn_82520158(uVar2,&lStack_58,0);
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 == 0) {
        uVar2 = 0xffffffff82197830;
      }
      else {
        uVar2 = 0xffffffff82197820;
      }
      fn_82520158(uVar2,&lStack_50,0);
      iVar5 = fn_82520780(dVar6,0xffffffff83265a28);
      if (iVar5 != 0) goto LAB_8228a858;
    }
    else {
      fn_82520158(0xffffffff821977e4,&lStack_60,0);
      fn_82520158(0xffffffff8219780c,&lStack_58,0);
      fn_82520158(0xffffffff82197830,&lStack_50,0);
    }
    uVar2 = 0xffffffff82197858;
  }
  else {
    fn_82520158(0xffffffff821977d4,&lStack_60,0);
    fn_82520158(0xffffffff821977f8,&lStack_58,0);
    fn_82520158(0xffffffff82197820,&lStack_50,0);
LAB_8228a858:
    uVar2 = 0xffffffff82197844;
  }
  fn_82520158(uVar2,alStack_48,0);
  lVar3 = fn_8251F720(&lStack_60,0);
  dVar6 = (double)lbl_821CA460;
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (unsigned int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)(__int64)(int)((uVar4 & 0xffffffff) / 0x24));
    lStack_60 = (__int64)(int)uVar1;
    fn_82F68CC0(param_1,(unsigned __int64)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  lVar3 = fn_8251F720(&lStack_58,0);
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lStack_60 = (__int64)(int)((uVar4 & 0xffffffff) / 0x24);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (unsigned int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)lStack_60);
    lStack_58 = (__int64)(int)uVar1;
    fn_82F68CC0(param_1 + 0x24,(unsigned __int64)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  lVar3 = fn_8251F720(&lStack_50,0);
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (unsigned int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)(__int64)(int)((uVar4 & 0xffffffff) / 0x24));
    lStack_50 = (__int64)(int)uVar1;
    fn_82F68CC0(param_1 + 0x48,(unsigned __int64)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  lVar3 = fn_8251F720(alStack_48,0);
  if (lVar3 != 0) {
    uVar4 = fn_8251FBA8(lVar3);
    lStack_50 = (__int64)(int)((uVar4 & 0xffffffff) / 0x24);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (unsigned int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) *
                  (float)lStack_50);
    alStack_48[0] = (__int64)(int)uVar1;
    fn_82F68CC0(param_1 + 0x6c,(unsigned __int64)uVar1 * 0x24 + lVar3,0x24);
    fn_8251FA58(lVar3);
  }
  return;
}

