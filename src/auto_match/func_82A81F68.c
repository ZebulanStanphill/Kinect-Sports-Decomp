extern int fn_8265C990();
extern int fn_82A828B8();
extern int fn_82A84B10();
extern int fn_82A84B20();
extern int fn_82A86110();
extern unsigned char lbl_8322344C;
extern unsigned char lbl_8322344D;
extern unsigned int lbl_83223450;
extern unsigned int lbl_832234AC;


void fn_82A81F68(void)

{
  fn_82A828B8();
  lbl_8322344D = 0;
  fn_82A86110();
  lbl_8322344C = 0;
  XamAvatarShutdown();
  fn_82A84B10();
  fn_82A84B20();
  if (lbl_83223450 != 0) {
    fn_8265C990(lbl_83223450,0x20980000);
    lbl_83223450 = 0;
  }
  lbl_832234AC = 0;
  return;
}

