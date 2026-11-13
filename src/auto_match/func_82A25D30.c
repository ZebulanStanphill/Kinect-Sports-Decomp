extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E338();
extern int fn_82A1E508();
extern int fn_82A1E6A0();
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219BBC;
extern unsigned int lbl_83219BC4;
extern unsigned int lbl_83219C04;
extern unsigned int lbl_83219C08;
extern unsigned int lbl_83219C18;
extern unsigned int lbl_83219C1C;
extern unsigned int lbl_83219C20;
extern unsigned int lbl_83219C24;


unsigned __int64 fn_82A25D30(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  lbl_83219C04 = &lbl_83219C04;
  lbl_83219C08 = &lbl_83219C04;
  lbl_83219C18 = &lbl_83219C18;
  lbl_83219C20 = &lbl_83219C20;
  lbl_83219C1C = &lbl_83219C18;
  lbl_83219C24 = &lbl_83219C20;
  lbl_83219BC4 = fn_82A1E6A0(0,0,0,0);
  if (lbl_83219BC4 != 0) {
    uVar2 = fn_82A1E0C0(0,0x4000,0xffffffff82a25960,0,4,0xffffffff83219bc0);
    lbl_83219BBC = (unsigned int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82A1E338(uVar2,param_1);
      fn_82A1E508(lbl_83219BBC,param_2);
      fn_82A1E2C0(lbl_83219BBC);
      return 0;
    }
    (**(int (***)())(lbl_83219B8C + 4))(lbl_83219BC4);
    lbl_83219BC4 = 0;
  }
  uVar1 = thunk_FUN_82a2b798();
  return uVar1;
}

