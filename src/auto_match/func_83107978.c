extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82238E28();
extern int fn_82238E90();
extern int fn_82238EE8();
extern int fn_82238F80();
extern int fn_825154B8();
extern int fn_82515570();
extern int fn_82516318();
extern int fn_8265CA20();
extern int fn_82F63EC8();
extern unsigned int lbl_831D0ED0;
extern unsigned int lbl_83282660;
extern unsigned int lbl_83282664;
extern unsigned int lbl_83282674;
extern unsigned int lbl_83282678;
extern unsigned int lbl_83282680;
extern unsigned int lbl_83282684;
extern unsigned int lbl_83282688;
extern unsigned int lbl_8328268C;
extern unsigned int lbl_83282690;
extern unsigned int lbl_83282694;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_83107978(void)

{
  unsigned __int64 uVar1;
  unsigned int auStack_40 [4];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  fn_82230110(auStack_40,0xffffffff82196778);
  lbl_83282660 = 4;
  lbl_83282678 = 0xf;
  lbl_83282674 = 0;
  lbl_83282664 = 0;
  fn_82230218(0xffffffff83282664,auStack_40,0,0xffffffffffffffff,0xffffffff83280000,4,0,0);
  lbl_83282680 = fn_82238E28;
  lbl_83282694 = &lbl_831D0ED0;
  lbl_83282684 = fn_82238E90;
  lbl_83282688 = fn_82516318;
  lbl_8328268C = fn_82238EE8;
  lbl_83282690 = fn_82238F80;
  uVar1 = fn_825154B8();
  fn_82515570(uVar1,0xffffffff83282660);
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uStack_2c = 0xf;
  fn_82F63EC8(0xffffffff8313a2d8);
  return;
}

