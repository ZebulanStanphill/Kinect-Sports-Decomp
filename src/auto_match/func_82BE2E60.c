extern int fn_82BE1A20();
extern int fn_82BE1AF0();
extern int fn_82BE2308();
extern int fn_82BE23E8();
extern int fn_82BE2D60();
extern int fn_82BE5240();
extern int fn_82BE7128();
extern int fn_82BE7B98();
extern int fn_82BE83F8();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEE0C8();
extern int fn_82BEE168();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B134;
extern unsigned int lbl_8322B1D8;
extern unsigned int lbl_8322B1DC;


unsigned char fn_82BE2E60(int param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  int iVar4;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  iVar4 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8e0c);
  if (iVar4 == 0) {
    return 0x69;
  }
  if (lbl_8322B130 != 0) {
    if (*(int *)(lbl_8322B130 + 0x10) != 4) {
      fn_82BE1AF0();
      fn_82BE7B98(0x1e);
      uVar1 = *(unsigned short *)(lbl_8322B130 + 0x11c);
      *(unsigned int *)(lbl_8322B130 + 0x10) = 4;
      if ((uVar1 & 1) == 0) {
        if (*(int *)(lbl_8322B130 + 0x180) != 0) {
          fn_82BE2308();
        }
        iVar4 = fn_82BE23E8(lbl_8322B130);
        *(int *)(lbl_8322B130 + 4) = iVar4;
        if (iVar4 != 0) {
          fn_82BE5240(lbl_8322B130,*(unsigned int *)(lbl_8322B130 + 4),0xffffffff82196582);
        }
      }
      if (lbl_8322B1D8 != 0) {
        fn_82BE7128();
      }
      if (lbl_8322B1DC != 0) {
        fn_82BE83F8();
      }
      if ((uVar1 & 1) != 0) {
        fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8e0c);
        lVar2 = fn_82BE1A20();
        return -(lVar2 == 0) & 0xd5;
      }
      *(unsigned __int64 *)(lbl_8322B130 + 0x188) = param_2 & 0xffffffff;
      if (param_1 == 0) {
        iVar4 = thunk_FUN_82be5550(0x18);
        if (iVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = fn_82BEE0C8();
        }
        lbl_8322B134 = (unsigned int)uVar3;
        if ((uVar3 & 0xffffffff) == 0) {
          fn_82BE5240(lbl_8322B130,0x65,0xffffffff82196582);
          fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8e0c);
          fn_82BE1A20();
          return 0x65;
        }
        fn_82BEE168(uVar3,0xffffffff82be2d60,0,0xffffffff820e8dd8);
        fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8e0c);
      }
      else {
        fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8e0c);
        fn_82BE2D60(0);
      }
      return 0;
    }
    fn_82BE5240(lbl_8322B130,0xd5,0xffffffff820e8dec);
  }
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8e0c);
  return 200;
}

