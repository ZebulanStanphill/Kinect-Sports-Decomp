extern int fn_82681B80(int, int, char *, int);
extern char lbl_82012BC4[];
extern char lbl_82012BB4[];
extern char lbl_82012BA4[];
extern char lbl_82012B94[];
extern char lbl_82012B88[];
extern char lbl_82012B7C[];
extern char lbl_82012B70[];
extern char lbl_82012B64[];

void fn_82748DE8(int param_1, int param_2, int param_3)
{
  param_1 = param_1 + 0x78;
  param_2 = param_2 + 0x10;
  fn_82681B80(param_2, param_1, lbl_82012BC4, param_3);
  fn_82681B80(param_2, param_1, lbl_82012BB4, param_3 + 0x10);
  fn_82681B80(param_2, param_1, lbl_82012BA4, param_3 + 0x20);
  fn_82681B80(param_2, param_1, lbl_82012B94, param_3 + 0x30);
  fn_82681B80(param_2, param_1, lbl_82012B88, param_3 + 0x40);
  fn_82681B80(param_2, param_1, lbl_82012B7C, param_3 + 0x50);
  fn_82681B80(param_2, param_1, lbl_82012B70, param_3 + 0x60);
  fn_82681B80(param_2, param_1, lbl_82012B64, param_3 + 0x70);
}
