extern int fn_82512B08();
extern int fn_82512B70();
extern int fn_82520270();
extern int fn_825202C8();
extern int fn_82521468();
extern int fn_825269D0();
extern int fn_825CFD40();
extern int (*lbl_83265A18)();
extern unsigned int lbl_83265A58;
extern unsigned int lbl_8326C2AC;
extern unsigned int lbl_832767B8;
extern unsigned int lbl_83281144;


void fn_82596100(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  uVar2 = (unsigned int)param_2;
  if (uVar1 == uVar2) {
    return;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      fn_825202C8(lbl_832767B8);
    }
    else if (uVar1 < 3) {
      if (lbl_83281144 != 0) {
        fn_82512B70();
        lbl_83281144 = 0;
      }
      if (lbl_83265A58 == 1) {
        fn_82521468(1);
      }
      if (lbl_8326C2AC == 2) {
        fn_825269D0(0x33,0);
      }
      fn_825269D0(0x12,param_1);
    }
  }
  if (lbl_83265A18 != (int (**)())0x0) {
    (*lbl_83265A18)(param_1,param_2);
  }
  if (uVar2 != 0) {
    if (uVar2 != 2) {
      if (uVar2 == 3) {
        fn_825202C8(lbl_832767B8);
      }
      goto LAB_82596230;
    }
    *(unsigned int *)(param_1 + 0x30) = 1;
    fn_82520270();
    if (lbl_83281144 == 0) {
      lbl_83281144 = fn_82512B08(1,1);
    }
    *(unsigned int *)(param_1 + 0x3c) = 4;
    fn_825CFD40(param_1 + 0x2f0,param_1);
  }
  fn_82520270();
LAB_82596230:
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  return;
}

